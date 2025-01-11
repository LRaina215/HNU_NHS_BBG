// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice

#ifndef RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_H_
#define RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Shooter in the package rmctrl_msgs.
typedef struct rmctrl_msgs__msg__Shooter
{
  int8_t is_shoot;
  int32_t bullet_vel;
  int16_t remain_bullet;
} rmctrl_msgs__msg__Shooter;

// Struct for a sequence of rmctrl_msgs__msg__Shooter.
typedef struct rmctrl_msgs__msg__Shooter__Sequence
{
  rmctrl_msgs__msg__Shooter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmctrl_msgs__msg__Shooter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMCTRL_MSGS__MSG__DETAIL__SHOOTER__STRUCT_H_
