// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bboxes_ex_msgs:msg/ObjectCount.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_

#include "bboxes_ex_msgs/msg/detail/object_count__struct.hpp"
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
  const bboxes_ex_msgs::msg::ObjectCount & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const bboxes_ex_msgs::msg::ObjectCount & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<bboxes_ex_msgs::msg::ObjectCount>()
{
  return "bboxes_ex_msgs::msg::ObjectCount";
}

template<>
inline const char * name<bboxes_ex_msgs::msg::ObjectCount>()
{
  return "bboxes_ex_msgs/msg/ObjectCount";
}

template<>
struct has_fixed_size<bboxes_ex_msgs::msg::ObjectCount>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<bboxes_ex_msgs::msg::ObjectCount>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<bboxes_ex_msgs::msg::ObjectCount>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_
