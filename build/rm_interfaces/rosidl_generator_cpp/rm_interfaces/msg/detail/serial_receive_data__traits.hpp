// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_

#include "rm_interfaces/msg/detail/serial_receive_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'judge_system_data'
#include "rm_interfaces/msg/detail/judge_system_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::SerialReceiveData & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: bullet_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_speed: ";
    value_to_yaml(msg.bullet_speed, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    value_to_yaml(msg.roll, out);
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

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: judge_system_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "judge_system_data:\n";
    to_yaml(msg.judge_system_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::SerialReceiveData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::SerialReceiveData>()
{
  return "rm_interfaces::msg::SerialReceiveData";
}

template<>
inline const char * name<rm_interfaces::msg::SerialReceiveData>()
{
  return "rm_interfaces/msg/SerialReceiveData";
}

template<>
struct has_fixed_size<rm_interfaces::msg::SerialReceiveData>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::msg::JudgeSystemData>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::SerialReceiveData>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::msg::JudgeSystemData>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_interfaces::msg::SerialReceiveData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_
