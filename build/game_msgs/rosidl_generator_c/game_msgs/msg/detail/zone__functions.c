// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice
#include "game_msgs/msg/detail/zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
game_msgs__msg__Zone__init(game_msgs__msg__Zone * msg)
{
  if (!msg) {
    return false;
  }
  // f1_zone_status
  // f1_zone_buff_debuff_status
  // f2_zone_status
  // f2_zone_buff_debuff_status
  // f3_zone_status
  // f3_zone_buff_debuff_status
  // f4_zone_status
  // f4_zone_buff_debuff_status
  // f5_zone_status
  // f5_zone_buff_debuff_status
  // f6_zone_status
  // f6_zone_buff_debuff_status
  // red1_bullet_left
  // red2_bullet_left
  // blue1_bullet_left
  // blue2_bullet_left
  return true;
}

void
game_msgs__msg__Zone__fini(game_msgs__msg__Zone * msg)
{
  if (!msg) {
    return;
  }
  // f1_zone_status
  // f1_zone_buff_debuff_status
  // f2_zone_status
  // f2_zone_buff_debuff_status
  // f3_zone_status
  // f3_zone_buff_debuff_status
  // f4_zone_status
  // f4_zone_buff_debuff_status
  // f5_zone_status
  // f5_zone_buff_debuff_status
  // f6_zone_status
  // f6_zone_buff_debuff_status
  // red1_bullet_left
  // red2_bullet_left
  // blue1_bullet_left
  // blue2_bullet_left
}

bool
game_msgs__msg__Zone__are_equal(const game_msgs__msg__Zone * lhs, const game_msgs__msg__Zone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f1_zone_status
  if (lhs->f1_zone_status != rhs->f1_zone_status) {
    return false;
  }
  // f1_zone_buff_debuff_status
  if (lhs->f1_zone_buff_debuff_status != rhs->f1_zone_buff_debuff_status) {
    return false;
  }
  // f2_zone_status
  if (lhs->f2_zone_status != rhs->f2_zone_status) {
    return false;
  }
  // f2_zone_buff_debuff_status
  if (lhs->f2_zone_buff_debuff_status != rhs->f2_zone_buff_debuff_status) {
    return false;
  }
  // f3_zone_status
  if (lhs->f3_zone_status != rhs->f3_zone_status) {
    return false;
  }
  // f3_zone_buff_debuff_status
  if (lhs->f3_zone_buff_debuff_status != rhs->f3_zone_buff_debuff_status) {
    return false;
  }
  // f4_zone_status
  if (lhs->f4_zone_status != rhs->f4_zone_status) {
    return false;
  }
  // f4_zone_buff_debuff_status
  if (lhs->f4_zone_buff_debuff_status != rhs->f4_zone_buff_debuff_status) {
    return false;
  }
  // f5_zone_status
  if (lhs->f5_zone_status != rhs->f5_zone_status) {
    return false;
  }
  // f5_zone_buff_debuff_status
  if (lhs->f5_zone_buff_debuff_status != rhs->f5_zone_buff_debuff_status) {
    return false;
  }
  // f6_zone_status
  if (lhs->f6_zone_status != rhs->f6_zone_status) {
    return false;
  }
  // f6_zone_buff_debuff_status
  if (lhs->f6_zone_buff_debuff_status != rhs->f6_zone_buff_debuff_status) {
    return false;
  }
  // red1_bullet_left
  if (lhs->red1_bullet_left != rhs->red1_bullet_left) {
    return false;
  }
  // red2_bullet_left
  if (lhs->red2_bullet_left != rhs->red2_bullet_left) {
    return false;
  }
  // blue1_bullet_left
  if (lhs->blue1_bullet_left != rhs->blue1_bullet_left) {
    return false;
  }
  // blue2_bullet_left
  if (lhs->blue2_bullet_left != rhs->blue2_bullet_left) {
    return false;
  }
  return true;
}

bool
game_msgs__msg__Zone__copy(
  const game_msgs__msg__Zone * input,
  game_msgs__msg__Zone * output)
{
  if (!input || !output) {
    return false;
  }
  // f1_zone_status
  output->f1_zone_status = input->f1_zone_status;
  // f1_zone_buff_debuff_status
  output->f1_zone_buff_debuff_status = input->f1_zone_buff_debuff_status;
  // f2_zone_status
  output->f2_zone_status = input->f2_zone_status;
  // f2_zone_buff_debuff_status
  output->f2_zone_buff_debuff_status = input->f2_zone_buff_debuff_status;
  // f3_zone_status
  output->f3_zone_status = input->f3_zone_status;
  // f3_zone_buff_debuff_status
  output->f3_zone_buff_debuff_status = input->f3_zone_buff_debuff_status;
  // f4_zone_status
  output->f4_zone_status = input->f4_zone_status;
  // f4_zone_buff_debuff_status
  output->f4_zone_buff_debuff_status = input->f4_zone_buff_debuff_status;
  // f5_zone_status
  output->f5_zone_status = input->f5_zone_status;
  // f5_zone_buff_debuff_status
  output->f5_zone_buff_debuff_status = input->f5_zone_buff_debuff_status;
  // f6_zone_status
  output->f6_zone_status = input->f6_zone_status;
  // f6_zone_buff_debuff_status
  output->f6_zone_buff_debuff_status = input->f6_zone_buff_debuff_status;
  // red1_bullet_left
  output->red1_bullet_left = input->red1_bullet_left;
  // red2_bullet_left
  output->red2_bullet_left = input->red2_bullet_left;
  // blue1_bullet_left
  output->blue1_bullet_left = input->blue1_bullet_left;
  // blue2_bullet_left
  output->blue2_bullet_left = input->blue2_bullet_left;
  return true;
}

game_msgs__msg__Zone *
game_msgs__msg__Zone__create()
{
  game_msgs__msg__Zone * msg = (game_msgs__msg__Zone *)malloc(sizeof(game_msgs__msg__Zone));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(game_msgs__msg__Zone));
  bool success = game_msgs__msg__Zone__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
game_msgs__msg__Zone__destroy(game_msgs__msg__Zone * msg)
{
  if (msg) {
    game_msgs__msg__Zone__fini(msg);
  }
  free(msg);
}


bool
game_msgs__msg__Zone__Sequence__init(game_msgs__msg__Zone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  game_msgs__msg__Zone * data = NULL;
  if (size) {
    data = (game_msgs__msg__Zone *)calloc(size, sizeof(game_msgs__msg__Zone));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = game_msgs__msg__Zone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        game_msgs__msg__Zone__fini(&data[i - 1]);
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
game_msgs__msg__Zone__Sequence__fini(game_msgs__msg__Zone__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      game_msgs__msg__Zone__fini(&array->data[i]);
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

game_msgs__msg__Zone__Sequence *
game_msgs__msg__Zone__Sequence__create(size_t size)
{
  game_msgs__msg__Zone__Sequence * array = (game_msgs__msg__Zone__Sequence *)malloc(sizeof(game_msgs__msg__Zone__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = game_msgs__msg__Zone__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
game_msgs__msg__Zone__Sequence__destroy(game_msgs__msg__Zone__Sequence * array)
{
  if (array) {
    game_msgs__msg__Zone__Sequence__fini(array);
  }
  free(array);
}

bool
game_msgs__msg__Zone__Sequence__are_equal(const game_msgs__msg__Zone__Sequence * lhs, const game_msgs__msg__Zone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!game_msgs__msg__Zone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
game_msgs__msg__Zone__Sequence__copy(
  const game_msgs__msg__Zone__Sequence * input,
  game_msgs__msg__Zone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(game_msgs__msg__Zone);
    game_msgs__msg__Zone * data =
      (game_msgs__msg__Zone *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!game_msgs__msg__Zone__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          game_msgs__msg__Zone__fini(&data[i]);
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
    if (!game_msgs__msg__Zone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
