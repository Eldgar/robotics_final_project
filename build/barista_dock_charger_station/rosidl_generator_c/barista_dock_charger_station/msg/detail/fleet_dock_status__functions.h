// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__FUNCTIONS_H_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "barista_dock_charger_station/msg/rosidl_generator_c__visibility_control.h"

#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.h"

/// Initialize msg/FleetDockStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * barista_dock_charger_station__msg__FleetDockStatus
 * )) before or use
 * barista_dock_charger_station__msg__FleetDockStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__msg__FleetDockStatus__init(barista_dock_charger_station__msg__FleetDockStatus * msg);

/// Finalize msg/FleetDockStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__msg__FleetDockStatus__fini(barista_dock_charger_station__msg__FleetDockStatus * msg);

/// Create msg/FleetDockStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * barista_dock_charger_station__msg__FleetDockStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__msg__FleetDockStatus *
barista_dock_charger_station__msg__FleetDockStatus__create();

/// Destroy msg/FleetDockStatus message.
/**
 * It calls
 * barista_dock_charger_station__msg__FleetDockStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__msg__FleetDockStatus__destroy(barista_dock_charger_station__msg__FleetDockStatus * msg);

/// Check for msg/FleetDockStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__msg__FleetDockStatus__are_equal(const barista_dock_charger_station__msg__FleetDockStatus * lhs, const barista_dock_charger_station__msg__FleetDockStatus * rhs);

/// Copy a msg/FleetDockStatus message.
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
barista_dock_charger_station__msg__FleetDockStatus__copy(
  const barista_dock_charger_station__msg__FleetDockStatus * input,
  barista_dock_charger_station__msg__FleetDockStatus * output);

/// Initialize array of msg/FleetDockStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * barista_dock_charger_station__msg__FleetDockStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__msg__FleetDockStatus__Sequence__init(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array, size_t size);

/// Finalize array of msg/FleetDockStatus messages.
/**
 * It calls
 * barista_dock_charger_station__msg__FleetDockStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array);

/// Create array of msg/FleetDockStatus messages.
/**
 * It allocates the memory for the array and calls
 * barista_dock_charger_station__msg__FleetDockStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
barista_dock_charger_station__msg__FleetDockStatus__Sequence *
barista_dock_charger_station__msg__FleetDockStatus__Sequence__create(size_t size);

/// Destroy array of msg/FleetDockStatus messages.
/**
 * It calls
 * barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
void
barista_dock_charger_station__msg__FleetDockStatus__Sequence__destroy(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array);

/// Check for msg/FleetDockStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_barista_dock_charger_station
bool
barista_dock_charger_station__msg__FleetDockStatus__Sequence__are_equal(const barista_dock_charger_station__msg__FleetDockStatus__Sequence * lhs, const barista_dock_charger_station__msg__FleetDockStatus__Sequence * rhs);

/// Copy an array of msg/FleetDockStatus messages.
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
barista_dock_charger_station__msg__FleetDockStatus__Sequence__copy(
  const barista_dock_charger_station__msg__FleetDockStatus__Sequence * input,
  barista_dock_charger_station__msg__FleetDockStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__FUNCTIONS_H_
