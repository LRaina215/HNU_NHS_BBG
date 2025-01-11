// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmctrl_msgs:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__CHASSIS__TRAITS_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__CHASSIS__TRAITS_HPP_

#include "rmctrl_msgs/msg/detail/chassis__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rmctrl_msgs::msg::Chassis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chassis_target_linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_linear_x: ";
    value_to_yaml(msg.chassis_target_linear_x, out);
    out << "\n";
  }

  // member: chassis_target_linear_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_linear_y: ";
    value_to_yaml(msg.chassis_target_linear_y, out);
    out << "\n";
  }

  // member: chassis_target_linear_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_linear_z: ";
    value_to_yaml(msg.chassis_target_linear_z, out);
    out << "\n";
  }

  // member: chassis_target_angular_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_angular_x: ";
    value_to_yaml(msg.chassis_target_angular_x, out);
    out << "\n";
  }

  // member: chassis_target_angular_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_angular_y: ";
    value_to_yaml(msg.chassis_target_angular_y, out);
    out << "\n";
  }

  // member: chassis_target_angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_target_angular_z: ";
    value_to_yaml(msg.chassis_target_angular_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rmctrl_msgs::msg::Chassis & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rmctrl_msgs::msg::Chassis>()
{
  return "rmctrl_msgs::msg::Chassis";
}

template<>
inline const char * name<rmctrl_msgs::msg::Chassis>()
{
  return "rmctrl_msgs/msg/Chassis";
}

template<>
struct has_fixed_size<rmctrl_msgs::msg::Chassis>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmctrl_msgs::msg::Chassis>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmctrl_msgs::msg::Chassis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMCTRL_MSGS__MSG__DETAIL__CHASSIS__TRAITS_HPP_
