// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define GAME_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include "game_msgs/msg/detail/game_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace game_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::game_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::game_msgs::msg::GameStatus stage_remain_time(::game_msgs::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::game_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::game_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::game_msgs::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::game_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  Init_GameStatus_game_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_progress game_type(::game_msgs::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::game_msgs::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::game_msgs::msg::GameStatus>()
{
  return game_msgs::msg::builder::Init_GameStatus_game_type();
}

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
