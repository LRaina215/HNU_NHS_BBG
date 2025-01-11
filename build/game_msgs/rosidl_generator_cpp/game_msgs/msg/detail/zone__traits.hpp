// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ZONE__TRAITS_HPP_
#define GAME_MSGS__MSG__DETAIL__ZONE__TRAITS_HPP_

#include "game_msgs/msg/detail/zone__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const game_msgs::msg::Zone & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f1_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_status: ";
    value_to_yaml(msg.f1_zone_status, out);
    out << "\n";
  }

  // member: f1_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_buff_debuff_status: ";
    value_to_yaml(msg.f1_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f2_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_status: ";
    value_to_yaml(msg.f2_zone_status, out);
    out << "\n";
  }

  // member: f2_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_buff_debuff_status: ";
    value_to_yaml(msg.f2_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f3_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_status: ";
    value_to_yaml(msg.f3_zone_status, out);
    out << "\n";
  }

  // member: f3_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_buff_debuff_status: ";
    value_to_yaml(msg.f3_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f4_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_status: ";
    value_to_yaml(msg.f4_zone_status, out);
    out << "\n";
  }

  // member: f4_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_buff_debuff_status: ";
    value_to_yaml(msg.f4_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f5_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_status: ";
    value_to_yaml(msg.f5_zone_status, out);
    out << "\n";
  }

  // member: f5_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_buff_debuff_status: ";
    value_to_yaml(msg.f5_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f6_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_status: ";
    value_to_yaml(msg.f6_zone_status, out);
    out << "\n";
  }

  // member: f6_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_buff_debuff_status: ";
    value_to_yaml(msg.f6_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: red1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red1_bullet_left: ";
    value_to_yaml(msg.red1_bullet_left, out);
    out << "\n";
  }

  // member: red2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red2_bullet_left: ";
    value_to_yaml(msg.red2_bullet_left, out);
    out << "\n";
  }

  // member: blue1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue1_bullet_left: ";
    value_to_yaml(msg.blue1_bullet_left, out);
    out << "\n";
  }

  // member: blue2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue2_bullet_left: ";
    value_to_yaml(msg.blue2_bullet_left, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const game_msgs::msg::Zone & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<game_msgs::msg::Zone>()
{
  return "game_msgs::msg::Zone";
}

template<>
inline const char * name<game_msgs::msg::Zone>()
{
  return "game_msgs/msg/Zone";
}

template<>
struct has_fixed_size<game_msgs::msg::Zone>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<game_msgs::msg::Zone>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<game_msgs::msg::Zone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAME_MSGS__MSG__DETAIL__ZONE__TRAITS_HPP_
