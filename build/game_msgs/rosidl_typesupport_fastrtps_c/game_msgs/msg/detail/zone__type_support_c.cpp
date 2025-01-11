// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice
#include "game_msgs/msg/detail/zone__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "game_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "game_msgs/msg/detail/zone__struct.h"
#include "game_msgs/msg/detail/zone__functions.h"
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


using _Zone__ros_msg_type = game_msgs__msg__Zone;

static bool _Zone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Zone__ros_msg_type * ros_message = static_cast<const _Zone__ros_msg_type *>(untyped_ros_message);
  // Field name: f1_zone_status
  {
    cdr << ros_message->f1_zone_status;
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr << ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    cdr << ros_message->f2_zone_status;
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr << ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    cdr << ros_message->f3_zone_status;
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr << ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    cdr << ros_message->f4_zone_status;
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr << ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    cdr << ros_message->f5_zone_status;
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr << ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    cdr << ros_message->f6_zone_status;
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr << ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr << ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr << ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr << ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr << ros_message->blue2_bullet_left;
  }

  return true;
}

static bool _Zone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Zone__ros_msg_type * ros_message = static_cast<_Zone__ros_msg_type *>(untyped_ros_message);
  // Field name: f1_zone_status
  {
    cdr >> ros_message->f1_zone_status;
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr >> ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    cdr >> ros_message->f2_zone_status;
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr >> ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    cdr >> ros_message->f3_zone_status;
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr >> ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    cdr >> ros_message->f4_zone_status;
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr >> ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    cdr >> ros_message->f5_zone_status;
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr >> ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    cdr >> ros_message->f6_zone_status;
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr >> ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr >> ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr >> ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr >> ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr >> ros_message->blue2_bullet_left;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_game_msgs
size_t get_serialized_size_game_msgs__msg__Zone(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Zone__ros_msg_type * ros_message = static_cast<const _Zone__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name f1_zone_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f1_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red1_bullet_left
  {
    size_t item_size = sizeof(ros_message->red1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red2_bullet_left
  {
    size_t item_size = sizeof(ros_message->red2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue1_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue2_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Zone__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_game_msgs__msg__Zone(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_game_msgs
size_t max_serialized_size_game_msgs__msg__Zone(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: f1_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f1_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_buff_debuff_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red1_bullet_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red2_bullet_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blue1_bullet_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blue2_bullet_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Zone__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_game_msgs__msg__Zone(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Zone = {
  "game_msgs::msg",
  "Zone",
  _Zone__cdr_serialize,
  _Zone__cdr_deserialize,
  _Zone__get_serialized_size,
  _Zone__max_serialized_size
};

static rosidl_message_type_support_t _Zone__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Zone,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, game_msgs, msg, Zone)() {
  return &_Zone__type_support;
}

#if defined(__cplusplus)
}
#endif
