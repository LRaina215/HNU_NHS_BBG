// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from game_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_HPP_
#define GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__game_msgs__msg__RobotHP __attribute__((deprecated))
#else
# define DEPRECATED__game_msgs__msg__RobotHP __declspec(deprecated)
#endif

namespace game_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHP_
{
  using Type = RobotHP_<ContainerAllocator>;

  explicit RobotHP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_5_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_5_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
    }
  }

  explicit RobotHP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_5_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_5_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
    }
  }

  // field types and members
  using _red_1_robot_hp_type =
    uint16_t;
  _red_1_robot_hp_type red_1_robot_hp;
  using _red_2_robot_hp_type =
    uint16_t;
  _red_2_robot_hp_type red_2_robot_hp;
  using _red_3_robot_hp_type =
    uint16_t;
  _red_3_robot_hp_type red_3_robot_hp;
  using _red_4_robot_hp_type =
    uint16_t;
  _red_4_robot_hp_type red_4_robot_hp;
  using _red_5_robot_hp_type =
    uint16_t;
  _red_5_robot_hp_type red_5_robot_hp;
  using _red_7_robot_hp_type =
    uint16_t;
  _red_7_robot_hp_type red_7_robot_hp;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_1_robot_hp_type =
    uint16_t;
  _blue_1_robot_hp_type blue_1_robot_hp;
  using _blue_2_robot_hp_type =
    uint16_t;
  _blue_2_robot_hp_type blue_2_robot_hp;
  using _blue_3_robot_hp_type =
    uint16_t;
  _blue_3_robot_hp_type blue_3_robot_hp;
  using _blue_4_robot_hp_type =
    uint16_t;
  _blue_4_robot_hp_type blue_4_robot_hp;
  using _blue_5_robot_hp_type =
    uint16_t;
  _blue_5_robot_hp_type blue_5_robot_hp;
  using _blue_7_robot_hp_type =
    uint16_t;
  _blue_7_robot_hp_type blue_7_robot_hp;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;

  // setters for named parameter idiom
  Type & set__red_1_robot_hp(
    const uint16_t & _arg)
  {
    this->red_1_robot_hp = _arg;
    return *this;
  }
  Type & set__red_2_robot_hp(
    const uint16_t & _arg)
  {
    this->red_2_robot_hp = _arg;
    return *this;
  }
  Type & set__red_3_robot_hp(
    const uint16_t & _arg)
  {
    this->red_3_robot_hp = _arg;
    return *this;
  }
  Type & set__red_4_robot_hp(
    const uint16_t & _arg)
  {
    this->red_4_robot_hp = _arg;
    return *this;
  }
  Type & set__red_5_robot_hp(
    const uint16_t & _arg)
  {
    this->red_5_robot_hp = _arg;
    return *this;
  }
  Type & set__red_7_robot_hp(
    const uint16_t & _arg)
  {
    this->red_7_robot_hp = _arg;
    return *this;
  }
  Type & set__red_outpost_hp(
    const uint16_t & _arg)
  {
    this->red_outpost_hp = _arg;
    return *this;
  }
  Type & set__red_base_hp(
    const uint16_t & _arg)
  {
    this->red_base_hp = _arg;
    return *this;
  }
  Type & set__blue_1_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_1_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_2_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_2_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_3_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_3_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_4_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_4_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_5_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_5_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_7_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_7_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_outpost_hp(
    const uint16_t & _arg)
  {
    this->blue_outpost_hp = _arg;
    return *this;
  }
  Type & set__blue_base_hp(
    const uint16_t & _arg)
  {
    this->blue_base_hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    game_msgs::msg::RobotHP_<ContainerAllocator> *;
  using ConstRawPtr =
    const game_msgs::msg::RobotHP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<game_msgs::msg::RobotHP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<game_msgs::msg::RobotHP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::RobotHP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::RobotHP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::RobotHP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::RobotHP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<game_msgs::msg::RobotHP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<game_msgs::msg::RobotHP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__game_msgs__msg__RobotHP
    std::shared_ptr<game_msgs::msg::RobotHP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__game_msgs__msg__RobotHP
    std::shared_ptr<game_msgs::msg::RobotHP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHP_ & other) const
  {
    if (this->red_1_robot_hp != other.red_1_robot_hp) {
      return false;
    }
    if (this->red_2_robot_hp != other.red_2_robot_hp) {
      return false;
    }
    if (this->red_3_robot_hp != other.red_3_robot_hp) {
      return false;
    }
    if (this->red_4_robot_hp != other.red_4_robot_hp) {
      return false;
    }
    if (this->red_5_robot_hp != other.red_5_robot_hp) {
      return false;
    }
    if (this->red_7_robot_hp != other.red_7_robot_hp) {
      return false;
    }
    if (this->red_outpost_hp != other.red_outpost_hp) {
      return false;
    }
    if (this->red_base_hp != other.red_base_hp) {
      return false;
    }
    if (this->blue_1_robot_hp != other.blue_1_robot_hp) {
      return false;
    }
    if (this->blue_2_robot_hp != other.blue_2_robot_hp) {
      return false;
    }
    if (this->blue_3_robot_hp != other.blue_3_robot_hp) {
      return false;
    }
    if (this->blue_4_robot_hp != other.blue_4_robot_hp) {
      return false;
    }
    if (this->blue_5_robot_hp != other.blue_5_robot_hp) {
      return false;
    }
    if (this->blue_7_robot_hp != other.blue_7_robot_hp) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHP_

// alias to use template instance with default allocator
using RobotHP =
  game_msgs::msg::RobotHP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_HPP_
