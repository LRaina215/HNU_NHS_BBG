// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bboxes_ex_msgs:msg/ObjectCount.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__STRUCT_H_
#define BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ObjectCount in the package bboxes_ex_msgs.
typedef struct bboxes_ex_msgs__msg__ObjectCount
{
  std_msgs__msg__Header header;
  int8_t count;
} bboxes_ex_msgs__msg__ObjectCount;

// Struct for a sequence of bboxes_ex_msgs__msg__ObjectCount.
typedef struct bboxes_ex_msgs__msg__ObjectCount__Sequence
{
  bboxes_ex_msgs__msg__ObjectCount * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bboxes_ex_msgs__msg__ObjectCount__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__OBJECT_COUNT__STRUCT_H_
