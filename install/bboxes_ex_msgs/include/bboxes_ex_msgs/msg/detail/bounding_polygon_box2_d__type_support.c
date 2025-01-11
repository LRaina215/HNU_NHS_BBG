// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bboxes_ex_msgs:msg/BoundingPolygonBox2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bboxes_ex_msgs/msg/detail/bounding_polygon_box2_d__rosidl_typesupport_introspection_c.h"
#include "bboxes_ex_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bboxes_ex_msgs/msg/detail/bounding_polygon_box2_d__functions.h"
#include "bboxes_ex_msgs/msg/detail/bounding_polygon_box2_d__struct.h"


// Include directives for member types
// Member `class_id`
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/polygon.h"
// Member `pose`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bboxes_ex_msgs__msg__BoundingPolygonBox2D__init(message_memory);
}

void BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_fini_function(void * message_memory)
{
  bboxes_ex_msgs__msg__BoundingPolygonBox2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_member_array[7] = {
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, img_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, img_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, center_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingPolygonBox2D, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_members = {
  "bboxes_ex_msgs__msg",  // message namespace
  "BoundingPolygonBox2D",  // message name
  7,  // number of fields
  sizeof(bboxes_ex_msgs__msg__BoundingPolygonBox2D),
  BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_member_array,  // message members
  BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_type_support_handle = {
  0,
  &BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bboxes_ex_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes_ex_msgs, msg, BoundingPolygonBox2D)() {
  BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_type_support_handle.typesupport_identifier) {
    BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingPolygonBox2D__rosidl_typesupport_introspection_c__BoundingPolygonBox2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
