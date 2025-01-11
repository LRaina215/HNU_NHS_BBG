// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_H_
#define GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Zone in the package game_msgs.
typedef struct game_msgs__msg__Zone
{
  int8_t f1_zone_status;
  int8_t f1_zone_buff_debuff_status;
  int8_t f2_zone_status;
  int8_t f2_zone_buff_debuff_status;
  int8_t f3_zone_status;
  int8_t f3_zone_buff_debuff_status;
  int8_t f4_zone_status;
  int8_t f4_zone_buff_debuff_status;
  int8_t f5_zone_status;
  int8_t f5_zone_buff_debuff_status;
  int8_t f6_zone_status;
  int8_t f6_zone_buff_debuff_status;
  int8_t red1_bullet_left;
  int8_t red2_bullet_left;
  int8_t blue1_bullet_left;
  int8_t blue2_bullet_left;
} game_msgs__msg__Zone;

// Struct for a sequence of game_msgs__msg__Zone.
typedef struct game_msgs__msg__Zone__Sequence
{
  game_msgs__msg__Zone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} game_msgs__msg__Zone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAME_MSGS__MSG__DETAIL__ZONE__STRUCT_H_
