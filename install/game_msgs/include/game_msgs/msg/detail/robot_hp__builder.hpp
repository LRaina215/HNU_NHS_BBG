// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from game_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_
#define GAME_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_

#include "game_msgs/msg/detail/robot_hp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace game_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHP_blue_base_hp
{
public:
  explicit Init_RobotHP_blue_base_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  ::game_msgs::msg::RobotHP blue_base_hp(::game_msgs::msg::RobotHP::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_outpost_hp
{
public:
  explicit Init_RobotHP_blue_outpost_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_base_hp blue_outpost_hp(::game_msgs::msg::RobotHP::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_RobotHP_blue_base_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_7_robot_hp
{
public:
  explicit Init_RobotHP_blue_7_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_outpost_hp blue_7_robot_hp(::game_msgs::msg::RobotHP::_blue_7_robot_hp_type arg)
  {
    msg_.blue_7_robot_hp = std::move(arg);
    return Init_RobotHP_blue_outpost_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_5_robot_hp
{
public:
  explicit Init_RobotHP_blue_5_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_7_robot_hp blue_5_robot_hp(::game_msgs::msg::RobotHP::_blue_5_robot_hp_type arg)
  {
    msg_.blue_5_robot_hp = std::move(arg);
    return Init_RobotHP_blue_7_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_4_robot_hp
{
public:
  explicit Init_RobotHP_blue_4_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_5_robot_hp blue_4_robot_hp(::game_msgs::msg::RobotHP::_blue_4_robot_hp_type arg)
  {
    msg_.blue_4_robot_hp = std::move(arg);
    return Init_RobotHP_blue_5_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_3_robot_hp
{
public:
  explicit Init_RobotHP_blue_3_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_4_robot_hp blue_3_robot_hp(::game_msgs::msg::RobotHP::_blue_3_robot_hp_type arg)
  {
    msg_.blue_3_robot_hp = std::move(arg);
    return Init_RobotHP_blue_4_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_2_robot_hp
{
public:
  explicit Init_RobotHP_blue_2_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_3_robot_hp blue_2_robot_hp(::game_msgs::msg::RobotHP::_blue_2_robot_hp_type arg)
  {
    msg_.blue_2_robot_hp = std::move(arg);
    return Init_RobotHP_blue_3_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_1_robot_hp
{
public:
  explicit Init_RobotHP_blue_1_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_2_robot_hp blue_1_robot_hp(::game_msgs::msg::RobotHP::_blue_1_robot_hp_type arg)
  {
    msg_.blue_1_robot_hp = std::move(arg);
    return Init_RobotHP_blue_2_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_base_hp
{
public:
  explicit Init_RobotHP_red_base_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_1_robot_hp red_base_hp(::game_msgs::msg::RobotHP::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_RobotHP_blue_1_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_outpost_hp
{
public:
  explicit Init_RobotHP_red_outpost_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_base_hp red_outpost_hp(::game_msgs::msg::RobotHP::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_RobotHP_red_base_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_7_robot_hp
{
public:
  explicit Init_RobotHP_red_7_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_outpost_hp red_7_robot_hp(::game_msgs::msg::RobotHP::_red_7_robot_hp_type arg)
  {
    msg_.red_7_robot_hp = std::move(arg);
    return Init_RobotHP_red_outpost_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_5_robot_hp
{
public:
  explicit Init_RobotHP_red_5_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_7_robot_hp red_5_robot_hp(::game_msgs::msg::RobotHP::_red_5_robot_hp_type arg)
  {
    msg_.red_5_robot_hp = std::move(arg);
    return Init_RobotHP_red_7_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_4_robot_hp
{
public:
  explicit Init_RobotHP_red_4_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_5_robot_hp red_4_robot_hp(::game_msgs::msg::RobotHP::_red_4_robot_hp_type arg)
  {
    msg_.red_4_robot_hp = std::move(arg);
    return Init_RobotHP_red_5_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_3_robot_hp
{
public:
  explicit Init_RobotHP_red_3_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_4_robot_hp red_3_robot_hp(::game_msgs::msg::RobotHP::_red_3_robot_hp_type arg)
  {
    msg_.red_3_robot_hp = std::move(arg);
    return Init_RobotHP_red_4_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_2_robot_hp
{
public:
  explicit Init_RobotHP_red_2_robot_hp(::game_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_3_robot_hp red_2_robot_hp(::game_msgs::msg::RobotHP::_red_2_robot_hp_type arg)
  {
    msg_.red_2_robot_hp = std::move(arg);
    return Init_RobotHP_red_3_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_1_robot_hp
{
public:
  Init_RobotHP_red_1_robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHP_red_2_robot_hp red_1_robot_hp(::game_msgs::msg::RobotHP::_red_1_robot_hp_type arg)
  {
    msg_.red_1_robot_hp = std::move(arg);
    return Init_RobotHP_red_2_robot_hp(msg_);
  }

private:
  ::game_msgs::msg::RobotHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::game_msgs::msg::RobotHP>()
{
  return game_msgs::msg::builder::Init_RobotHP_red_1_robot_hp();
}

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_
