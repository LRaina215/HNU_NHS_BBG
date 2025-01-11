// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from game_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef GAME_MSGS__MSG__DETAIL__ZONE__FUNCTIONS_H_
#define GAME_MSGS__MSG__DETAIL__ZONE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "game_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "game_msgs/msg/detail/zone__struct.h"

/// Initialize msg/Zone message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * game_msgs__msg__Zone
 * )) before or use
 * game_msgs__msg__Zone__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__init(game_msgs__msg__Zone * msg);

/// Finalize msg/Zone message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
void
game_msgs__msg__Zone__fini(game_msgs__msg__Zone * msg);

/// Create msg/Zone message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * game_msgs__msg__Zone__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
game_msgs__msg__Zone *
game_msgs__msg__Zone__create();

/// Destroy msg/Zone message.
/**
 * It calls
 * game_msgs__msg__Zone__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
void
game_msgs__msg__Zone__destroy(game_msgs__msg__Zone * msg);

/// Check for msg/Zone message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__are_equal(const game_msgs__msg__Zone * lhs, const game_msgs__msg__Zone * rhs);

/// Copy a msg/Zone message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__copy(
  const game_msgs__msg__Zone * input,
  game_msgs__msg__Zone * output);

/// Initialize array of msg/Zone messages.
/**
 * It allocates the memory for the number of elements and calls
 * game_msgs__msg__Zone__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__Sequence__init(game_msgs__msg__Zone__Sequence * array, size_t size);

/// Finalize array of msg/Zone messages.
/**
 * It calls
 * game_msgs__msg__Zone__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
void
game_msgs__msg__Zone__Sequence__fini(game_msgs__msg__Zone__Sequence * array);

/// Create array of msg/Zone messages.
/**
 * It allocates the memory for the array and calls
 * game_msgs__msg__Zone__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
game_msgs__msg__Zone__Sequence *
game_msgs__msg__Zone__Sequence__create(size_t size);

/// Destroy array of msg/Zone messages.
/**
 * It calls
 * game_msgs__msg__Zone__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
void
game_msgs__msg__Zone__Sequence__destroy(game_msgs__msg__Zone__Sequence * array);

/// Check for msg/Zone message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__Sequence__are_equal(const game_msgs__msg__Zone__Sequence * lhs, const game_msgs__msg__Zone__Sequence * rhs);

/// Copy an array of msg/Zone messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_game_msgs
bool
game_msgs__msg__Zone__Sequence__copy(
  const game_msgs__msg__Zone__Sequence * input,
  game_msgs__msg__Zone__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GAME_MSGS__MSG__DETAIL__ZONE__FUNCTIONS_H_
