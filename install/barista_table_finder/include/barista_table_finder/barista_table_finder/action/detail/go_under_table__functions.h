// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from barista_table_finder:action/GoUnderTable.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_TABLE_FINDER__ACTION__DETAIL__GO_UNDER_TABLE__FUNCTIONS_H_
#define BARISTA_TABLE_FINDER__ACTION__DETAIL__GO_UNDER_TABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "barista_table_finder/msg/rosidl_generator_c__visibility_control.h"

#include "barista_table_finder/action/detail/go_under_table__struct.h"

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_Goal
 * )) before or use
 * barista_table_finder__action__GoUnderTable_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__init(barista_table_finder__action__GoUnderTable_Goal * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Goal__fini(barista_table_finder__action__GoUnderTable_Goal * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Goal *
barista_table_finder__action__GoUnderTable_Goal__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Goal__destroy(barista_table_finder__action__GoUnderTable_Goal * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__are_equal(const barista_table_finder__action__GoUnderTable_Goal * lhs, const barista_table_finder__action__GoUnderTable_Goal * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__copy(
  const barista_table_finder__action__GoUnderTable_Goal * input,
  barista_table_finder__action__GoUnderTable_Goal * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__Sequence__init(barista_table_finder__action__GoUnderTable_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Goal__Sequence__fini(barista_table_finder__action__GoUnderTable_Goal__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Goal__Sequence *
barista_table_finder__action__GoUnderTable_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Goal__Sequence__destroy(barista_table_finder__action__GoUnderTable_Goal__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_Goal__Sequence * lhs, const barista_table_finder__action__GoUnderTable_Goal__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Goal__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_Goal__Sequence * input,
  barista_table_finder__action__GoUnderTable_Goal__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_Result
 * )) before or use
 * barista_table_finder__action__GoUnderTable_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__init(barista_table_finder__action__GoUnderTable_Result * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Result__fini(barista_table_finder__action__GoUnderTable_Result * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Result *
barista_table_finder__action__GoUnderTable_Result__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Result__destroy(barista_table_finder__action__GoUnderTable_Result * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__are_equal(const barista_table_finder__action__GoUnderTable_Result * lhs, const barista_table_finder__action__GoUnderTable_Result * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__copy(
  const barista_table_finder__action__GoUnderTable_Result * input,
  barista_table_finder__action__GoUnderTable_Result * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__Sequence__init(barista_table_finder__action__GoUnderTable_Result__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Result__Sequence__fini(barista_table_finder__action__GoUnderTable_Result__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Result__Sequence *
barista_table_finder__action__GoUnderTable_Result__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Result__Sequence__destroy(barista_table_finder__action__GoUnderTable_Result__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_Result__Sequence * lhs, const barista_table_finder__action__GoUnderTable_Result__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Result__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_Result__Sequence * input,
  barista_table_finder__action__GoUnderTable_Result__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_Feedback
 * )) before or use
 * barista_table_finder__action__GoUnderTable_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__init(barista_table_finder__action__GoUnderTable_Feedback * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Feedback__fini(barista_table_finder__action__GoUnderTable_Feedback * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Feedback *
barista_table_finder__action__GoUnderTable_Feedback__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Feedback__destroy(barista_table_finder__action__GoUnderTable_Feedback * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__are_equal(const barista_table_finder__action__GoUnderTable_Feedback * lhs, const barista_table_finder__action__GoUnderTable_Feedback * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__copy(
  const barista_table_finder__action__GoUnderTable_Feedback * input,
  barista_table_finder__action__GoUnderTable_Feedback * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__Sequence__init(barista_table_finder__action__GoUnderTable_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Feedback__Sequence__fini(barista_table_finder__action__GoUnderTable_Feedback__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_Feedback__Sequence *
barista_table_finder__action__GoUnderTable_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_Feedback__Sequence__destroy(barista_table_finder__action__GoUnderTable_Feedback__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_Feedback__Sequence * lhs, const barista_table_finder__action__GoUnderTable_Feedback__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_Feedback__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_Feedback__Sequence * input,
  barista_table_finder__action__GoUnderTable_Feedback__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_SendGoal_Request
 * )) before or use
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__init(barista_table_finder__action__GoUnderTable_SendGoal_Request * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Request__fini(barista_table_finder__action__GoUnderTable_SendGoal_Request * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_SendGoal_Request *
barista_table_finder__action__GoUnderTable_SendGoal_Request__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Request__destroy(barista_table_finder__action__GoUnderTable_SendGoal_Request * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__are_equal(const barista_table_finder__action__GoUnderTable_SendGoal_Request * lhs, const barista_table_finder__action__GoUnderTable_SendGoal_Request * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__copy(
  const barista_table_finder__action__GoUnderTable_SendGoal_Request * input,
  barista_table_finder__action__GoUnderTable_SendGoal_Request * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__init(barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__fini(barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence *
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__destroy(barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * lhs, const barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * input,
  barista_table_finder__action__GoUnderTable_SendGoal_Request__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_SendGoal_Response
 * )) before or use
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__init(barista_table_finder__action__GoUnderTable_SendGoal_Response * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Response__fini(barista_table_finder__action__GoUnderTable_SendGoal_Response * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_SendGoal_Response *
barista_table_finder__action__GoUnderTable_SendGoal_Response__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Response__destroy(barista_table_finder__action__GoUnderTable_SendGoal_Response * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__are_equal(const barista_table_finder__action__GoUnderTable_SendGoal_Response * lhs, const barista_table_finder__action__GoUnderTable_SendGoal_Response * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__copy(
  const barista_table_finder__action__GoUnderTable_SendGoal_Response * input,
  barista_table_finder__action__GoUnderTable_SendGoal_Response * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__init(barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__fini(barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence *
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__destroy(barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * lhs, const barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * input,
  barista_table_finder__action__GoUnderTable_SendGoal_Response__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_GetResult_Request
 * )) before or use
 * barista_table_finder__action__GoUnderTable_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__init(barista_table_finder__action__GoUnderTable_GetResult_Request * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Request__fini(barista_table_finder__action__GoUnderTable_GetResult_Request * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_GetResult_Request *
barista_table_finder__action__GoUnderTable_GetResult_Request__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Request__destroy(barista_table_finder__action__GoUnderTable_GetResult_Request * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__are_equal(const barista_table_finder__action__GoUnderTable_GetResult_Request * lhs, const barista_table_finder__action__GoUnderTable_GetResult_Request * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__copy(
  const barista_table_finder__action__GoUnderTable_GetResult_Request * input,
  barista_table_finder__action__GoUnderTable_GetResult_Request * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__init(barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__fini(barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence *
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__destroy(barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * lhs, const barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * input,
  barista_table_finder__action__GoUnderTable_GetResult_Request__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_GetResult_Response
 * )) before or use
 * barista_table_finder__action__GoUnderTable_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__init(barista_table_finder__action__GoUnderTable_GetResult_Response * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Response__fini(barista_table_finder__action__GoUnderTable_GetResult_Response * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_GetResult_Response *
barista_table_finder__action__GoUnderTable_GetResult_Response__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Response__destroy(barista_table_finder__action__GoUnderTable_GetResult_Response * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__are_equal(const barista_table_finder__action__GoUnderTable_GetResult_Response * lhs, const barista_table_finder__action__GoUnderTable_GetResult_Response * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__copy(
  const barista_table_finder__action__GoUnderTable_GetResult_Response * input,
  barista_table_finder__action__GoUnderTable_GetResult_Response * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__init(barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__fini(barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence *
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__destroy(barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * lhs, const barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * input,
  barista_table_finder__action__GoUnderTable_GetResult_Response__Sequence * output);

/// Initialize action/GoUnderTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_table_finder__action__GoUnderTable_FeedbackMessage
 * )) before or use
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__init(barista_table_finder__action__GoUnderTable_FeedbackMessage * msg);

/// Finalize action/GoUnderTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_FeedbackMessage__fini(barista_table_finder__action__GoUnderTable_FeedbackMessage * msg);

/// Create action/GoUnderTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_FeedbackMessage *
barista_table_finder__action__GoUnderTable_FeedbackMessage__create();

/// Destroy action/GoUnderTable message.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_FeedbackMessage__destroy(barista_table_finder__action__GoUnderTable_FeedbackMessage * msg);

/// Check for action/GoUnderTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__are_equal(const barista_table_finder__action__GoUnderTable_FeedbackMessage * lhs, const barista_table_finder__action__GoUnderTable_FeedbackMessage * rhs);

/// Copy a action/GoUnderTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__copy(
  const barista_table_finder__action__GoUnderTable_FeedbackMessage * input,
  barista_table_finder__action__GoUnderTable_FeedbackMessage * output);

/// Initialize array of action/GoUnderTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__init(barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__fini(barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * array);

/// Create array of action/GoUnderTable messages.
/**
 * It allocates the memory for the array and calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence *
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoUnderTable messages.
/**
 * It calls
 * barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
void
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__destroy(barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * array);

/// Check for action/GoUnderTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__are_equal(const barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * lhs, const barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoUnderTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
bool
barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence__copy(
  const barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * input,
  barista_table_finder__action__GoUnderTable_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_TABLE_FINDER__ACTION__DETAIL__GO_UNDER_TABLE__FUNCTIONS_H_
