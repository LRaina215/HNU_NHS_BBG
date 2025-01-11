// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__SHOOTER__BUILDER_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__SHOOTER__BUILDER_HPP_

#include "rmctrl_msgs/msg/detail/shooter__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Shooter_remain_bullet
{
public:
  explicit Init_Shooter_remain_bullet(::rmctrl_msgs::msg::Shooter & msg)
  : msg_(msg)
  {}
  ::rmctrl_msgs::msg::Shooter remain_bullet(::rmctrl_msgs::msg::Shooter::_remain_bullet_type arg)
  {
    msg_.remain_bullet = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmctrl_msgs::msg::Shooter msg_;
};

class Init_Shooter_bullet_vel
{
public:
  explicit Init_Shooter_bullet_vel(::rmctrl_msgs::msg::Shooter & msg)
  : msg_(msg)
  {}
  Init_Shooter_remain_bullet bullet_vel(::rmctrl_msgs::msg::Shooter::_bullet_vel_type arg)
  {
    msg_.bullet_vel = std::move(arg);
    return Init_Shooter_remain_bullet(msg_);
  }

private:
  ::rmctrl_msgs::msg::Shooter msg_;
};

class Init_Shooter_is_shoot
{
public:
  Init_Shooter_is_shoot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shooter_bullet_vel is_shoot(::rmctrl_msgs::msg::Shooter::_is_shoot_type arg)
  {
    msg_.is_shoot = std::move(arg);
    return Init_Shooter_bullet_vel(msg_);
  }

private:
  ::rmctrl_msgs::msg::Shooter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmctrl_msgs::msg::Shooter>()
{
  return rmctrl_msgs::msg::builder::Init_Shooter_is_shoot();
}

}  // namespace rmctrl_msgs

#endif  // RMCTRL_MSGS__MSG__DETAIL__SHOOTER__BUILDER_HPP_
