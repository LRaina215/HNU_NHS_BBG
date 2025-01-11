// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingPolygonBox2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__BUILDER_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__BUILDER_HPP_

#include "bboxes_ex_msgs/msg/detail/bounding_polygon_box2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bboxes_ex_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingPolygonBox2D_id
{
public:
  explicit Init_BoundingPolygonBox2D_id(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D id(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_type
{
public:
  explicit Init_BoundingPolygonBox2D_type(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBox2D_id type(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_BoundingPolygonBox2D_id(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_center_dist
{
public:
  explicit Init_BoundingPolygonBox2D_center_dist(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBox2D_type center_dist(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_center_dist_type arg)
  {
    msg_.center_dist = std::move(arg);
    return Init_BoundingPolygonBox2D_type(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_img_height
{
public:
  explicit Init_BoundingPolygonBox2D_img_height(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBox2D_center_dist img_height(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_img_height_type arg)
  {
    msg_.img_height = std::move(arg);
    return Init_BoundingPolygonBox2D_center_dist(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_img_width
{
public:
  explicit Init_BoundingPolygonBox2D_img_width(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBox2D_img_height img_width(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_img_width_type arg)
  {
    msg_.img_width = std::move(arg);
    return Init_BoundingPolygonBox2D_img_height(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_pose
{
public:
  explicit Init_BoundingPolygonBox2D_pose(::bboxes_ex_msgs::msg::BoundingPolygonBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingPolygonBox2D_img_width pose(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_BoundingPolygonBox2D_img_width(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

class Init_BoundingPolygonBox2D_class_id
{
public:
  Init_BoundingPolygonBox2D_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingPolygonBox2D_pose class_id(::bboxes_ex_msgs::msg::BoundingPolygonBox2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_BoundingPolygonBox2D_pose(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingPolygonBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes_ex_msgs::msg::BoundingPolygonBox2D>()
{
  return bboxes_ex_msgs::msg::builder::Init_BoundingPolygonBox2D_class_id();
}

}  // namespace bboxes_ex_msgs

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__BUILDER_HPP_
