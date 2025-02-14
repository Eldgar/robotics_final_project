// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__FUNCTIONS_H_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "barista_dock_charger_station/msg/rosidl_generator_c__visibility_control.h"

#include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.h"

/// Initialize srv/DockChargerStation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_dock_charger_station__srv__DockChargerStation_Request
 * )) before or use
 * barista_dock_charger_station__srv__DockChargerStation_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__init(barista_dock_charger_station__srv__DockChargerStation_Request * msg);

/// Finalize srv/DockChargerStation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Request__fini(barista_dock_charger_station__srv__DockChargerStation_Request * msg);

/// Create srv/DockChargerStation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__srv__DockChargerStation_Request *
barista_dock_charger_station__srv__DockChargerStation_Request__create();

/// Destroy srv/DockChargerStation message.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Request__destroy(barista_dock_charger_station__srv__DockChargerStation_Request * msg);

/// Check for srv/DockChargerStation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Request * lhs, const barista_dock_charger_station__srv__DockChargerStation_Request * rhs);

/// Copy a srv/DockChargerStation message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Request * input,
  barista_dock_charger_station__srv__DockChargerStation_Request * output);

/// Initialize array of srv/DockChargerStation messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array, size_t size);

/// Finalize array of srv/DockChargerStation messages.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array);

/// Create array of srv/DockChargerStation messages.
/**
 * It allocates the memory for the array and calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence *
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__create(size_t size);

/// Destroy array of srv/DockChargerStation messages.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__destroy(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array);

/// Check for srv/DockChargerStation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * lhs, const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * rhs);

/// Copy an array of srv/DockChargerStation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * input,
  barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * output);

/// Initialize srv/DockChargerStation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_dock_charger_station__srv__DockChargerStation_Response
 * )) before or use
 * barista_dock_charger_station__srv__DockChargerStation_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__init(barista_dock_charger_station__srv__DockChargerStation_Response * msg);

/// Finalize srv/DockChargerStation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Response__fini(barista_dock_charger_station__srv__DockChargerStation_Response * msg);

/// Create srv/DockChargerStation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__srv__DockChargerStation_Response *
barista_dock_charger_station__srv__DockChargerStation_Response__create();

/// Destroy srv/DockChargerStation message.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Response__destroy(barista_dock_charger_station__srv__DockChargerStation_Response * msg);

/// Check for srv/DockChargerStation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Response * lhs, const barista_dock_charger_station__srv__DockChargerStation_Response * rhs);

/// Copy a srv/DockChargerStation message.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Response * input,
  barista_dock_charger_station__srv__DockChargerStation_Response * output);

/// Initialize array of srv/DockChargerStation messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array, size_t size);

/// Finalize array of srv/DockChargerStation messages.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array);

/// Create array of srv/DockChargerStation messages.
/**
 * It allocates the memory for the array and calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence *
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__create(size_t size);

/// Destroy array of srv/DockChargerStation messages.
/**
 * It calls
 * barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__destroy(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array);

/// Check for srv/DockChargerStation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * lhs, const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * rhs);

/// Copy an array of srv/DockChargerStation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * input,
  barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__FUNCTIONS_H_
