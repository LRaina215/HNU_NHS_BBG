// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from game_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice
#include "game_msgs/msg/detail/game_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
game_msgs__msg__GameStatus__init(game_msgs__msg__GameStatus * msg)
{
  if (!msg) {
    return false;
  }
  // game_type
  // game_progress
  // stage_remain_time
  return true;
}

void
game_msgs__msg__GameStatus__fini(game_msgs__msg__GameStatus * msg)
{
  if (!msg) {
    return;
  }
  // game_type
  // game_progress
  // stage_remain_time
}

bool
game_msgs__msg__GameStatus__are_equal(const game_msgs__msg__GameStatus * lhs, const game_msgs__msg__GameStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_type
  if (lhs->game_type != rhs->game_type) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  return true;
}

bool
game_msgs__msg__GameStatus__copy(
  const game_msgs__msg__GameStatus * input,
  game_msgs__msg__GameStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // game_type
  output->game_type = input->game_type;
  // game_progress
  output->game_progress = input->game_progress;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  return true;
}

game_msgs__msg__GameStatus *
game_msgs__msg__GameStatus__create()
{
  game_msgs__msg__GameStatus * msg = (game_msgs__msg__GameStatus *)malloc(sizeof(game_msgs__msg__GameStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(game_msgs__msg__GameStatus));
  bool success = game_msgs__msg__GameStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
game_msgs__msg__GameStatus__destroy(game_msgs__msg__GameStatus * msg)
{
  if (msg) {
    game_msgs__msg__GameStatus__fini(msg);
  }
  free(msg);
}


bool
game_msgs__msg__GameStatus__Sequence__init(game_msgs__msg__GameStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  game_msgs__msg__GameStatus * data = NULL;
  if (size) {
    data = (game_msgs__msg__GameStatus *)calloc(size, sizeof(game_msgs__msg__GameStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = game_msgs__msg__GameStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        game_msgs__msg__GameStatus__fini(&data[i - 1]);
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
game_msgs__msg__GameStatus__Sequence__fini(game_msgs__msg__GameStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      game_msgs__msg__GameStatus__fini(&array->data[i]);
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

game_msgs__msg__GameStatus__Sequence *
game_msgs__msg__GameStatus__Sequence__create(size_t size)
{
  game_msgs__msg__GameStatus__Sequence * array = (game_msgs__msg__GameStatus__Sequence *)malloc(sizeof(game_msgs__msg__GameStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = game_msgs__msg__GameStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
game_msgs__msg__GameStatus__Sequence__destroy(game_msgs__msg__GameStatus__Sequence * array)
{
  if (array) {
    game_msgs__msg__GameStatus__Sequence__fini(array);
  }
  free(array);
}

bool
game_msgs__msg__GameStatus__Sequence__are_equal(const game_msgs__msg__GameStatus__Sequence * lhs, const game_msgs__msg__GameStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!game_msgs__msg__GameStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
game_msgs__msg__GameStatus__Sequence__copy(
  const game_msgs__msg__GameStatus__Sequence * input,
  game_msgs__msg__GameStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(game_msgs__msg__GameStatus);
    game_msgs__msg__GameStatus * data =
      (game_msgs__msg__GameStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!game_msgs__msg__GameStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          game_msgs__msg__GameStatus__fini(&data[i]);
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
    if (!game_msgs__msg__GameStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
