// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_

#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const bboxes_ex_msgs::msg::BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    value_to_yaml(msg.ymax, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: img_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_width: ";
    value_to_yaml(msg.img_width, out);
    out << "\n";
  }

  // member: img_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_height: ";
    value_to_yaml(msg.img_height, out);
    out << "\n";
  }

  // member: center_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_dist: ";
    value_to_yaml(msg.center_dist, out);
    out << "\n";
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    value_to_yaml(msg.class_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const bboxes_ex_msgs::msg::BoundingBox2D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<bboxes_ex_msgs::msg::BoundingBox2D>()
{
  return "bboxes_ex_msgs::msg::BoundingBox2D";
}

template<>
inline const char * name<bboxes_ex_msgs::msg::BoundingBox2D>()
{
  return "bboxes_ex_msgs/msg/BoundingBox2D";
}

template<>
struct has_fixed_size<bboxes_ex_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bboxes_ex_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bboxes_ex_msgs::msg::BoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
