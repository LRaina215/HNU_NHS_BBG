// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_HPP_
#define GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__game_msgs__msg__Zone __attribute__((deprecated))
#else
# define DEPRECATED__game_msgs__msg__Zone __declspec(deprecated)
#endif

namespace game_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Zone_
{
  using Type = Zone_<ContainerAllocator>;

  explicit Zone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = 0;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = 0;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = 0;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = 0;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = 0;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = 0;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
    }
  }

  explicit Zone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = 0;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = 0;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = 0;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = 0;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = 0;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = 0;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
    }
  }

  // field types and members
  using _f1_zone_status_type =
    int8_t;
  _f1_zone_status_type f1_zone_status;
  using _f1_zone_buff_debuff_status_type =
    int8_t;
  _f1_zone_buff_debuff_status_type f1_zone_buff_debuff_status;
  using _f2_zone_status_type =
    int8_t;
  _f2_zone_status_type f2_zone_status;
  using _f2_zone_buff_debuff_status_type =
    int8_t;
  _f2_zone_buff_debuff_status_type f2_zone_buff_debuff_status;
  using _f3_zone_status_type =
    int8_t;
  _f3_zone_status_type f3_zone_status;
  using _f3_zone_buff_debuff_status_type =
    int8_t;
  _f3_zone_buff_debuff_status_type f3_zone_buff_debuff_status;
  using _f4_zone_status_type =
    int8_t;
  _f4_zone_status_type f4_zone_status;
  using _f4_zone_buff_debuff_status_type =
    int8_t;
  _f4_zone_buff_debuff_status_type f4_zone_buff_debuff_status;
  using _f5_zone_status_type =
    int8_t;
  _f5_zone_status_type f5_zone_status;
  using _f5_zone_buff_debuff_status_type =
    int8_t;
  _f5_zone_buff_debuff_status_type f5_zone_buff_debuff_status;
  using _f6_zone_status_type =
    int8_t;
  _f6_zone_status_type f6_zone_status;
  using _f6_zone_buff_debuff_status_type =
    int8_t;
  _f6_zone_buff_debuff_status_type f6_zone_buff_debuff_status;
  using _red1_bullet_left_type =
    int8_t;
  _red1_bullet_left_type red1_bullet_left;
  using _red2_bullet_left_type =
    int8_t;
  _red2_bullet_left_type red2_bullet_left;
  using _blue1_bullet_left_type =
    int8_t;
  _blue1_bullet_left_type blue1_bullet_left;
  using _blue2_bullet_left_type =
    int8_t;
  _blue2_bullet_left_type blue2_bullet_left;

  // setters for named parameter idiom
  Type & set__f1_zone_status(
    const int8_t & _arg)
  {
    this->f1_zone_status = _arg;
    return *this;
  }
  Type & set__f1_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f1_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f2_zone_status(
    const int8_t & _arg)
  {
    this->f2_zone_status = _arg;
    return *this;
  }
  Type & set__f2_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f2_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f3_zone_status(
    const int8_t & _arg)
  {
    this->f3_zone_status = _arg;
    return *this;
  }
  Type & set__f3_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f3_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f4_zone_status(
    const int8_t & _arg)
  {
    this->f4_zone_status = _arg;
    return *this;
  }
  Type & set__f4_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f4_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f5_zone_status(
    const int8_t & _arg)
  {
    this->f5_zone_status = _arg;
    return *this;
  }
  Type & set__f5_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f5_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f6_zone_status(
    const int8_t & _arg)
  {
    this->f6_zone_status = _arg;
    return *this;
  }
  Type & set__f6_zone_buff_debuff_status(
    const int8_t & _arg)
  {
    this->f6_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__red1_bullet_left(
    const int8_t & _arg)
  {
    this->red1_bullet_left = _arg;
    return *this;
  }
  Type & set__red2_bullet_left(
    const int8_t & _arg)
  {
    this->red2_bullet_left = _arg;
    return *this;
  }
  Type & set__blue1_bullet_left(
    const int8_t & _arg)
  {
    this->blue1_bullet_left = _arg;
    return *this;
  }
  Type & set__blue2_bullet_left(
    const int8_t & _arg)
  {
    this->blue2_bullet_left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    game_msgs::msg::Zone_<ContainerAllocator> *;
  using ConstRawPtr =
    const game_msgs::msg::Zone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<game_msgs::msg::Zone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<game_msgs::msg::Zone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::Zone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::Zone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::Zone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::Zone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<game_msgs::msg::Zone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<game_msgs::msg::Zone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__game_msgs__msg__Zone
    std::shared_ptr<game_msgs::msg::Zone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__game_msgs__msg__Zone
    std::shared_ptr<game_msgs::msg::Zone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Zone_ & other) const
  {
    if (this->f1_zone_status != other.f1_zone_status) {
      return false;
    }
    if (this->f1_zone_buff_debuff_status != other.f1_zone_buff_debuff_status) {
      return false;
    }
    if (this->f2_zone_status != other.f2_zone_status) {
      return false;
    }
    if (this->f2_zone_buff_debuff_status != other.f2_zone_buff_debuff_status) {
      return false;
    }
    if (this->f3_zone_status != other.f3_zone_status) {
      return false;
    }
    if (this->f3_zone_buff_debuff_status != other.f3_zone_buff_debuff_status) {
      return false;
    }
    if (this->f4_zone_status != other.f4_zone_status) {
      return false;
    }
    if (this->f4_zone_buff_debuff_status != other.f4_zone_buff_debuff_status) {
      return false;
    }
    if (this->f5_zone_status != other.f5_zone_status) {
      return false;
    }
    if (this->f5_zone_buff_debuff_status != other.f5_zone_buff_debuff_status) {
      return false;
    }
    if (this->f6_zone_status != other.f6_zone_status) {
      return false;
    }
    if (this->f6_zone_buff_debuff_status != other.f6_zone_buff_debuff_status) {
      return false;
    }
    if (this->red1_bullet_left != other.red1_bullet_left) {
      return false;
    }
    if (this->red2_bullet_left != other.red2_bullet_left) {
      return false;
    }
    if (this->blue1_bullet_left != other.blue1_bullet_left) {
      return false;
    }
    if (this->blue2_bullet_left != other.blue2_bullet_left) {
      return false;
    }
    return true;
  }
  bool operator!=(const Zone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Zone_

// alias to use template instance with default allocator
using Zone =
  game_msgs::msg::Zone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_HPP_
