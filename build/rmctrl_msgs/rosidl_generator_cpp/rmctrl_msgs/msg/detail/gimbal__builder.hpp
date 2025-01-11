// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmctrl_msgs:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__GIMBAL__BUILDER_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__GIMBAL__BUILDER_HPP_

#include "rmctrl_msgs/msg/detail/gimbal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rmctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Gimbal_pitch
{
public:
  explicit Init_Gimbal_pitch(::rmctrl_msgs::msg::Gimbal & msg)
  : msg_(msg)
  {}
  ::rmctrl_msgs::msg::Gimbal pitch(::rmctrl_msgs::msg::Gimbal::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmctrl_msgs::msg::Gimbal msg_;
};

class Init_Gimbal_yaw
{
public:
  explicit Init_Gimbal_yaw(::rmctrl_msgs::msg::Gimbal & msg)
  : msg_(msg)
  {}
  Init_Gimbal_pitch yaw(::rmctrl_msgs::msg::Gimbal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Gimbal_pitch(msg_);
  }

private:
  ::rmctrl_msgs::msg::Gimbal msg_;
};

class Init_Gimbal_header
{
public:
  Init_Gimbal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gimbal_yaw header(::rmctrl_msgs::msg::Gimbal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gimbal_yaw(msg_);
  }

private:
  ::rmctrl_msgs::msg::Gimbal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmctrl_msgs::msg::Gimbal>()
{
  return rmctrl_msgs::msg::builder::Init_Gimbal_header();
}

}  // namespace rmctrl_msgs

#endif  // RMCTRL_MSGS__MSG__DETAIL__GIMBAL__BUILDER_HPP_
