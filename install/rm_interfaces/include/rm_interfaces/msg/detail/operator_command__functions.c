// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/operator_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rm_interfaces__msg__OperatorCommand__init(rm_interfaces__msg__OperatorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // is_retreating
  // is_drone_avoiding
  // is_outpost_attacking
  return true;
}

void
rm_interfaces__msg__OperatorCommand__fini(rm_interfaces__msg__OperatorCommand * msg)
{
  if (!msg) {
    return;
  }
  // is_retreating
  // is_drone_avoiding
  // is_outpost_attacking
}

bool
rm_interfaces__msg__OperatorCommand__are_equal(const rm_interfaces__msg__OperatorCommand * lhs, const rm_interfaces__msg__OperatorCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_retreating
  if (lhs->is_retreating != rhs->is_retreating) {
    return false;
  }
  // is_drone_avoiding
  if (lhs->is_drone_avoiding != rhs->is_drone_avoiding) {
    return false;
  }
  // is_outpost_attacking
  if (lhs->is_outpost_attacking != rhs->is_outpost_attacking) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__OperatorCommand__copy(
  const rm_interfaces__msg__OperatorCommand * input,
  rm_interfaces__msg__OperatorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // is_retreating
  output->is_retreating = input->is_retreating;
  // is_drone_avoiding
  output->is_drone_avoiding = input->is_drone_avoiding;
  // is_outpost_attacking
  output->is_outpost_attacking = input->is_outpost_attacking;
  return true;
}

rm_interfaces__msg__OperatorCommand *
rm_interfaces__msg__OperatorCommand__create()
{
  rm_interfaces__msg__OperatorCommand * msg = (rm_interfaces__msg__OperatorCommand *)malloc(sizeof(rm_interfaces__msg__OperatorCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__OperatorCommand));
  bool success = rm_interfaces__msg__OperatorCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__OperatorCommand__destroy(rm_interfaces__msg__OperatorCommand * msg)
{
  if (msg) {
    rm_interfaces__msg__OperatorCommand__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__OperatorCommand__Sequence__init(rm_interfaces__msg__OperatorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__OperatorCommand * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__OperatorCommand *)calloc(size, sizeof(rm_interfaces__msg__OperatorCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__OperatorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__OperatorCommand__fini(&data[i - 1]);
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
rm_interfaces__msg__OperatorCommand__Sequence__fini(rm_interfaces__msg__OperatorCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__OperatorCommand__fini(&array->data[i]);
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

rm_interfaces__msg__OperatorCommand__Sequence *
rm_interfaces__msg__OperatorCommand__Sequence__create(size_t size)
{
  rm_interfaces__msg__OperatorCommand__Sequence * array = (rm_interfaces__msg__OperatorCommand__Sequence *)malloc(sizeof(rm_interfaces__msg__OperatorCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__OperatorCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__OperatorCommand__Sequence__destroy(rm_interfaces__msg__OperatorCommand__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__OperatorCommand__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__OperatorCommand__Sequence__are_equal(const rm_interfaces__msg__OperatorCommand__Sequence * lhs, const rm_interfaces__msg__OperatorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__OperatorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__OperatorCommand__Sequence__copy(
  const rm_interfaces__msg__OperatorCommand__Sequence * input,
  rm_interfaces__msg__OperatorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__OperatorCommand);
    rm_interfaces__msg__OperatorCommand * data =
      (rm_interfaces__msg__OperatorCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__OperatorCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__OperatorCommand__fini(&data[i]);
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
    if (!rm_interfaces__msg__OperatorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
