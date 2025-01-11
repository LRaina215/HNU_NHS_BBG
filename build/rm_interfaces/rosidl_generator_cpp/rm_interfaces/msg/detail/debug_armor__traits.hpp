// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_

#include "rm_interfaces/msg/detail/debug_armor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::DebugArmor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_x: ";
    value_to_yaml(msg.center_x, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: light_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_ratio: ";
    value_to_yaml(msg.light_ratio, out);
    out << "\n";
  }

  // member: center_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_distance: ";
    value_to_yaml(msg.center_distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::DebugArmor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::DebugArmor>()
{
  return "rm_interfaces::msg::DebugArmor";
}

template<>
inline const char * name<rm_interfaces::msg::DebugArmor>()
{
  return "rm_interfaces/msg/DebugArmor";
}

template<>
struct has_fixed_size<rm_interfaces::msg::DebugArmor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::msg::DebugArmor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::msg::DebugArmor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_
