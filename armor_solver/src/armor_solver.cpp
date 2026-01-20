// Created by Chengfu Zou
// Maintained by Chengfu Zou, Labor
// Copyright (C) FYT Vision Group. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "armor_solver/armor_solver.hpp"
// std
#include <cmath>
#include <cstddef>
#include <stdexcept>
// project
#include "armor_solver/armor_solver_node.hpp"
#include "rm_utils/logger/log.hpp"
#include "rm_utils/math/utils.hpp"

const double MANUAL_Z_CONST = std::tan((1.0/45.0) * M_PI); // 约 0.06992

namespace fyt::auto_aim {
Solver::Solver(std::weak_ptr<rclcpp::Node> n) : node_(n) {
  auto node = node_.lock();
  
  shooting_range_w_ = node->declare_parameter("solver.shooting_range_width", 0.135);
  shooting_range_h_ = node->declare_parameter("solver.shooting_range_height", 0.405);
  max_tracking_v_yaw_ = node->declare_parameter("solver.max_tracking_v_yaw", 6.0);
  prediction_delay_ = node->declare_parameter("solver.prediction_delay", 0.0);
  controller_delay_ = node->declare_parameter("solver.controller_delay", 0.0);
  side_angle_ = node->declare_parameter("solver.side_angle", 15.0);
  min_switching_v_yaw_ = node->declare_parameter("solver.min_switching_v_yaw", 1.0);

  std::string compenstator_type = node->declare_parameter("solver.compensator_type", "ideal");
  trajectory_compensator_ = CompensatorFactory::createCompensator(compenstator_type);
  trajectory_compensator_->iteration_times = node->declare_parameter("solver.iteration_times", 20);
  trajectory_compensator_->velocity = node->declare_parameter("solver.bullet_speed", 20.0);
  trajectory_compensator_->gravity = node->declare_parameter("solver.gravity", 9.8);
  trajectory_compensator_->resistance = node->declare_parameter("solver.resistance", 0.001);


  manual_compensator_ = std::make_unique<ManualCompensator>();
  auto angle_offset = node->declare_parameter("solver.angle_offset", std::vector<std::string>{});
  if(!manual_compensator_->updateMapFlow(angle_offset)) {
    FYT_WARN("armor_solver", "Manual compensator update failed!");
  }

  state = State::TRACKING_ARMOR;
  overflow_count_ = 0;
  transfer_thresh_ = 5;

  node.reset();
}

rm_interfaces::msg::GimbalCmd Solver::solve(const rm_interfaces::msg::Target &target,
                                            const rclcpp::Time &current_time,
                                            std::shared_ptr<tf2_ros::Buffer> tf2_buffer_) {
  // Get newest parameters
  try {
    auto node = node_.lock();
    max_tracking_v_yaw_ = node->get_parameter("solver.max_tracking_v_yaw").as_double();
    prediction_delay_ = node->get_parameter("solver.prediction_delay").as_double();
    controller_delay_ = node->get_parameter("solver.controller_delay").as_double();
    side_angle_ = node->get_parameter("solver.side_angle").as_double();
    min_switching_v_yaw_ = node->get_parameter("solver.min_switching_v_yaw").as_double();
    node.reset();
  } catch (const std::runtime_error &e) {
    FYT_ERROR("armor_solver", "{}", e.what());
  }

  // Get current roll, yaw and pitch of gimbal
  // [优化3 - Step 1] 同时也获取云台在 odom 系下的坐标
  geometry_msgs::msg::TransformStamped gimbal_tf;
  try {
    gimbal_tf =
      tf2_buffer_->lookupTransform(target.header.frame_id, "gimbal_link", tf2::TimePointZero);
  } catch (tf2::TransformException &ex) {
    FYT_ERROR("armor_solver", "{}", ex.what());
    throw ex;
  }

  // 提取旋转 (保持原样)
  auto msg_q = gimbal_tf.transform.rotation;
  tf2::Quaternion tf_q;
  tf2::fromMsg(msg_q, tf_q);
  tf2::Matrix3x3(tf_q).getRPY(rpy_[0], rpy_[1], rpy_[2]);
  rpy_[1] = -rpy_[1];

  // [优化3 - Step 2] 提取云台平移向量 (x, y, z)
  Eigen::Vector3d gimbal_pos_odom(
    gimbal_tf.transform.translation.x,
    gimbal_tf.transform.translation.y,
    gimbal_tf.transform.translation.z
  );


  // Use flying time to approximately predict the position of target
  Eigen::Vector3d target_position(target.position.x, target.position.y, target.position.z);
  double target_yaw = target.yaw;
  
  // [优化3 - Step 3] 计算飞行时间时，使用“相对距离”，而不是“绝对坐标的模长”
  // 之前的错误代码: trajectory_compensator_->getFlyingTime(target_position);
  Eigen::Vector3d current_relative_vector = target_position - gimbal_pos_odom;
  double flying_time = trajectory_compensator_->getFlyingTime(current_relative_vector);

  double dt =
    (current_time - rclcpp::Time(target.header.stamp)).seconds() + flying_time + prediction_delay_;
  
  // 预测未来的绝对位置
  target_position.x() += dt * target.velocity.x;
  target_position.y() += dt * target.velocity.y;
  target_position.z() += dt * target.velocity.z;
  target_yaw += dt * target.v_yaw;
  
  /////////////////////////////////////
  // 可视化点直接使用绝对坐标，因为 Marker 也是在 odom 系下画的
  predicted_position_.x = target_position.x();
  predicted_position_.y = target_position.y();
  predicted_position_.z = target_position.z();


  
  // Choose the best armor to shoot
  // getArmorPositions 计算出的装甲板也是绝对坐标
  std::vector<Eigen::Vector3d> armor_positions = getArmorPositions(
    target_position, target_yaw, target.radius_1, target.radius_2, target.d_zc, target.d_za, target.armors_num);
  
  // [优化3 - Step 4] 选甲时，计算角度需要相对于云台的向量
  Eigen::Vector3d predicted_relative_vector = target_position - gimbal_pos_odom;
  
  int idx =
    selectBestArmor(armor_positions, predicted_relative_vector, target_yaw, target.v_yaw, target.armors_num);
  
  auto chosen_armor_position = armor_positions.at(idx);
  
  // 安全检查：判断到目标的距离是否过近（注意这里也要用相对距离）
  if ((chosen_armor_position - gimbal_pos_odom).norm() < 0.1) {
    throw std::runtime_error("No valid armor to shoot");
  }

  // Calculate yaw, pitch, distance
  // [优化3 - Step 5] 最终解算角度，必须传入“目标 - 云台”的相对向量
  Eigen::Vector3d final_target_vector = chosen_armor_position - gimbal_pos_odom;
  double yaw, pitch;
  calcYawAndPitch(final_target_vector, rpy_, yaw, pitch);
  double distance = final_target_vector.norm();

  // Initialize gimbal_cmd
  rm_interfaces::msg::GimbalCmd gimbal_cmd;
  gimbal_cmd.header = target.header;
  gimbal_cmd.distance = distance;
  gimbal_cmd.fire_advice = isOnTarget(rpy_[2], rpy_[1], yaw, pitch, distance);

  switch (state) {
    case TRACKING_ARMOR: {
      if (std::abs(target.v_yaw) > max_tracking_v_yaw_) {
        overflow_count_++;
      } else {
        overflow_count_ = 0;
      }

      if (overflow_count_ > transfer_thresh_) {
        state = TRACKING_CENTER;
      }

      // If isOnTarget() never returns true, adjust controller_delay to force the gimbal to move
      if (controller_delay_ != 0) {
        target_position.x() += controller_delay_ * target.velocity.x;
        target_position.y() += controller_delay_ * target.velocity.y;
        target_position.z() += controller_delay_ * target.velocity.z;
        target_yaw += controller_delay_ * target.v_yaw;
        
        armor_positions = getArmorPositions(target_position,
                                            target_yaw,
                                            target.radius_1,
                                            target.radius_2,
                                            target.d_zc,
                                            target.d_za,
                                            target.armors_num);
        
        // 重新选甲也需要基于新的相对位置
        predicted_relative_vector = target_position - gimbal_pos_odom;
        idx = selectBestArmor(armor_positions, predicted_relative_vector, target_yaw, target.v_yaw, target.armors_num);
        
        chosen_armor_position = armor_positions.at(idx);
        
        // 重新计算相对向量和距离
        final_target_vector = chosen_armor_position - gimbal_pos_odom;
        gimbal_cmd.distance = final_target_vector.norm();
        
        predicted_position_.x = target_position.x();
        predicted_position_.y = target_position.y();
        predicted_position_.z = target_position.z();
        
        if (gimbal_cmd.distance < 0.1) {
          throw std::runtime_error("No valid armor to shoot");
        }
        calcYawAndPitch(final_target_vector, rpy_, yaw, pitch);
      }
      break;
    }
    case TRACKING_CENTER: {
      if (std::abs(target.v_yaw) < max_tracking_v_yaw_) {
         overflow_count_++;
      } else {
        overflow_count_ = 0;
      }

      if (overflow_count_ > transfer_thresh_) {
        state = TRACKING_ARMOR;
        overflow_count_ = 0;
      }
      gimbal_cmd.fire_advice = true;
      // 瞄中心也需要相对向量
      Eigen::Vector3d center_relative_vector = target_position - gimbal_pos_odom;
      calcYawAndPitch(center_relative_vector, rpy_, yaw, pitch);
      break;
    }
  }

  // Compensate angle by angle_offset_map
  // [优化3 - Step 6] 手动补偿表查表也应该使用相对距离
  double final_xy_dist = final_target_vector.head(2).norm();
  double final_z_dist = final_target_vector.z();
  
  auto angle_offset = manual_compensator_->angleHardCorrect(final_xy_dist, final_z_dist);
  double pitch_offset = angle_offset[0] * M_PI / 180;
  double yaw_offset = angle_offset[1] * M_PI / 180;
  double cmd_pitch = pitch + pitch_offset;
  double cmd_yaw = angles::normalize_angle(yaw + yaw_offset);
  
  // 0820
  // 修正可视化点
  predicted_position_.x = target_position.x();
  predicted_position_.y += -std::tan(yaw_offset) * predicted_position_.x;
  // 使用之前算好的相对平面距离
  predicted_position_.z -= (std::tan(pitch_offset) + MANUAL_Z_CONST) * final_xy_dist;

  gimbal_cmd.yaw = cmd_yaw * 180 / M_PI;
  gimbal_cmd.pitch = cmd_pitch * 180 / M_PI - 4.0;  
  gimbal_cmd.yaw_diff = (cmd_yaw - rpy_[2]) * 180 / M_PI;
  gimbal_cmd.pitch_diff = (cmd_pitch - rpy_[1]) * 180 / M_PI;

  if (gimbal_cmd.fire_advice) {
    FYT_DEBUG("armor_solver", "You Need Fire!");
  }
  return gimbal_cmd;
}

bool Solver::isOnTarget(const double cur_yaw,
                        const double cur_pitch,
                        const double target_yaw,
                        const double target_pitch,
                        const double distance) const noexcept {
  // Judge whether to shoot
  double shooting_range_yaw = std::abs(atan2(shooting_range_w_ / 2, distance));
  double shooting_range_pitch = std::abs(atan2(shooting_range_h_ / 2, distance));
  // Limit the shooting area to 1 degree to avoid not shooting when distance is
  // too large
  shooting_range_yaw = std::max(shooting_range_yaw, 1.0 * M_PI / 180);
  shooting_range_pitch = std::max(shooting_range_pitch, 1.0 * M_PI / 180);
  if (std::abs(cur_yaw - target_yaw) < shooting_range_yaw &&
      std::abs(cur_pitch - target_pitch) < shooting_range_pitch) {
    return true;
  }

  return false;
}

std::vector<Eigen::Vector3d> Solver::getArmorPositions(const Eigen::Vector3d &target_center,
                                                       const double target_yaw,
                                                       const double r1,
                                                       const double r2,
                                                       const double d_zc,
                                                       const double d_za,
                                                       const size_t armors_num) const noexcept {
  auto armor_positions = std::vector<Eigen::Vector3d>(armors_num, Eigen::Vector3d::Zero());
  // Calculate the position of each armor
  bool is_current_pair = true;
  double r = 0., target_dz = 0.;
  for (size_t i = 0; i < armors_num; i++) {
    double temp_yaw = target_yaw + i * (2 * M_PI / armors_num);
    if (armors_num == 4) {
      r = is_current_pair ? r1 : r2;
      target_dz = d_zc + (is_current_pair ? 0 : d_za);
      is_current_pair = !is_current_pair;
    } else {
      r = r1;
      target_dz = d_zc;
    }
    armor_positions[i] =
      target_center + Eigen::Vector3d(-r * cos(temp_yaw), -r * sin(temp_yaw), target_dz);
  }
  return armor_positions;
}

int Solver::selectBestArmor(const std::vector<Eigen::Vector3d> &armor_positions,
                            const Eigen::Vector3d &target_center,
                            const double target_yaw,
                            const double target_v_yaw,
                            const size_t armors_num) const noexcept {
  // Angle between the car's center and the X-axis
  double alpha = std::atan2(target_center.y(), target_center.x());
  // Angle between the front of observed armor and the X-axis
  double beta = target_yaw;

  // clang-format off
  Eigen::Matrix2d R_odom2center;
  Eigen::Matrix2d R_odom2armor;
  R_odom2center << std::cos(alpha), std::sin(alpha), 
                  -std::sin(alpha), std::cos(alpha);
  R_odom2armor << std::cos(beta), std::sin(beta), 
                 -std::sin(beta), std::cos(beta);
  // clang-format on
  Eigen::Matrix2d R_center2armor = R_odom2center.transpose() * R_odom2armor;

  // Equal to (alpha - beta) in most cases
  double decision_angle = -std::asin(R_center2armor(0, 1));

  // Angle thresh of the armor jump
  double theta = (target_v_yaw > 0 ? side_angle_ : -side_angle_) / 180.0 * M_PI;

  // Avoid the frequent switch between two armor
  if (std::abs(target_v_yaw) < min_switching_v_yaw_) {
    theta = 0;
  }

  double temp_angle = decision_angle + M_PI / armors_num - theta;

  if (temp_angle < 0) {
    temp_angle += 2 * M_PI;
  }

  int selected_id = static_cast<int>(temp_angle / (2 * M_PI / armors_num));
  return selected_id;
}

void Solver::calcYawAndPitch(const Eigen::Vector3d &p,
                             const std::array<double, 3> rpy,
                             double &yaw,
                             double &pitch) const noexcept {
  // Calculate yaw and pitch
  yaw = atan2(p.y(), p.x());
  pitch = atan2(p.z(), p.head(2).norm());

  if (double temp_pitch = pitch; trajectory_compensator_->compensate(p, temp_pitch)) {
    pitch = temp_pitch;
  }
}

std::vector<std::pair<double, double>> Solver::getTrajectory() const noexcept {
  auto trajectory = trajectory_compensator_->getTrajectory(15, rpy_[1]);
  // Rotate
  for (auto &p : trajectory) {
    double x = p.first;
    double y = p.second;
    p.first = x * cos(rpy_[1]) + y * sin(rpy_[1]);
    p.second = -x * sin(rpy_[1]) + y * cos(rpy_[1]);
  }
  return trajectory;
}

geometry_msgs::msg::Point fyt::auto_aim::Solver::getPredictedPosition() const noexcept {
  return predicted_position_;
}

}  // namespace fyt::auto_aim