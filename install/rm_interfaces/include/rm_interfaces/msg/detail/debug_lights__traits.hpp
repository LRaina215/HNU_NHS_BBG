// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__TRAITS_HPP_

#include "rm_interfaces/msg/detail/debug_lights__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "rm_interfaces/msg/detail/debug_light__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::DebugLights & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::DebugLights & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::DebugLights>()
{
  return "rm_interfaces::msg::DebugLights";
}

template<>
inline const char * name<rm_interfaces::msg::DebugLights>()
{
  return "rm_interfaces/msg/DebugLights";
}

template<>
struct has_fixed_size<rm_interfaces::msg::DebugLights>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::msg::DebugLights>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::msg::DebugLights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__TRAITS_HPP_
