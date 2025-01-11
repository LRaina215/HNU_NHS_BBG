// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmctrl_msgs:msg/Odom.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__ODOM__TRAITS_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__ODOM__TRAITS_HPP_

#include "rmctrl_msgs/msg/detail/odom__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rmctrl_msgs::msg::Odom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: odom_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_position_x: ";
    value_to_yaml(msg.odom_position_x, out);
    out << "\n";
  }

  // member: odom_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_position_y: ";
    value_to_yaml(msg.odom_position_y, out);
    out << "\n";
  }

  // member: odom_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_position_z: ";
    value_to_yaml(msg.odom_position_z, out);
    out << "\n";
  }

  // member: odom_orientation_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_orientation_x: ";
    value_to_yaml(msg.odom_orientation_x, out);
    out << "\n";
  }

  // member: odom_orientation_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_orientation_y: ";
    value_to_yaml(msg.odom_orientation_y, out);
    out << "\n";
  }

  // member: odom_orientation_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_orientation_z: ";
    value_to_yaml(msg.odom_orientation_z, out);
    out << "\n";
  }

  // member: odom_orientation_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_orientation_w: ";
    value_to_yaml(msg.odom_orientation_w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rmctrl_msgs::msg::Odom & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rmctrl_msgs::msg::Odom>()
{
  return "rmctrl_msgs::msg::Odom";
}

template<>
inline const char * name<rmctrl_msgs::msg::Odom>()
{
  return "rmctrl_msgs/msg/Odom";
}

template<>
struct has_fixed_size<rmctrl_msgs::msg::Odom>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmctrl_msgs::msg::Odom>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmctrl_msgs::msg::Odom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMCTRL_MSGS__MSG__DETAIL__ODOM__TRAITS_HPP_
