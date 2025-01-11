// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "game_msgs/msg/detail/game_status__rosidl_typesupport_introspection_c.h"
#include "game_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "game_msgs/msg/detail/game_status__functions.h"
#include "game_msgs/msg/detail/game_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GameStatus__rosidl_typesupport_introspection_c__GameStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  game_msgs__msg__GameStatus__init(message_memory);
}

void GameStatus__rosidl_typesupport_introspection_c__GameStatus_fini_function(void * message_memory)
{
  game_msgs__msg__GameStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_member_array[3] = {
  {
    "game_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game_msgs__msg__GameStatus, game_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game_msgs__msg__GameStatus, game_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage_remain_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(game_msgs__msg__GameStatus, stage_remain_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_members = {
  "game_msgs__msg",  // message namespace
  "GameStatus",  // message name
  3,  // number of fields
  sizeof(game_msgs__msg__GameStatus),
  GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_member_array,  // message members
  GameStatus__rosidl_typesupport_introspection_c__GameStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GameStatus__rosidl_typesupport_introspection_c__GameStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle = {
  0,
  &GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_game_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, game_msgs, msg, GameStatus)() {
  if (!GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle.typesupport_identifier) {
    GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
