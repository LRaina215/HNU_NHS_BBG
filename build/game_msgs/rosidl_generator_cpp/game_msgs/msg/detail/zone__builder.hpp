// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ZONE__BUILDER_HPP_
#define GAME_MSGS__MSG__DETAIL__ZONE__BUILDER_HPP_

#include "game_msgs/msg/detail/zone__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace game_msgs
{

namespace msg
{

namespace builder
{

class Init_Zone_blue2_bullet_left
{
public:
  explicit Init_Zone_blue2_bullet_left(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  ::game_msgs::msg::Zone blue2_bullet_left(::game_msgs::msg::Zone::_blue2_bullet_left_type arg)
  {
    msg_.blue2_bullet_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_blue1_bullet_left
{
public:
  explicit Init_Zone_blue1_bullet_left(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_blue2_bullet_left blue1_bullet_left(::game_msgs::msg::Zone::_blue1_bullet_left_type arg)
  {
    msg_.blue1_bullet_left = std::move(arg);
    return Init_Zone_blue2_bullet_left(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_red2_bullet_left
{
public:
  explicit Init_Zone_red2_bullet_left(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_blue1_bullet_left red2_bullet_left(::game_msgs::msg::Zone::_red2_bullet_left_type arg)
  {
    msg_.red2_bullet_left = std::move(arg);
    return Init_Zone_blue1_bullet_left(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_red1_bullet_left
{
public:
  explicit Init_Zone_red1_bullet_left(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_red2_bullet_left red1_bullet_left(::game_msgs::msg::Zone::_red1_bullet_left_type arg)
  {
    msg_.red1_bullet_left = std::move(arg);
    return Init_Zone_red2_bullet_left(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f6_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f6_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_red1_bullet_left f6_zone_buff_debuff_status(::game_msgs::msg::Zone::_f6_zone_buff_debuff_status_type arg)
  {
    msg_.f6_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_red1_bullet_left(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f6_zone_status
{
public:
  explicit Init_Zone_f6_zone_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f6_zone_buff_debuff_status f6_zone_status(::game_msgs::msg::Zone::_f6_zone_status_type arg)
  {
    msg_.f6_zone_status = std::move(arg);
    return Init_Zone_f6_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f5_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f5_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f6_zone_status f5_zone_buff_debuff_status(::game_msgs::msg::Zone::_f5_zone_buff_debuff_status_type arg)
  {
    msg_.f5_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_f6_zone_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f5_zone_status
{
public:
  explicit Init_Zone_f5_zone_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f5_zone_buff_debuff_status f5_zone_status(::game_msgs::msg::Zone::_f5_zone_status_type arg)
  {
    msg_.f5_zone_status = std::move(arg);
    return Init_Zone_f5_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f4_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f4_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f5_zone_status f4_zone_buff_debuff_status(::game_msgs::msg::Zone::_f4_zone_buff_debuff_status_type arg)
  {
    msg_.f4_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_f5_zone_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f4_zone_status
{
public:
  explicit Init_Zone_f4_zone_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f4_zone_buff_debuff_status f4_zone_status(::game_msgs::msg::Zone::_f4_zone_status_type arg)
  {
    msg_.f4_zone_status = std::move(arg);
    return Init_Zone_f4_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f3_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f3_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f4_zone_status f3_zone_buff_debuff_status(::game_msgs::msg::Zone::_f3_zone_buff_debuff_status_type arg)
  {
    msg_.f3_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_f4_zone_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f3_zone_status
{
public:
  explicit Init_Zone_f3_zone_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f3_zone_buff_debuff_status f3_zone_status(::game_msgs::msg::Zone::_f3_zone_status_type arg)
  {
    msg_.f3_zone_status = std::move(arg);
    return Init_Zone_f3_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f2_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f2_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f3_zone_status f2_zone_buff_debuff_status(::game_msgs::msg::Zone::_f2_zone_buff_debuff_status_type arg)
  {
    msg_.f2_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_f3_zone_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f2_zone_status
{
public:
  explicit Init_Zone_f2_zone_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f2_zone_buff_debuff_status f2_zone_status(::game_msgs::msg::Zone::_f2_zone_status_type arg)
  {
    msg_.f2_zone_status = std::move(arg);
    return Init_Zone_f2_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f1_zone_buff_debuff_status
{
public:
  explicit Init_Zone_f1_zone_buff_debuff_status(::game_msgs::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_f2_zone_status f1_zone_buff_debuff_status(::game_msgs::msg::Zone::_f1_zone_buff_debuff_status_type arg)
  {
    msg_.f1_zone_buff_debuff_status = std::move(arg);
    return Init_Zone_f2_zone_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

class Init_Zone_f1_zone_status
{
public:
  Init_Zone_f1_zone_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Zone_f1_zone_buff_debuff_status f1_zone_status(::game_msgs::msg::Zone::_f1_zone_status_type arg)
  {
    msg_.f1_zone_status = std::move(arg);
    return Init_Zone_f1_zone_buff_debuff_status(msg_);
  }

private:
  ::game_msgs::msg::Zone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::game_msgs::msg::Zone>()
{
  return game_msgs::msg::builder::Init_Zone_f1_zone_status();
}

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__ZONE__BUILDER_HPP_
