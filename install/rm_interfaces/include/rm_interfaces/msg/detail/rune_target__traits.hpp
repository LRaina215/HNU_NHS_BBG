// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/RuneTarget.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_

#include "rm_interfaces/msg/detail/rune_target__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pts'
#include "rm_interfaces/msg/detail/point2d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::msg::RuneTarget & msg,
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

  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts.size() == 0) {
      out << "pts: []\n";
    } else {
      out << "pts:\n";
      for (auto item : msg.pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_lost: ";
    value_to_yaml(msg.is_lost, out);
    out << "\n";
  }

  // member: is_big_rune
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_big_rune: ";
    value_to_yaml(msg.is_big_rune, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::msg::RuneTarget & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::msg::RuneTarget>()
{
  return "rm_interfaces::msg::RuneTarget";
}

template<>
inline const char * name<rm_interfaces::msg::RuneTarget>()
{
  return "rm_interfaces/msg/RuneTarget";
}

template<>
struct has_fixed_size<rm_interfaces::msg::RuneTarget>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::msg::Point2d>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::RuneTarget>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::msg::Point2d>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_interfaces::msg::RuneTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__TRAITS_HPP_
