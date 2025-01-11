// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bboxes_ex_msgs:msg/BoundingBoxes2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bboxes_ex_msgs/msg/detail/bounding_boxes2_d__rosidl_typesupport_introspection_c.h"
#include "bboxes_ex_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bboxes_ex_msgs/msg/detail/bounding_boxes2_d__functions.h"
#include "bboxes_ex_msgs/msg/detail/bounding_boxes2_d__struct.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/header.h"
// Member `header`
// Member `image_header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bounding_boxes`
#include "bboxes_ex_msgs/msg/bounding_box2_d.h"
// Member `bounding_boxes`
#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bboxes_ex_msgs__msg__BoundingBoxes2D__init(message_memory);
}

void BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_fini_function(void * message_memory)
{
  bboxes_ex_msgs__msg__BoundingBoxes2D__fini(message_memory);
}

size_t BoundingBoxes2D__rosidl_typesupport_introspection_c__size_function__BoundingBox2D__bounding_boxes(
  const void * untyped_member)
{
  const bboxes_ex_msgs__msg__BoundingBox2D__Sequence * member =
    (const bboxes_ex_msgs__msg__BoundingBox2D__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundingBoxes2D__rosidl_typesupport_introspection_c__get_const_function__BoundingBox2D__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const bboxes_ex_msgs__msg__BoundingBox2D__Sequence * member =
    (const bboxes_ex_msgs__msg__BoundingBox2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundingBoxes2D__rosidl_typesupport_introspection_c__get_function__BoundingBox2D__bounding_boxes(
  void * untyped_member, size_t index)
{
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence * member =
    (bboxes_ex_msgs__msg__BoundingBox2D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundingBoxes2D__rosidl_typesupport_introspection_c__resize_function__BoundingBox2D__bounding_boxes(
  void * untyped_member, size_t size)
{
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence * member =
    (bboxes_ex_msgs__msg__BoundingBox2D__Sequence *)(untyped_member);
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence__fini(member);
  return bboxes_ex_msgs__msg__BoundingBox2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingBoxes2D, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingBoxes2D, image_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes_ex_msgs__msg__BoundingBoxes2D, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    BoundingBoxes2D__rosidl_typesupport_introspection_c__size_function__BoundingBox2D__bounding_boxes,  // size() function pointer
    BoundingBoxes2D__rosidl_typesupport_introspection_c__get_const_function__BoundingBox2D__bounding_boxes,  // get_const(index) function pointer
    BoundingBoxes2D__rosidl_typesupport_introspection_c__get_function__BoundingBox2D__bounding_boxes,  // get(index) function pointer
    BoundingBoxes2D__rosidl_typesupport_introspection_c__resize_function__BoundingBox2D__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_members = {
  "bboxes_ex_msgs__msg",  // message namespace
  "BoundingBoxes2D",  // message name
  3,  // number of fields
  sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D),
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_member_array,  // message members
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_type_support_handle = {
  0,
  &BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bboxes_ex_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes_ex_msgs, msg, BoundingBoxes2D)() {
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes_ex_msgs, msg, BoundingBox2D)();
  if (!BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_type_support_handle.typesupport_identifier) {
    BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingBoxes2D__rosidl_typesupport_introspection_c__BoundingBoxes2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
