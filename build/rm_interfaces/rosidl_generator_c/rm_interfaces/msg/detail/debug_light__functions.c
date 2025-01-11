// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/debug_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rm_interfaces__msg__DebugLight__init(rm_interfaces__msg__DebugLight * msg)
{
  if (!msg) {
    return false;
  }
  // center_x
  // is_light
  // ratio
  // angle
  return true;
}

void
rm_interfaces__msg__DebugLight__fini(rm_interfaces__msg__DebugLight * msg)
{
  if (!msg) {
    return;
  }
  // center_x
  // is_light
  // ratio
  // angle
}

bool
rm_interfaces__msg__DebugLight__are_equal(const rm_interfaces__msg__DebugLight * lhs, const rm_interfaces__msg__DebugLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center_x
  if (lhs->center_x != rhs->center_x) {
    return false;
  }
  // is_light
  if (lhs->is_light != rhs->is_light) {
    return false;
  }
  // ratio
  if (lhs->ratio != rhs->ratio) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__DebugLight__copy(
  const rm_interfaces__msg__DebugLight * input,
  rm_interfaces__msg__DebugLight * output)
{
  if (!input || !output) {
    return false;
  }
  // center_x
  output->center_x = input->center_x;
  // is_light
  output->is_light = input->is_light;
  // ratio
  output->ratio = input->ratio;
  // angle
  output->angle = input->angle;
  return true;
}

rm_interfaces__msg__DebugLight *
rm_interfaces__msg__DebugLight__create()
{
  rm_interfaces__msg__DebugLight * msg = (rm_interfaces__msg__DebugLight *)malloc(sizeof(rm_interfaces__msg__DebugLight));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__DebugLight));
  bool success = rm_interfaces__msg__DebugLight__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__DebugLight__destroy(rm_interfaces__msg__DebugLight * msg)
{
  if (msg) {
    rm_interfaces__msg__DebugLight__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__DebugLight__Sequence__init(rm_interfaces__msg__DebugLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__DebugLight * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__DebugLight *)calloc(size, sizeof(rm_interfaces__msg__DebugLight));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__DebugLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__DebugLight__fini(&data[i - 1]);
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
rm_interfaces__msg__DebugLight__Sequence__fini(rm_interfaces__msg__DebugLight__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__DebugLight__fini(&array->data[i]);
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

rm_interfaces__msg__DebugLight__Sequence *
rm_interfaces__msg__DebugLight__Sequence__create(size_t size)
{
  rm_interfaces__msg__DebugLight__Sequence * array = (rm_interfaces__msg__DebugLight__Sequence *)malloc(sizeof(rm_interfaces__msg__DebugLight__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__DebugLight__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__DebugLight__Sequence__destroy(rm_interfaces__msg__DebugLight__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__DebugLight__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__DebugLight__Sequence__are_equal(const rm_interfaces__msg__DebugLight__Sequence * lhs, const rm_interfaces__msg__DebugLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__DebugLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__DebugLight__Sequence__copy(
  const rm_interfaces__msg__DebugLight__Sequence * input,
  rm_interfaces__msg__DebugLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__DebugLight);
    rm_interfaces__msg__DebugLight * data =
      (rm_interfaces__msg__DebugLight *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__DebugLight__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__DebugLight__fini(&data[i]);
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
    if (!rm_interfaces__msg__DebugLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
