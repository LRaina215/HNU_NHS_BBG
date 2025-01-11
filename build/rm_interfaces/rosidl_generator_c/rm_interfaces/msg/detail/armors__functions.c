// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/Armors.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/armors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `armors`
#include "rm_interfaces/msg/detail/armor__functions.h"

bool
rm_interfaces__msg__Armors__init(rm_interfaces__msg__Armors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_interfaces__msg__Armors__fini(msg);
    return false;
  }
  // armors
  if (!rm_interfaces__msg__Armor__Sequence__init(&msg->armors, 0)) {
    rm_interfaces__msg__Armors__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__msg__Armors__fini(rm_interfaces__msg__Armors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // armors
  rm_interfaces__msg__Armor__Sequence__fini(&msg->armors);
}

bool
rm_interfaces__msg__Armors__are_equal(const rm_interfaces__msg__Armors * lhs, const rm_interfaces__msg__Armors * rhs)
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
  // armors
  if (!rm_interfaces__msg__Armor__Sequence__are_equal(
      &(lhs->armors), &(rhs->armors)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__Armors__copy(
  const rm_interfaces__msg__Armors * input,
  rm_interfaces__msg__Armors * output)
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
  // armors
  if (!rm_interfaces__msg__Armor__Sequence__copy(
      &(input->armors), &(output->armors)))
  {
    return false;
  }
  return true;
}

rm_interfaces__msg__Armors *
rm_interfaces__msg__Armors__create()
{
  rm_interfaces__msg__Armors * msg = (rm_interfaces__msg__Armors *)malloc(sizeof(rm_interfaces__msg__Armors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__Armors));
  bool success = rm_interfaces__msg__Armors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__Armors__destroy(rm_interfaces__msg__Armors * msg)
{
  if (msg) {
    rm_interfaces__msg__Armors__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__Armors__Sequence__init(rm_interfaces__msg__Armors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__Armors * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__Armors *)calloc(size, sizeof(rm_interfaces__msg__Armors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__Armors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__Armors__fini(&data[i - 1]);
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
rm_interfaces__msg__Armors__Sequence__fini(rm_interfaces__msg__Armors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__Armors__fini(&array->data[i]);
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

rm_interfaces__msg__Armors__Sequence *
rm_interfaces__msg__Armors__Sequence__create(size_t size)
{
  rm_interfaces__msg__Armors__Sequence * array = (rm_interfaces__msg__Armors__Sequence *)malloc(sizeof(rm_interfaces__msg__Armors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__Armors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__Armors__Sequence__destroy(rm_interfaces__msg__Armors__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__Armors__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__Armors__Sequence__are_equal(const rm_interfaces__msg__Armors__Sequence * lhs, const rm_interfaces__msg__Armors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__Armors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__Armors__Sequence__copy(
  const rm_interfaces__msg__Armors__Sequence * input,
  rm_interfaces__msg__Armors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__Armors);
    rm_interfaces__msg__Armors * data =
      (rm_interfaces__msg__Armors *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__Armors__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__Armors__fini(&data[i]);
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
    if (!rm_interfaces__msg__Armors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
