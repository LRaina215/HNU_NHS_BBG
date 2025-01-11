// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice
#include "rmctrl_msgs/msg/detail/shooter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmctrl_msgs/msg/detail/shooter__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rmctrl_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmctrl_msgs
cdr_serialize(
  const rmctrl_msgs::msg::Shooter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_shoot
  cdr << ros_message.is_shoot;
  // Member: bullet_vel
  cdr << ros_message.bullet_vel;
  // Member: remain_bullet
  cdr << ros_message.remain_bullet;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmctrl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmctrl_msgs::msg::Shooter & ros_message)
{
  // Member: is_shoot
  cdr >> ros_message.is_shoot;

  // Member: bullet_vel
  cdr >> ros_message.bullet_vel;

  // Member: remain_bullet
  cdr >> ros_message.remain_bullet;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmctrl_msgs
get_serialized_size(
  const rmctrl_msgs::msg::Shooter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_shoot
  {
    size_t item_size = sizeof(ros_message.is_shoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bullet_vel
  {
    size_t item_size = sizeof(ros_message.bullet_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_bullet
  {
    size_t item_size = sizeof(ros_message.remain_bullet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmctrl_msgs
max_serialized_size_Shooter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_shoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bullet_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_bullet
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Shooter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmctrl_msgs::msg::Shooter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Shooter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmctrl_msgs::msg::Shooter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Shooter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmctrl_msgs::msg::Shooter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Shooter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Shooter(full_bounded, 0);
}

static message_type_support_callbacks_t _Shooter__callbacks = {
  "rmctrl_msgs::msg",
  "Shooter",
  _Shooter__cdr_serialize,
  _Shooter__cdr_deserialize,
  _Shooter__get_serialized_size,
  _Shooter__max_serialized_size
};

static rosidl_message_type_support_t _Shooter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Shooter__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmctrl_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmctrl_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rmctrl_msgs::msg::Shooter>()
{
  return &rmctrl_msgs::msg::typesupport_fastrtps_cpp::_Shooter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmctrl_msgs, msg, Shooter)() {
  return &rmctrl_msgs::msg::typesupport_fastrtps_cpp::_Shooter__handle;
}

#ifdef __cplusplus
}
#endif
