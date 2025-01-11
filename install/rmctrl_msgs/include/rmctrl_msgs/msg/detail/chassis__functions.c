// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmctrl_msgs:msg/Chassis.idl
// generated code does not contain a copyright notice
#include "rmctrl_msgs/msg/detail/chassis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmctrl_msgs__msg__Chassis__init(rmctrl_msgs__msg__Chassis * msg)
{
  if (!msg) {
    return false;
  }
  // chassis_target_linear_x
  // chassis_target_linear_y
  // chassis_target_linear_z
  // chassis_target_angular_x
  // chassis_target_angular_y
  // chassis_target_angular_z
  return true;
}

void
rmctrl_msgs__msg__Chassis__fini(rmctrl_msgs__msg__Chassis * msg)
{
  if (!msg) {
    return;
  }
  // chassis_target_linear_x
  // chassis_target_linear_y
  // chassis_target_linear_z
  // chassis_target_angular_x
  // chassis_target_angular_y
  // chassis_target_angular_z
}

bool
rmctrl_msgs__msg__Chassis__are_equal(const rmctrl_msgs__msg__Chassis * lhs, const rmctrl_msgs__msg__Chassis * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // chassis_target_linear_x
  if (lhs->chassis_target_linear_x != rhs->chassis_target_linear_x) {
    return false;
  }
  // chassis_target_linear_y
  if (lhs->chassis_target_linear_y != rhs->chassis_target_linear_y) {
    return false;
  }
  // chassis_target_linear_z
  if (lhs->chassis_target_linear_z != rhs->chassis_target_linear_z) {
    return false;
  }
  // chassis_target_angular_x
  if (lhs->chassis_target_angular_x != rhs->chassis_target_angular_x) {
    return false;
  }
  // chassis_target_angular_y
  if (lhs->chassis_target_angular_y != rhs->chassis_target_angular_y) {
    return false;
  }
  // chassis_target_angular_z
  if (lhs->chassis_target_angular_z != rhs->chassis_target_angular_z) {
    return false;
  }
  return true;
}

bool
rmctrl_msgs__msg__Chassis__copy(
  const rmctrl_msgs__msg__Chassis * input,
  rmctrl_msgs__msg__Chassis * output)
{
  if (!input || !output) {
    return false;
  }
  // chassis_target_linear_x
  output->chassis_target_linear_x = input->chassis_target_linear_x;
  // chassis_target_linear_y
  output->chassis_target_linear_y = input->chassis_target_linear_y;
  // chassis_target_linear_z
  output->chassis_target_linear_z = input->chassis_target_linear_z;
  // chassis_target_angular_x
  output->chassis_target_angular_x = input->chassis_target_angular_x;
  // chassis_target_angular_y
  output->chassis_target_angular_y = input->chassis_target_angular_y;
  // chassis_target_angular_z
  output->chassis_target_angular_z = input->chassis_target_angular_z;
  return true;
}

rmctrl_msgs__msg__Chassis *
rmctrl_msgs__msg__Chassis__create()
{
  rmctrl_msgs__msg__Chassis * msg = (rmctrl_msgs__msg__Chassis *)malloc(sizeof(rmctrl_msgs__msg__Chassis));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmctrl_msgs__msg__Chassis));
  bool success = rmctrl_msgs__msg__Chassis__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmctrl_msgs__msg__Chassis__destroy(rmctrl_msgs__msg__Chassis * msg)
{
  if (msg) {
    rmctrl_msgs__msg__Chassis__fini(msg);
  }
  free(msg);
}


bool
rmctrl_msgs__msg__Chassis__Sequence__init(rmctrl_msgs__msg__Chassis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmctrl_msgs__msg__Chassis * data = NULL;
  if (size) {
    data = (rmctrl_msgs__msg__Chassis *)calloc(size, sizeof(rmctrl_msgs__msg__Chassis));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmctrl_msgs__msg__Chassis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmctrl_msgs__msg__Chassis__fini(&data[i - 1]);
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
rmctrl_msgs__msg__Chassis__Sequence__fini(rmctrl_msgs__msg__Chassis__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmctrl_msgs__msg__Chassis__fini(&array->data[i]);
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

rmctrl_msgs__msg__Chassis__Sequence *
rmctrl_msgs__msg__Chassis__Sequence__create(size_t size)
{
  rmctrl_msgs__msg__Chassis__Sequence * array = (rmctrl_msgs__msg__Chassis__Sequence *)malloc(sizeof(rmctrl_msgs__msg__Chassis__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmctrl_msgs__msg__Chassis__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmctrl_msgs__msg__Chassis__Sequence__destroy(rmctrl_msgs__msg__Chassis__Sequence * array)
{
  if (array) {
    rmctrl_msgs__msg__Chassis__Sequence__fini(array);
  }
  free(array);
}

bool
rmctrl_msgs__msg__Chassis__Sequence__are_equal(const rmctrl_msgs__msg__Chassis__Sequence * lhs, const rmctrl_msgs__msg__Chassis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmctrl_msgs__msg__Chassis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmctrl_msgs__msg__Chassis__Sequence__copy(
  const rmctrl_msgs__msg__Chassis__Sequence * input,
  rmctrl_msgs__msg__Chassis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmctrl_msgs__msg__Chassis);
    rmctrl_msgs__msg__Chassis * data =
      (rmctrl_msgs__msg__Chassis *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmctrl_msgs__msg__Chassis__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rmctrl_msgs__msg__Chassis__fini(&data[i]);
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
    if (!rmctrl_msgs__msg__Chassis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
