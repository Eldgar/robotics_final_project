// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_H_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DockChargerStation in the package barista_dock_charger_station.
typedef struct barista_dock_charger_station__srv__DockChargerStation_Request
{
  /// true = DOCK, false = Undock
  bool dock_mode;
} barista_dock_charger_station__srv__DockChargerStation_Request;

// Struct for a sequence of barista_dock_charger_station__srv__DockChargerStation_Request.
typedef struct barista_dock_charger_station__srv__DockChargerStation_Request__Sequence
{
  barista_dock_charger_station__srv__DockChargerStation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_dock_charger_station__srv__DockChargerStation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DockChargerStation in the package barista_dock_charger_station.
typedef struct barista_dock_charger_station__srv__DockChargerStation_Response
{
  /// Did it achieve it?
  bool success;
  /// Info
  rosidl_runtime_c__String info;
} barista_dock_charger_station__srv__DockChargerStation_Response;

// Struct for a sequence of barista_dock_charger_station__srv__DockChargerStation_Response.
typedef struct barista_dock_charger_station__srv__DockChargerStation_Response__Sequence
{
  barista_dock_charger_station__srv__DockChargerStation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_dock_charger_station__srv__DockChargerStation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_H_
