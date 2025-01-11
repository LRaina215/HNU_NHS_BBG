// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice
#include "rmctrl_msgs/msg/detail/shooter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmctrl_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmctrl_msgs/msg/detail/shooter__struct.h"
#include "rmctrl_msgs/msg/detail/shooter__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Shooter__ros_msg_type = rmctrl_msgs__msg__Shooter;

static bool _Shooter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Shooter__ros_msg_type * ros_message = static_cast<const _Shooter__ros_msg_type *>(untyped_ros_message);
  // Field name: is_shoot
  {
    cdr << ros_message->is_shoot;
  }

  // Field name: bullet_vel
  {
    cdr << ros_message->bullet_vel;
  }

  // Field name: remain_bullet
  {
    cdr << ros_message->remain_bullet;
  }

  return true;
}

static bool _Shooter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Shooter__ros_msg_type * ros_message = static_cast<_Shooter__ros_msg_type *>(untyped_ros_message);
  // Field name: is_shoot
  {
    cdr >> ros_message->is_shoot;
  }

  // Field name: bullet_vel
  {
    cdr >> ros_message->bullet_vel;
  }

  // Field name: remain_bullet
  {
    cdr >> ros_message->remain_bullet;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmctrl_msgs
size_t get_serialized_size_rmctrl_msgs__msg__Shooter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Shooter__ros_msg_type * ros_message = static_cast<const _Shooter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_shoot
  {
    size_t item_size = sizeof(ros_message->is_shoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bullet_vel
  {
    size_t item_size = sizeof(ros_message->bullet_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_bullet
  {
    size_t item_size = sizeof(ros_message->remain_bullet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Shooter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmctrl_msgs__msg__Shooter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmctrl_msgs
size_t max_serialized_size_rmctrl_msgs__msg__Shooter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_shoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bullet_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_bullet
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Shooter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rmctrl_msgs__msg__Shooter(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Shooter = {
  "rmctrl_msgs::msg",
  "Shooter",
  _Shooter__cdr_serialize,
  _Shooter__cdr_deserialize,
  _Shooter__get_serialized_size,
  _Shooter__max_serialized_size
};

static rosidl_message_type_support_t _Shooter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Shooter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmctrl_msgs, msg, Shooter)() {
  return &_Shooter__type_support;
}

#if defined(__cplusplus)
}
#endif
