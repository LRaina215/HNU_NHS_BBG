// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_HPP_
#define RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rmctrl_msgs__msg__Shooter __attribute__((deprecated))
#else
# define DEPRECATED__rmctrl_msgs__msg__Shooter __declspec(deprecated)
#endif

namespace rmctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shooter_
{
  using Type = Shooter_<ContainerAllocator>;

  explicit Shooter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_shoot = 0;
      this->bullet_vel = 0l;
      this->remain_bullet = 0;
    }
  }

  explicit Shooter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_shoot = 0;
      this->bullet_vel = 0l;
      this->remain_bullet = 0;
    }
  }

  // field types and members
  using _is_shoot_type =
    int8_t;
  _is_shoot_type is_shoot;
  using _bullet_vel_type =
    int32_t;
  _bullet_vel_type bullet_vel;
  using _remain_bullet_type =
    int16_t;
  _remain_bullet_type remain_bullet;

  // setters for named parameter idiom
  Type & set__is_shoot(
    const int8_t & _arg)
  {
    this->is_shoot = _arg;
    return *this;
  }
  Type & set__bullet_vel(
    const int32_t & _arg)
  {
    this->bullet_vel = _arg;
    return *this;
  }
  Type & set__remain_bullet(
    const int16_t & _arg)
  {
    this->remain_bullet = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmctrl_msgs::msg::Shooter_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmctrl_msgs::msg::Shooter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmctrl_msgs::msg::Shooter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmctrl_msgs::msg::Shooter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmctrl_msgs__msg__Shooter
    std::shared_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmctrl_msgs__msg__Shooter
    std::shared_ptr<rmctrl_msgs::msg::Shooter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shooter_ & other) const
  {
    if (this->is_shoot != other.is_shoot) {
      return false;
    }
    if (this->bullet_vel != other.bullet_vel) {
      return false;
    }
    if (this->remain_bullet != other.remain_bullet) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shooter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shooter_

// alias to use template instance with default allocator
using Shooter =
  rmctrl_msgs::msg::Shooter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmctrl_msgs

#endif  // RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_HPP_
