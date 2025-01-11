// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmctrl_msgs:msg/Gimbal.idl
// generated code does not contain a copyright notice
#include "rmctrl_msgs/msg/detail/gimbal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rmctrl_msgs__msg__Gimbal__init(rmctrl_msgs__msg__Gimbal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rmctrl_msgs__msg__Gimbal__fini(msg);
    return false;
  }
  // yaw
  // pitch
  return true;
}

void
rmctrl_msgs__msg__Gimbal__fini(rmctrl_msgs__msg__Gimbal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yaw
  // pitch
}

bool
rmctrl_msgs__msg__Gimbal__are_equal(const rmctrl_msgs__msg__Gimbal * lhs, const rmctrl_msgs__msg__Gimbal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  return true;
}

bool
rmctrl_msgs__msg__Gimbal__copy(
  const rmctrl_msgs__msg__Gimbal * input,
  rmctrl_msgs__msg__Gimbal * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  return true;
}

rmctrl_msgs__msg__Gimbal *
rmctrl_msgs__msg__Gimbal__create()
{
  rmctrl_msgs__msg__Gimbal * msg = (rmctrl_msgs__msg__Gimbal *)malloc(sizeof(rmctrl_msgs__msg__Gimbal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmctrl_msgs__msg__Gimbal));
  bool success = rmctrl_msgs__msg__Gimbal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmctrl_msgs__msg__Gimbal__destroy(rmctrl_msgs__msg__Gimbal * msg)
{
  if (msg) {
    rmctrl_msgs__msg__Gimbal__fini(msg);
  }
  free(msg);
}


bool
rmctrl_msgs__msg__Gimbal__Sequence__init(rmctrl_msgs__msg__Gimbal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmctrl_msgs__msg__Gimbal * data = NULL;
  if (size) {
    data = (rmctrl_msgs__msg__Gimbal *)calloc(size, sizeof(rmctrl_msgs__msg__Gimbal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmctrl_msgs__msg__Gimbal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmctrl_msgs__msg__Gimbal__fini(&data[i - 1]);
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
rmctrl_msgs__msg__Gimbal__Sequence__fini(rmctrl_msgs__msg__Gimbal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmctrl_msgs__msg__Gimbal__fini(&array->data[i]);
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

rmctrl_msgs__msg__Gimbal__Sequence *
rmctrl_msgs__msg__Gimbal__Sequence__create(size_t size)
{
  rmctrl_msgs__msg__Gimbal__Sequence * array = (rmctrl_msgs__msg__Gimbal__Sequence *)malloc(sizeof(rmctrl_msgs__msg__Gimbal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmctrl_msgs__msg__Gimbal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmctrl_msgs__msg__Gimbal__Sequence__destroy(rmctrl_msgs__msg__Gimbal__Sequence * array)
{
  if (array) {
    rmctrl_msgs__msg__Gimbal__Sequence__fini(array);
  }
  free(array);
}

bool
rmctrl_msgs__msg__Gimbal__Sequence__are_equal(const rmctrl_msgs__msg__Gimbal__Sequence * lhs, const rmctrl_msgs__msg__Gimbal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmctrl_msgs__msg__Gimbal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmctrl_msgs__msg__Gimbal__Sequence__copy(
  const rmctrl_msgs__msg__Gimbal__Sequence * input,
  rmctrl_msgs__msg__Gimbal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmctrl_msgs__msg__Gimbal);
    rmctrl_msgs__msg__Gimbal * data =
      (rmctrl_msgs__msg__Gimbal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmctrl_msgs__msg__Gimbal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rmctrl_msgs__msg__Gimbal__fini(&data[i]);
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
    if (!rmctrl_msgs__msg__Gimbal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
