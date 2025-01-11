// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GameStatus in the package game_msgs.
typedef struct game_msgs__msg__GameStatus
{
  int8_t game_type;
  int8_t game_progress;
  float stage_remain_time;
} game_msgs__msg__GameStatus;

// Struct for a sequence of game_msgs__msg__GameStatus.
typedef struct game_msgs__msg__GameStatus__Sequence
{
  game_msgs__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} game_msgs__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAME_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
