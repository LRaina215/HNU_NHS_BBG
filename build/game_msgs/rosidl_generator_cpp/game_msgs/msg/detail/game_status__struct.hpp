// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_
#define GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__game_msgs__msg__GameStatus __attribute__((deprecated))
#else
# define DEPRECATED__game_msgs__msg__GameStatus __declspec(deprecated)
#endif

namespace game_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameStatus_
{
  using Type = GameStatus_<ContainerAllocator>;

  explicit GameStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0.0f;
    }
  }

  explicit GameStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0.0f;
    }
  }

  // field types and members
  using _game_type_type =
    int8_t;
  _game_type_type game_type;
  using _game_progress_type =
    int8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    float;
  _stage_remain_time_type stage_remain_time;

  // setters for named parameter idiom
  Type & set__game_type(
    const int8_t & _arg)
  {
    this->game_type = _arg;
    return *this;
  }
  Type & set__game_progress(
    const int8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const float & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    game_msgs::msg::GameStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const game_msgs::msg::GameStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<game_msgs::msg::GameStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<game_msgs::msg::GameStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::GameStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::GameStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      game_msgs::msg::GameStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<game_msgs::msg::GameStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<game_msgs::msg::GameStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<game_msgs::msg::GameStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__game_msgs__msg__GameStatus
    std::shared_ptr<game_msgs::msg::GameStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__game_msgs__msg__GameStatus
    std::shared_ptr<game_msgs::msg::GameStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameStatus_ & other) const
  {
    if (this->game_type != other.game_type) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameStatus_

// alias to use template instance with default allocator
using GameStatus =
  game_msgs::msg::GameStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace game_msgs

#endif  // GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_HPP_
