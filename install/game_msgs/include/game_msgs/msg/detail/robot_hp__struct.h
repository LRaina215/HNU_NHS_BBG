// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from game_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_
#define GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotHP in the package game_msgs.
typedef struct game_msgs__msg__RobotHP
{
  uint16_t red_1_robot_hp;
  uint16_t red_2_robot_hp;
  uint16_t red_3_robot_hp;
  uint16_t red_4_robot_hp;
  uint16_t red_5_robot_hp;
  uint16_t red_7_robot_hp;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  uint16_t blue_1_robot_hp;
  uint16_t blue_2_robot_hp;
  uint16_t blue_3_robot_hp;
  uint16_t blue_4_robot_hp;
  uint16_t blue_5_robot_hp;
  uint16_t blue_7_robot_hp;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
} game_msgs__msg__RobotHP;

// Struct for a sequence of game_msgs__msg__RobotHP.
typedef struct game_msgs__msg__RobotHP__Sequence
{
  game_msgs__msg__RobotHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} game_msgs__msg__RobotHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAME_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_
