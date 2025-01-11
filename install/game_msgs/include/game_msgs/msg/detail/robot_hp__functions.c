// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from game_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice
#include "game_msgs/msg/detail/robot_hp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
game_msgs__msg__RobotHP__init(game_msgs__msg__RobotHP * msg)
{
  if (!msg) {
    return false;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  return true;
}

void
game_msgs__msg__RobotHP__fini(game_msgs__msg__RobotHP * msg)
{
  if (!msg) {
    return;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
}

bool
game_msgs__msg__RobotHP__are_equal(const game_msgs__msg__RobotHP * lhs, const game_msgs__msg__RobotHP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_1_robot_hp
  if (lhs->red_1_robot_hp != rhs->red_1_robot_hp) {
    return false;
  }
  // red_2_robot_hp
  if (lhs->red_2_robot_hp != rhs->red_2_robot_hp) {
    return false;
  }
  // red_3_robot_hp
  if (lhs->red_3_robot_hp != rhs->red_3_robot_hp) {
    return false;
  }
  // red_4_robot_hp
  if (lhs->red_4_robot_hp != rhs->red_4_robot_hp) {
    return false;
  }
  // red_5_robot_hp
  if (lhs->red_5_robot_hp != rhs->red_5_robot_hp) {
    return false;
  }
  // red_7_robot_hp
  if (lhs->red_7_robot_hp != rhs->red_7_robot_hp) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_1_robot_hp
  if (lhs->blue_1_robot_hp != rhs->blue_1_robot_hp) {
    return false;
  }
  // blue_2_robot_hp
  if (lhs->blue_2_robot_hp != rhs->blue_2_robot_hp) {
    return false;
  }
  // blue_3_robot_hp
  if (lhs->blue_3_robot_hp != rhs->blue_3_robot_hp) {
    return false;
  }
  // blue_4_robot_hp
  if (lhs->blue_4_robot_hp != rhs->blue_4_robot_hp) {
    return false;
  }
  // blue_5_robot_hp
  if (lhs->blue_5_robot_hp != rhs->blue_5_robot_hp) {
    return false;
  }
  // blue_7_robot_hp
  if (lhs->blue_7_robot_hp != rhs->blue_7_robot_hp) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  return true;
}

bool
game_msgs__msg__RobotHP__copy(
  const game_msgs__msg__RobotHP * input,
  game_msgs__msg__RobotHP * output)
{
  if (!input || !output) {
    return false;
  }
  // red_1_robot_hp
  output->red_1_robot_hp = input->red_1_robot_hp;
  // red_2_robot_hp
  output->red_2_robot_hp = input->red_2_robot_hp;
  // red_3_robot_hp
  output->red_3_robot_hp = input->red_3_robot_hp;
  // red_4_robot_hp
  output->red_4_robot_hp = input->red_4_robot_hp;
  // red_5_robot_hp
  output->red_5_robot_hp = input->red_5_robot_hp;
  // red_7_robot_hp
  output->red_7_robot_hp = input->red_7_robot_hp;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1_robot_hp
  output->blue_1_robot_hp = input->blue_1_robot_hp;
  // blue_2_robot_hp
  output->blue_2_robot_hp = input->blue_2_robot_hp;
  // blue_3_robot_hp
  output->blue_3_robot_hp = input->blue_3_robot_hp;
  // blue_4_robot_hp
  output->blue_4_robot_hp = input->blue_4_robot_hp;
  // blue_5_robot_hp
  output->blue_5_robot_hp = input->blue_5_robot_hp;
  // blue_7_robot_hp
  output->blue_7_robot_hp = input->blue_7_robot_hp;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  return true;
}

game_msgs__msg__RobotHP *
game_msgs__msg__RobotHP__create()
{
  game_msgs__msg__RobotHP * msg = (game_msgs__msg__RobotHP *)malloc(sizeof(game_msgs__msg__RobotHP));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(game_msgs__msg__RobotHP));
  bool success = game_msgs__msg__RobotHP__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
game_msgs__msg__RobotHP__destroy(game_msgs__msg__RobotHP * msg)
{
  if (msg) {
    game_msgs__msg__RobotHP__fini(msg);
  }
  free(msg);
}


bool
game_msgs__msg__RobotHP__Sequence__init(game_msgs__msg__RobotHP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  game_msgs__msg__RobotHP * data = NULL;
  if (size) {
    data = (game_msgs__msg__RobotHP *)calloc(size, sizeof(game_msgs__msg__RobotHP));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = game_msgs__msg__RobotHP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        game_msgs__msg__RobotHP__fini(&data[i - 1]);
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
game_msgs__msg__RobotHP__Sequence__fini(game_msgs__msg__RobotHP__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      game_msgs__msg__RobotHP__fini(&array->data[i]);
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

game_msgs__msg__RobotHP__Sequence *
game_msgs__msg__RobotHP__Sequence__create(size_t size)
{
  game_msgs__msg__RobotHP__Sequence * array = (game_msgs__msg__RobotHP__Sequence *)malloc(sizeof(game_msgs__msg__RobotHP__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = game_msgs__msg__RobotHP__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
game_msgs__msg__RobotHP__Sequence__destroy(game_msgs__msg__RobotHP__Sequence * array)
{
  if (array) {
    game_msgs__msg__RobotHP__Sequence__fini(array);
  }
  free(array);
}

bool
game_msgs__msg__RobotHP__Sequence__are_equal(const game_msgs__msg__RobotHP__Sequence * lhs, const game_msgs__msg__RobotHP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!game_msgs__msg__RobotHP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
game_msgs__msg__RobotHP__Sequence__copy(
  const game_msgs__msg__RobotHP__Sequence * input,
  game_msgs__msg__RobotHP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(game_msgs__msg__RobotHP);
    game_msgs__msg__RobotHP * data =
      (game_msgs__msg__RobotHP *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!game_msgs__msg__RobotHP__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          game_msgs__msg__RobotHP__fini(&data[i]);
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
    if (!game_msgs__msg__RobotHP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
