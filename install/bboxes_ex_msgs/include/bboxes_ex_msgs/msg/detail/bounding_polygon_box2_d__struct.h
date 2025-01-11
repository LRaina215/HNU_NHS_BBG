// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bboxes_ex_msgs:msg/BoundingPolygonBox2D.idl
// generated code does not contain a copyright notice

#ifndef BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_H_
#define BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_id'
// Member 'type'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/polygon__struct.h"

// Struct defined in msg/BoundingPolygonBox2D in the package bboxes_ex_msgs.
typedef struct bboxes_ex_msgs__msg__BoundingPolygonBox2D
{
  rosidl_runtime_c__String class_id;
  geometry_msgs__msg__Polygon pose;
  uint16_t img_width;
  uint16_t img_height;
  int32_t center_dist;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
} bboxes_ex_msgs__msg__BoundingPolygonBox2D;

// Struct for a sequence of bboxes_ex_msgs__msg__BoundingPolygonBox2D.
typedef struct bboxes_ex_msgs__msg__BoundingPolygonBox2D__Sequence
{
  bboxes_ex_msgs__msg__BoundingPolygonBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bboxes_ex_msgs__msg__BoundingPolygonBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BBOXES_EX_MSGS__MSG__DETAIL__BOUNDING_POLYGON_BOX2_D__STRUCT_H_
