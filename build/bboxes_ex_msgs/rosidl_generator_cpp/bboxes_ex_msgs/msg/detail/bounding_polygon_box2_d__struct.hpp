// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bboxes_ex_msgs:msg/BoundingPolygonBox2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_HPP_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bboxes_ex_msgs__msg__BoundingPolygonBox2D __attribute__((deprecated))
#else
# define DEPRECATED__bboxes_ex_msgs__msg__BoundingPolygonBox2D __declspec(deprecated)
#endif

namespace bboxes_ex_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingPolygonBox2D_
{
  using Type = BoundingPolygonBox2D_<ContainerAllocator>;

  explicit BoundingPolygonBox2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = "";
      this->img_width = 0;
      this->img_height = 0;
      this->center_dist = 0l;
      this->type = "";
      this->id = "";
    }
  }

  explicit BoundingPolygonBox2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_id(_alloc),
    pose(_alloc, _init),
    type(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = "";
      this->img_width = 0;
      this->img_height = 0;
      this->center_dist = 0l;
      this->type = "";
      this->id = "";
    }
  }

  // field types and members
  using _class_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_id_type class_id;
  using _pose_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _pose_type pose;
  using _img_width_type =
    uint16_t;
  _img_width_type img_width;
  using _img_height_type =
    uint16_t;
  _img_height_type img_height;
  using _center_dist_type =
    int32_t;
  _center_dist_type center_dist;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__class_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__img_width(
    const uint16_t & _arg)
  {
    this->img_width = _arg;
    return *this;
  }
  Type & set__img_height(
    const uint16_t & _arg)
  {
    this->img_height = _arg;
    return *this;
  }
  Type & set__center_dist(
    const int32_t & _arg)
  {
    this->center_dist = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bboxes_ex_msgs__msg__BoundingPolygonBox2D
    std::shared_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bboxes_ex_msgs__msg__BoundingPolygonBox2D
    std::shared_ptr<bboxes_ex_msgs::msg::BoundingPolygonBox2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingPolygonBox2D_ & other) const
  {
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->img_width != other.img_width) {
      return false;
    }
    if (this->img_height != other.img_height) {
      return false;
    }
    if (this->center_dist != other.center_dist) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingPolygonBox2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingPolygonBox2D_

// alias to use template instance with default allocator
using BoundingPolygonBox2D =
  bboxes_ex_msgs::msg::BoundingPolygonBox2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bboxes_ex_msgs

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_HPP_
