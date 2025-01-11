// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingPolygonBoxes2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOXES2_D__BUILDER_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOXES2_D__BUILDER_HPP_

#include "bboxes_ex_msgs/msg/detail/bounding_polygon_boxes2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bboxes_ex_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingPolygonBoxes2D_bounding_boxes
{
public:
  explicit Init_BoundingPolygonBoxes2D_bounding_boxes(::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D & msg)
  : msg_(msg)
  {}
  ::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D bounding_boxes(::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D msg_;
};

class Init_BoundingPolygonBoxes2D_image_header
{
public:
  explicit Init_BoundingPolygonBoxes2D_image_header(::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBoxes2D_bounding_boxes image_header(::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_BoundingPolygonBoxes2D_bounding_boxes(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D msg_;
};

class Init_BoundingPolygonBoxes2D_header
{
public:
  Init_BoundingPolygonBoxes2D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingPolygonBoxes2D_image_header header(::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingPolygonBoxes2D_image_header(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes_ex_msgs::msg::BoundingPolygonBoxes2D>()
{
  return bboxes_ex_msgs::msg::builder::Init_BoundingPolygonBoxes2D_header();
}

}  // namespace bboxes_ex_msgs

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOXES2_D__BUILDER_HPP_
