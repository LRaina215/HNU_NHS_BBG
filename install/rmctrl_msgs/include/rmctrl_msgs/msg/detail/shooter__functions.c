// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice
#include "rmctrl_msgs/msg/detail/shooter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmctrl_msgs__msg__Shooter__init(rmctrl_msgs__msg__Shooter * msg)
{
  if (!msg) {
    return false;
  }
  // is_shoot
  // bullet_vel
  // remain_bullet
  return true;
}

void
rmctrl_msgs__msg__Shooter__fini(rmctrl_msgs__msg__Shooter * msg)
{
  if (!msg) {
    return;
  }
  // is_shoot
  // bullet_vel
  // remain_bullet
}

bool
rmctrl_msgs__msg__Shooter__are_equal(const rmctrl_msgs__msg__Shooter * lhs, const rmctrl_msgs__msg__Shooter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_shoot
  if (lhs->is_shoot != rhs->is_shoot) {
    return false;
  }
  // bullet_vel
  if (lhs->bullet_vel != rhs->bullet_vel) {
    return false;
  }
  // remain_bullet
  if (lhs->remain_bullet != rhs->remain_bullet) {
    return false;
  }
  return true;
}

bool
rmctrl_msgs__msg__Shooter__copy(
  const rmctrl_msgs__msg__Shooter * input,
  rmctrl_msgs__msg__Shooter * output)
{
  if (!input || !output) {
    return false;
  }
  // is_shoot
  output->is_shoot = input->is_shoot;
  // bullet_vel
  output->bullet_vel = input->bullet_vel;
  // remain_bullet
  output->remain_bullet = input->remain_bullet;
  return true;
}

rmctrl_msgs__msg__Shooter *
rmctrl_msgs__msg__Shooter__create()
{
  rmctrl_msgs__msg__Shooter * msg = (rmctrl_msgs__msg__Shooter *)malloc(sizeof(rmctrl_msgs__msg__Shooter));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmctrl_msgs__msg__Shooter));
  bool success = rmctrl_msgs__msg__Shooter__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmctrl_msgs__msg__Shooter__destroy(rmctrl_msgs__msg__Shooter * msg)
{
  if (msg) {
    rmctrl_msgs__msg__Shooter__fini(msg);
  }
  free(msg);
}


bool
rmctrl_msgs__msg__Shooter__Sequence__init(rmctrl_msgs__msg__Shooter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmctrl_msgs__msg__Shooter * data = NULL;
  if (size) {
    data = (rmctrl_msgs__msg__Shooter *)calloc(size, sizeof(rmctrl_msgs__msg__Shooter));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmctrl_msgs__msg__Shooter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmctrl_msgs__msg__Shooter__fini(&data[i - 1]);
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
rmctrl_msgs__msg__Shooter__Sequence__fini(rmctrl_msgs__msg__Shooter__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmctrl_msgs__msg__Shooter__fini(&array->data[i]);
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

rmctrl_msgs__msg__Shooter__Sequence *
rmctrl_msgs__msg__Shooter__Sequence__create(size_t size)
{
  rmctrl_msgs__msg__Shooter__Sequence * array = (rmctrl_msgs__msg__Shooter__Sequence *)malloc(sizeof(rmctrl_msgs__msg__Shooter__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmctrl_msgs__msg__Shooter__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmctrl_msgs__msg__Shooter__Sequence__destroy(rmctrl_msgs__msg__Shooter__Sequence * array)
{
  if (array) {
    rmctrl_msgs__msg__Shooter__Sequence__fini(array);
  }
  free(array);
}

bool
rmctrl_msgs__msg__Shooter__Sequence__are_equal(const rmctrl_msgs__msg__Shooter__Sequence * lhs, const rmctrl_msgs__msg__Shooter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmctrl_msgs__msg__Shooter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmctrl_msgs__msg__Shooter__Sequence__copy(
  const rmctrl_msgs__msg__Shooter__Sequence * input,
  rmctrl_msgs__msg__Shooter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmctrl_msgs__msg__Shooter);
    rmctrl_msgs__msg__Shooter * data =
      (rmctrl_msgs__msg__Shooter *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmctrl_msgs__msg__Shooter__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rmctrl_msgs__msg__Shooter__fini(&data[i]);
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
    if (!rmctrl_msgs__msg__Shooter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
