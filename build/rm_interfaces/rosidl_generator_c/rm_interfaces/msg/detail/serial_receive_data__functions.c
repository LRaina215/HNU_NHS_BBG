// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/serial_receive_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `judge_system_data`
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

bool
rm_interfaces__msg__SerialReceiveData__init(rm_interfaces__msg__SerialReceiveData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_interfaces__msg__SerialReceiveData__fini(msg);
    return false;
  }
  // mode
  // bullet_speed
  // roll
  // yaw
  // pitch
  // judge_system_data
  if (!rm_interfaces__msg__JudgeSystemData__init(&msg->judge_system_data)) {
    rm_interfaces__msg__SerialReceiveData__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__msg__SerialReceiveData__fini(rm_interfaces__msg__SerialReceiveData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // bullet_speed
  // roll
  // yaw
  // pitch
  // judge_system_data
  rm_interfaces__msg__JudgeSystemData__fini(&msg->judge_system_data);
}

bool
rm_interfaces__msg__SerialReceiveData__are_equal(const rm_interfaces__msg__SerialReceiveData * lhs, const rm_interfaces__msg__SerialReceiveData * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // bullet_speed
  if (lhs->bullet_speed != rhs->bullet_speed) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
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
  // judge_system_data
  if (!rm_interfaces__msg__JudgeSystemData__are_equal(
      &(lhs->judge_system_data), &(rhs->judge_system_data)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__SerialReceiveData__copy(
  const rm_interfaces__msg__SerialReceiveData * input,
  rm_interfaces__msg__SerialReceiveData * output)
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
  // mode
  output->mode = input->mode;
  // bullet_speed
  output->bullet_speed = input->bullet_speed;
  // roll
  output->roll = input->roll;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // judge_system_data
  if (!rm_interfaces__msg__JudgeSystemData__copy(
      &(input->judge_system_data), &(output->judge_system_data)))
  {
    return false;
  }
  return true;
}

rm_interfaces__msg__SerialReceiveData *
rm_interfaces__msg__SerialReceiveData__create()
{
  rm_interfaces__msg__SerialReceiveData * msg = (rm_interfaces__msg__SerialReceiveData *)malloc(sizeof(rm_interfaces__msg__SerialReceiveData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__SerialReceiveData));
  bool success = rm_interfaces__msg__SerialReceiveData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__SerialReceiveData__destroy(rm_interfaces__msg__SerialReceiveData * msg)
{
  if (msg) {
    rm_interfaces__msg__SerialReceiveData__fini(msg);
  }
  free(msg);
}


bool
rm_interfaces__msg__SerialReceiveData__Sequence__init(rm_interfaces__msg__SerialReceiveData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rm_interfaces__msg__SerialReceiveData * data = NULL;
  if (size) {
    data = (rm_interfaces__msg__SerialReceiveData *)calloc(size, sizeof(rm_interfaces__msg__SerialReceiveData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__SerialReceiveData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__SerialReceiveData__fini(&data[i - 1]);
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
rm_interfaces__msg__SerialReceiveData__Sequence__fini(rm_interfaces__msg__SerialReceiveData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__SerialReceiveData__fini(&array->data[i]);
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

rm_interfaces__msg__SerialReceiveData__Sequence *
rm_interfaces__msg__SerialReceiveData__Sequence__create(size_t size)
{
  rm_interfaces__msg__SerialReceiveData__Sequence * array = (rm_interfaces__msg__SerialReceiveData__Sequence *)malloc(sizeof(rm_interfaces__msg__SerialReceiveData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__SerialReceiveData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__SerialReceiveData__Sequence__destroy(rm_interfaces__msg__SerialReceiveData__Sequence * array)
{
  if (array) {
    rm_interfaces__msg__SerialReceiveData__Sequence__fini(array);
  }
  free(array);
}

bool
rm_interfaces__msg__SerialReceiveData__Sequence__are_equal(const rm_interfaces__msg__SerialReceiveData__Sequence * lhs, const rm_interfaces__msg__SerialReceiveData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__SerialReceiveData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__SerialReceiveData__Sequence__copy(
  const rm_interfaces__msg__SerialReceiveData__Sequence * input,
  rm_interfaces__msg__SerialReceiveData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__SerialReceiveData);
    rm_interfaces__msg__SerialReceiveData * data =
      (rm_interfaces__msg__SerialReceiveData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__SerialReceiveData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__SerialReceiveData__fini(&data[i]);
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
    if (!rm_interfaces__msg__SerialReceiveData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
