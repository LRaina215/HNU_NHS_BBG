// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__SHOOTER__TRAITS_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__SHOOTER__TRAITS_HPP_

#include "rmctrl_msgs/msg/detail/shooter__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rmctrl_msgs::msg::Shooter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_shoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_shoot: ";
    value_to_yaml(msg.is_shoot, out);
    out << "\n";
  }

  // member: bullet_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_vel: ";
    value_to_yaml(msg.bullet_vel, out);
    out << "\n";
  }

  // member: remain_bullet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_bullet: ";
    value_to_yaml(msg.remain_bullet, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rmctrl_msgs::msg::Shooter & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rmctrl_msgs::msg::Shooter>()
{
  return "rmctrl_msgs::msg::Shooter";
}

template<>
inline const char * name<rmctrl_msgs::msg::Shooter>()
{
  return "rmctrl_msgs/msg/Shooter";
}

template<>
struct has_fixed_size<rmctrl_msgs::msg::Shooter>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmctrl_msgs::msg::Shooter>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmctrl_msgs::msg::Shooter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMCTRL_MSGS__MSG__DETAIL__SHOOTER__TRAITS_HPP_
