// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `operator_command`
#include "rm_interfaces/msg/detail/operator_command__functions.h"

bool
rm_interfaces__msg__JudgeSystemData__init(rm_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return false;
  }
  // game_status
  // remaining_time
  // blood
  // outpost_hp
  // operator_command
  if (!rm_interfaces__msg__OperatorCommand__init(&msg->operator_command)) {
    rm_interfaces__msg__JudgeSystemData__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__msg__JudgeSystemData__fini(rm_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return;
  }
  // game_status
  // remaining_time
  // blood
  // outpost_hp
  // operator_command
  rm_interfaces__msg__OperatorCommand__fini(&msg->operator_command);
}

bool
rm_interfaces__msg__JudgeSystemData__are_equal(const rm_interfaces__msg__JudgeSystemData * lhs, const rm_interfaces__msg__JudgeSystemData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_status
  if (lhs->game_status != rhs->game_status) {
    return false;
  }
  // remaining_time
  if (lhs->remaining_time != rhs->remaining_time) {
    return false;
  }
  // blood
  if (lhs->blood != rhs->blood) {
    return false;
  }
  // outpost_hp
  if (lhs->outpost_hp != rhs->outpost_hp) {
    return false;
  }
  // operator_command
  if (!rm_interfaces__msg__OperatorCommand__are_equal(
      &(lhs->operator_command), &(rhs->operator_command)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__JudgeSystemData__copy(
  const rm_interfaces__msg__JudgeSystemData * input,
  rm_interfaces__msg__JudgeSystemData * output)
{
  if (!input || !output) {
    return false;
  }
  // game_status
  output->game_status = input->game_status;
  // remaining_time
  output->remaining_time = input->remaining_time;
  // blood
  output->blood = input->blood;
  // outpost_hp
  output->outpost_hp = input->outpost_hp;
  // operator_command
  if (!rm_interfaces__msg__OperatorCommand__copy(
      &(input->operator_command), &(output->operator_command)))
  {
    return false;
  }
  return true;
}

rm_interfaces__msg__JudgeSystemData *
rm_interfaces__msg__JudgeSystemData__create()
{
  rm_interfaces__msg__JudgeSystemData * msg = (rm_interfaces__msg__JudgeSystemData *)malloc(sizeof(rm_interfaces__msg__JudgeSystemData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__JudgeSystemData));
  bool success = rm_interfaces__msg__JudgeSystemData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__JudgeSystemData__destroy(rm_interfaces__msg__JudgeSystemData * msg)
{
  if (msg) {
    rm_interfaces__msg__JudgeSystemData__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__JudgeSystemData__Sequence__init(rm_interfaces__msg__JudgeSystemData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__JudgeSystemData * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__JudgeSystemData *)calloc(size, sizeof(rm_interfaces__msg__JudgeSystemData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__JudgeSystemData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__JudgeSystemData__fini(&data[i - 1]);
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
rm_interfaces__msg__JudgeSystemData__Sequence__fini(rm_interfaces__msg__JudgeSystemData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__JudgeSystemData__fini(&array->data[i]);
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

rm_interfaces__msg__JudgeSystemData__Sequence *
rm_interfaces__msg__JudgeSystemData__Sequence__create(size_t size)
{
  rm_interfaces__msg__JudgeSystemData__Sequence * array = (rm_interfaces__msg__JudgeSystemData__Sequence *)malloc(sizeof(rm_interfaces__msg__JudgeSystemData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__JudgeSystemData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__JudgeSystemData__Sequence__destroy(rm_interfaces__msg__JudgeSystemData__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__JudgeSystemData__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__JudgeSystemData__Sequence__are_equal(const rm_interfaces__msg__JudgeSystemData__Sequence * lhs, const rm_interfaces__msg__JudgeSystemData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__JudgeSystemData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__JudgeSystemData__Sequence__copy(
  const rm_interfaces__msg__JudgeSystemData__Sequence * input,
  rm_interfaces__msg__JudgeSystemData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__JudgeSystemData);
    rm_interfaces__msg__JudgeSystemData * data =
      (rm_interfaces__msg__JudgeSystemData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__JudgeSystemData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__JudgeSystemData__fini(&data[i]);
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
    if (!rm_interfaces__msg__JudgeSystemData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
