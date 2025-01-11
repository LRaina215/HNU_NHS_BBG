// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
#define GAME_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_

#include "game_msgs/msg/detail/game_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const game_msgs::msg::GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_type: ";
    value_to_yaml(msg.game_type, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const game_msgs::msg::GameStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<game_msgs::msg::GameStatus>()
{
  return "game_msgs::msg::GameStatus";
}

template<>
inline const char * name<game_msgs::msg::GameStatus>()
{
  return "game_msgs/msg/GameStatus";
}

template<>
struct has_fixed_size<game_msgs::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<game_msgs::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<game_msgs::msg::GameStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAME_MSGS__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
