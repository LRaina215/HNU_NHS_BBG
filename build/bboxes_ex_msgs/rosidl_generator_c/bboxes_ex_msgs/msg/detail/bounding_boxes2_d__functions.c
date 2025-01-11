// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bboxes_ex_msgs:msg/BoundingBoxes2D.idl
// generated code does not contain a copyright notice
#include "bboxes_ex_msgs/msg/detail/bounding_boxes2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "bboxes_ex_msgs/msg/detail/bounding_box2_d__functions.h"

bool
bboxes_ex_msgs__msg__BoundingBoxes2D__init(bboxes_ex_msgs__msg__BoundingBoxes2D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bboxes_ex_msgs__msg__BoundingBoxes2D__fini(msg);
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__init(&msg->image_header)) {
    bboxes_ex_msgs__msg__BoundingBoxes2D__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!bboxes_ex_msgs__msg__BoundingBox2D__Sequence__init(&msg->bounding_boxes, 0)) {
    bboxes_ex_msgs__msg__BoundingBoxes2D__fini(msg);
    return false;
  }
  return true;
}

void
bboxes_ex_msgs__msg__BoundingBoxes2D__fini(bboxes_ex_msgs__msg__BoundingBoxes2D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_header
  std_msgs__msg__Header__fini(&msg->image_header);
  // bounding_boxes
  bboxes_ex_msgs__msg__BoundingBox2D__Sequence__fini(&msg->bounding_boxes);
}

bool
bboxes_ex_msgs__msg__BoundingBoxes2D__are_equal(const bboxes_ex_msgs__msg__BoundingBoxes2D * lhs, const bboxes_ex_msgs__msg__BoundingBoxes2D * rhs)
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
  // image_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->image_header), &(rhs->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!bboxes_ex_msgs__msg__BoundingBox2D__Sequence__are_equal(
      &(lhs->bounding_boxes), &(rhs->bounding_boxes)))
  {
    return false;
  }
  return true;
}

bool
bboxes_ex_msgs__msg__BoundingBoxes2D__copy(
  const bboxes_ex_msgs__msg__BoundingBoxes2D * input,
  bboxes_ex_msgs__msg__BoundingBoxes2D * output)
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
  // image_header
  if (!std_msgs__msg__Header__copy(
      &(input->image_header), &(output->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!bboxes_ex_msgs__msg__BoundingBox2D__Sequence__copy(
      &(input->bounding_boxes), &(output->bounding_boxes)))
  {
    return false;
  }
  return true;
}

bboxes_ex_msgs__msg__BoundingBoxes2D *
bboxes_ex_msgs__msg__BoundingBoxes2D__create()
{
  bboxes_ex_msgs__msg__BoundingBoxes2D * msg = (bboxes_ex_msgs__msg__BoundingBoxes2D *)malloc(sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D));
  bool success = bboxes_ex_msgs__msg__BoundingBoxes2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bboxes_ex_msgs__msg__BoundingBoxes2D__destroy(bboxes_ex_msgs__msg__BoundingBoxes2D * msg)
{
  if (msg) {
    bboxes_ex_msgs__msg__BoundingBoxes2D__fini(msg);
  }
  free(msg);
}


bool
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__init(bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bboxes_ex_msgs__msg__BoundingBoxes2D * data = NULL;
  if (size) {
    data = (bboxes_ex_msgs__msg__BoundingBoxes2D *)calloc(size, sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bboxes_ex_msgs__msg__BoundingBoxes2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bboxes_ex_msgs__msg__BoundingBoxes2D__fini(&data[i - 1]);
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
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__fini(bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bboxes_ex_msgs__msg__BoundingBoxes2D__fini(&array->data[i]);
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

bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence *
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__create(size_t size)
{
  bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * array = (bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence *)malloc(sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__destroy(bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * array)
{
  if (array) {
    bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__fini(array);
  }
  free(array);
}

bool
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__are_equal(const bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * lhs, const bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bboxes_ex_msgs__msg__BoundingBoxes2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence__copy(
  const bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * input,
  bboxes_ex_msgs__msg__BoundingBoxes2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bboxes_ex_msgs__msg__BoundingBoxes2D);
    bboxes_ex_msgs__msg__BoundingBoxes2D * data =
      (bboxes_ex_msgs__msg__BoundingBoxes2D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bboxes_ex_msgs__msg__BoundingBoxes2D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bboxes_ex_msgs__msg__BoundingBoxes2D__fini(&data[i]);
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
    if (!bboxes_ex_msgs__msg__BoundingBoxes2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
