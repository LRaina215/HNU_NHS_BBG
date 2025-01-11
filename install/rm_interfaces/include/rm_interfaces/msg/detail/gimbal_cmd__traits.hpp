// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_

#include "rm_interfaces/msg/detail/gimbal_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::GimbalCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: yaw_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_diff: ";
    value_to_yaml(msg.yaw_diff, out);
    out << "\n";
  }

  // member: pitch_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_diff: ";
    value_to_yaml(msg.pitch_diff, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: fire_advice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fire_advice: ";
    value_to_yaml(msg.fire_advice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::GimbalCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::GimbalCmd>()
{
  return "rm_interfaces::msg::GimbalCmd";
}

template<>
inline const char * name<rm_interfaces::msg::GimbalCmd>()
{
  return "rm_interfaces/msg/GimbalCmd";
}

template<>
struct has_fixed_size<rm_interfaces::msg::GimbalCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::GimbalCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_interfaces::msg::GimbalCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__TRAITS_HPP_
