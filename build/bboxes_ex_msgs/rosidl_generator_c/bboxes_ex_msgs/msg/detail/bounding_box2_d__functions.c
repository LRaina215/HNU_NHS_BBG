// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bboxes_ex_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice
#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `class_id`
#include "rosidl_runtime_c/string_functions.h"

bool
bboxes_ex_msgs__msg__BoundingBox2D__init(bboxes_ex_msgs__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return false;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // img_width
  // img_height
  // center_dist
  // class_id
  if (!rosidl_runtime_c__String__init(&msg->class_id)) {
    bboxes_ex_msgs__msg__BoundingBox2D__fini(msg);
    return false;
  }
  return true;
}

void
bboxes_ex_msgs__msg__BoundingBox2D__fini(bboxes_ex_msgs__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // img_width
  // img_height
  // center_dist
  // class_id
  rosidl_runtime_c__String__fini(&msg->class_id);
}

bool
bboxes_ex_msgs__msg__BoundingBox2D__are_equal(const bboxes_ex_msgs__msg__BoundingBox2D * lhs, const bboxes_ex_msgs__msg__BoundingBox2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // xmin
  if (lhs->xmin != rhs->xmin) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // xmax
  if (lhs->xmax != rhs->xmax) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // img_width
  if (lhs->img_width != rhs->img_width) {
    return false;
  }
  // img_height
  if (lhs->img_height != rhs->img_height) {
    return false;
  }
  // center_dist
  if (lhs->center_dist != rhs->center_dist) {
    return false;
  }
  // class_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_id), &(rhs->class_id)))
  {
    return false;
  }
  return true;
}

bool
bboxes_ex_msgs__msg__BoundingBox2D__copy(
  const bboxes_ex_msgs__msg__BoundingBox2D * input,
  bboxes_ex_msgs__msg__BoundingBox2D * output)
{
  if (!input || !output) {
    return false;
  }
  // probability
  output->probability = input->probability;
  // xmin
  output->xmin = input->xmin;
  // ymin
  output->ymin = input->ymin;
  // xmax
  output->xmax = input->xmax;
  // ymax
  output->ymax = input->ymax;
  // id
  output->id = input->id;
  // img_width
  output->img_width = input->img_width;
  // img_height
  output->img_height = input->img_height;
  // center_dist
  output->center_dist = input->center_dist;
  // class_id
  if (!rosidl_runtime_c__String__copy(
      &(input->class_id), &(output->class_id)))
  {
    return false;
  }
  return true;
}

bboxes_ex_msgs__msg__BoundingBox2D *
bboxes_ex_msgs__msg__BoundingBox2D__create()
{
  bboxes_ex_msgs__msg__BoundingBox2D * msg = (bboxes_ex_msgs__msg__BoundingBox2D *)malloc(sizeof(bboxes_ex_msgs__msg__BoundingBox2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bboxes_ex_msgs__msg__BoundingBox2D));
  bool success = bboxes_ex_msgs__msg__BoundingBox2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bboxes_ex_msgs__msg__BoundingBox2D__destroy(bboxes_ex_msgs__msg__BoundingBox2D * msg)
{
  if (msg) {
    bboxes_ex_msgs__msg__BoundingBox2D__fini(msg);
  }
  free(msg);
}


bool
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__init(bboxes_ex_msgs__msg__BoundingBox2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bboxes_ex_msgs__msg__BoundingBox2D * data = NULL;
  if (size) {
    data = (bboxes_ex_msgs__msg__BoundingBox2D *)calloc(size, sizeof(bboxes_ex_msgs__msg__BoundingBox2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bboxes_ex_msgs__msg__BoundingBox2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bboxes_ex_msgs__msg__BoundingBox2D__fini(&data[i - 1]);
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
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__fini(bboxes_ex_msgs__msg__BoundingBox2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bboxes_ex_msgs__msg__BoundingBox2D__fini(&array->data[i]);
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

bboxes_ex_msgs__msg__BoundingBox2D__Sequence *
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__create(size_t size)
{
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence * array = (bboxes_ex_msgs__msg__BoundingBox2D__Sequence *)malloc(sizeof(bboxes_ex_msgs__msg__BoundingBox2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bboxes_ex_msgs__msg__BoundingBox2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__destroy(bboxes_ex_msgs__msg__BoundingBox2D__Sequence * array)
{
  if (array) {
    bboxes_ex_msgs__msg__BoundingBox2D__Sequence__fini(array);
  }
  free(array);
}

bool
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__are_equal(const bboxes_ex_msgs__msg__BoundingBox2D__Sequence * lhs, const bboxes_ex_msgs__msg__BoundingBox2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bboxes_ex_msgs__msg__BoundingBox2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bboxes_ex_msgs__msg__BoundingBox2D__Sequence__copy(
  const bboxes_ex_msgs__msg__BoundingBox2D__Sequence * input,
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bboxes_ex_msgs__msg__BoundingBox2D);
    bboxes_ex_msgs__msg__BoundingBox2D * data =
      (bboxes_ex_msgs__msg__BoundingBox2D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bboxes_ex_msgs__msg__BoundingBox2D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bboxes_ex_msgs__msg__BoundingBox2D__fini(&data[i]);
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
    if (!bboxes_ex_msgs__msg__BoundingBox2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
