// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__TRAITS_HPP_

#include "rm_interfaces/msg/detail/operator_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::OperatorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_retreating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_retreating: ";
    value_to_yaml(msg.is_retreating, out);
    out << "\n";
  }

  // member: is_drone_avoiding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_drone_avoiding: ";
    value_to_yaml(msg.is_drone_avoiding, out);
    out << "\n";
  }

  // member: is_outpost_attacking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_outpost_attacking: ";
    value_to_yaml(msg.is_outpost_attacking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::OperatorCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::OperatorCommand>()
{
  return "rm_interfaces::msg::OperatorCommand";
}

template<>
inline const char * name<rm_interfaces::msg::OperatorCommand>()
{
  return "rm_interfaces/msg/OperatorCommand";
}

template<>
struct has_fixed_size<rm_interfaces::msg::OperatorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::msg::OperatorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::msg::OperatorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__OPERATOR_COMMAND__TRAITS_HPP_
