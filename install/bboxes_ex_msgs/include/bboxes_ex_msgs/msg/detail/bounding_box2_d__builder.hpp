// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_

#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bboxes_ex_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox2D_class_id
{
public:
  explicit Init_BoundingBox2D_class_id(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  ::bboxes_ex_msgs::msg::BoundingBox2D class_id(::bboxes_ex_msgs::msg::BoundingBox2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_center_dist
{
public:
  explicit Init_BoundingBox2D_center_dist(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_class_id center_dist(::bboxes_ex_msgs::msg::BoundingBox2D::_center_dist_type arg)
  {
    msg_.center_dist = std::move(arg);
    return Init_BoundingBox2D_class_id(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_img_height
{
public:
  explicit Init_BoundingBox2D_img_height(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_center_dist img_height(::bboxes_ex_msgs::msg::BoundingBox2D::_img_height_type arg)
  {
    msg_.img_height = std::move(arg);
    return Init_BoundingBox2D_center_dist(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_img_width
{
public:
  explicit Init_BoundingBox2D_img_width(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_img_height img_width(::bboxes_ex_msgs::msg::BoundingBox2D::_img_width_type arg)
  {
    msg_.img_width = std::move(arg);
    return Init_BoundingBox2D_img_height(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_id
{
public:
  explicit Init_BoundingBox2D_id(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_img_width id(::bboxes_ex_msgs::msg::BoundingBox2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoundingBox2D_img_width(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_ymax
{
public:
  explicit Init_BoundingBox2D_ymax(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_id ymax(::bboxes_ex_msgs::msg::BoundingBox2D::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_BoundingBox2D_id(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_xmax
{
public:
  explicit Init_BoundingBox2D_xmax(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_ymax xmax(::bboxes_ex_msgs::msg::BoundingBox2D::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox2D_ymax(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_ymin
{
public:
  explicit Init_BoundingBox2D_ymin(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_xmax ymin(::bboxes_ex_msgs::msg::BoundingBox2D::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox2D_xmax(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_xmin
{
public:
  explicit Init_BoundingBox2D_xmin(::bboxes_ex_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2D_ymin xmin(::bboxes_ex_msgs::msg::BoundingBox2D::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox2D_ymin(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_probability
{
public:
  Init_BoundingBox2D_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox2D_xmin probability(::bboxes_ex_msgs::msg::BoundingBox2D::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_BoundingBox2D_xmin(msg_);
  }

private:
  ::bboxes_ex_msgs::msg::BoundingBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes_ex_msgs::msg::BoundingBox2D>()
{
  return bboxes_ex_msgs::msg::builder::Init_BoundingBox2D_probability();
}

}  // namespace bboxes_ex_msgs

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
