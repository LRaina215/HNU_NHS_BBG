// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingBoxes2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOXES2_D__TRAITS_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOXES2_D__TRAITS_HPP_

#include "bboxes_ex_msgs/msg/detail/bounding_boxes2_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bounding_boxes'
#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const bboxes_ex_msgs::msg::BoundingBoxes2D & msg,
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

  // member: image_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header:\n";
    to_yaml(msg.image_header, out, indentation + 2);
  }

  // member: bounding_boxes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []\n";
    } else {
      out << "bounding_boxes:\n";
      for (auto item : msg.bounding_boxes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const bboxes_ex_msgs::msg::BoundingBoxes2D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<bboxes_ex_msgs::msg::BoundingBoxes2D>()
{
  return "bboxes_ex_msgs::msg::BoundingBoxes2D";
}

template<>
inline const char * name<bboxes_ex_msgs::msg::BoundingBoxes2D>()
{
  return "bboxes_ex_msgs/msg/BoundingBoxes2D";
}

template<>
struct has_fixed_size<bboxes_ex_msgs::msg::BoundingBoxes2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bboxes_ex_msgs::msg::BoundingBoxes2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bboxes_ex_msgs::msg::BoundingBoxes2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOXES2_D__TRAITS_HPP_
