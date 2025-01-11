// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/Armor.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/armor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `number`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rm_interfaces__msg__Armor__init(rm_interfaces__msg__Armor * msg)
{
  if (!msg) {
    return false;
  }
  // number
  if (!rosidl_runtime_c__String__init(&msg->number)) {
    rm_interfaces__msg__Armor__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    rm_interfaces__msg__Armor__fini(msg);
    return false;
  }
  // distance_to_image_center
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rm_interfaces__msg__Armor__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__msg__Armor__fini(rm_interfaces__msg__Armor * msg)
{
  if (!msg) {
    return;
  }
  // number
  rosidl_runtime_c__String__fini(&msg->number);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // distance_to_image_center
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
rm_interfaces__msg__Armor__are_equal(const rm_interfaces__msg__Armor * lhs, const rm_interfaces__msg__Armor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->number), &(rhs->number)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // distance_to_image_center
  if (lhs->distance_to_image_center != rhs->distance_to_image_center) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__Armor__copy(
  const rm_interfaces__msg__Armor * input,
  rm_interfaces__msg__Armor * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  if (!rosidl_runtime_c__String__copy(
      &(input->number), &(output->number)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // distance_to_image_center
  output->distance_to_image_center = input->distance_to_image_center;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

rm_interfaces__msg__Armor *
rm_interfaces__msg__Armor__create()
{
  rm_interfaces__msg__Armor * msg = (rm_interfaces__msg__Armor *)malloc(sizeof(rm_interfaces__msg__Armor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__Armor));
  bool success = rm_interfaces__msg__Armor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__Armor__destroy(rm_interfaces__msg__Armor * msg)
{
  if (msg) {
    rm_interfaces__msg__Armor__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__Armor__Sequence__init(rm_interfaces__msg__Armor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__Armor * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__Armor *)calloc(size, sizeof(rm_interfaces__msg__Armor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__Armor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__Armor__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_interfaces__msg__Armor__Sequence__fini(rm_interfaces__msg__Armor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__Armor__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_interfaces__msg__Armor__Sequence *
rm_interfaces__msg__Armor__Sequence__create(size_t size)
{
  rm_interfaces__msg__Armor__Sequence * array = (rm_interfaces__msg__Armor__Sequence *)malloc(sizeof(rm_interfaces__msg__Armor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__Armor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__Armor__Sequence__destroy(rm_interfaces__msg__Armor__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__Armor__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__Armor__Sequence__are_equal(const rm_interfaces__msg__Armor__Sequence * lhs, const rm_interfaces__msg__Armor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__Armor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__Armor__Sequence__copy(
  const rm_interfaces__msg__Armor__Sequence * input,
  rm_interfaces__msg__Armor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__Armor);
    rm_interfaces__msg__Armor * data =
      (rm_interfaces__msg__Armor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__Armor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__Armor__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__msg__Armor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
