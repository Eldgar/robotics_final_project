// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_H_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fleet_dock_status_array'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'fleet_names_array'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FleetDockStatus in the package barista_dock_charger_station.
typedef struct barista_dock_charger_station__msg__FleetDockStatus
{
  rosidl_runtime_c__boolean__Sequence fleet_dock_status_array;
  rosidl_runtime_c__String__Sequence fleet_names_array;
} barista_dock_charger_station__msg__FleetDockStatus;

// Struct for a sequence of barista_dock_charger_station__msg__FleetDockStatus.
typedef struct barista_dock_charger_station__msg__FleetDockStatus__Sequence
{
  barista_dock_charger_station__msg__FleetDockStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_dock_charger_station__msg__FleetDockStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_H_
