// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/Point2d.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/point2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rm_interfaces__msg__Point2d__init(rm_interfaces__msg__Point2d * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
rm_interfaces__msg__Point2d__fini(rm_interfaces__msg__Point2d * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
rm_interfaces__msg__Point2d__are_equal(const rm_interfaces__msg__Point2d * lhs, const rm_interfaces__msg__Point2d * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__Point2d__copy(
  const rm_interfaces__msg__Point2d * input,
  rm_interfaces__msg__Point2d * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

rm_interfaces__msg__Point2d *
rm_interfaces__msg__Point2d__create()
{
  rm_interfaces__msg__Point2d * msg = (rm_interfaces__msg__Point2d *)malloc(sizeof(rm_interfaces__msg__Point2d));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__Point2d));
  bool success = rm_interfaces__msg__Point2d__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__Point2d__destroy(rm_interfaces__msg__Point2d * msg)
{
  if (msg) {
    rm_interfaces__msg__Point2d__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__Point2d__Sequence__init(rm_interfaces__msg__Point2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__Point2d * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__Point2d *)calloc(size, sizeof(rm_interfaces__msg__Point2d));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__Point2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__Point2d__fini(&data[i - 1]);
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
rm_interfaces__msg__Point2d__Sequence__fini(rm_interfaces__msg__Point2d__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__Point2d__fini(&array->data[i]);
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

rm_interfaces__msg__Point2d__Sequence *
rm_interfaces__msg__Point2d__Sequence__create(size_t size)
{
  rm_interfaces__msg__Point2d__Sequence * array = (rm_interfaces__msg__Point2d__Sequence *)malloc(sizeof(rm_interfaces__msg__Point2d__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__Point2d__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__Point2d__Sequence__destroy(rm_interfaces__msg__Point2d__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__Point2d__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__Point2d__Sequence__are_equal(const rm_interfaces__msg__Point2d__Sequence * lhs, const rm_interfaces__msg__Point2d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__Point2d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__Point2d__Sequence__copy(
  const rm_interfaces__msg__Point2d__Sequence * input,
  rm_interfaces__msg__Point2d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__Point2d);
    rm_interfaces__msg__Point2d * data =
      (rm_interfaces__msg__Point2d *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__Point2d__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__Point2d__fini(&data[i]);
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
    if (!rm_interfaces__msg__Point2d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
