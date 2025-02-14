// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__rosidl_typesupport_introspection_c.h"
#include "barista_dock_charger_station/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__functions.h"
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.h"


// Include directives for member types
// Member `fleet_dock_status_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fleet_names_array`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  barista_dock_charger_station__msg__FleetDockStatus__init(message_memory);
}

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_fini_function(void * message_memory)
{
  barista_dock_charger_station__msg__FleetDockStatus__fini(message_memory);
}

size_t barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__size_function__FleetDockStatus__fleet_dock_status_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_dock_status_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_dock_status_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__fetch_function__FleetDockStatus__fleet_dock_status_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_dock_status_array(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__assign_function__FleetDockStatus__fleet_dock_status_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_dock_status_array(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__resize_function__FleetDockStatus__fleet_dock_status_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__size_function__FleetDockStatus__fleet_names_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_names_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_names_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__fetch_function__FleetDockStatus__fleet_names_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_names_array(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__assign_function__FleetDockStatus__fleet_names_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_names_array(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__resize_function__FleetDockStatus__fleet_names_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_member_array[2] = {
  {
    "fleet_dock_status_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station__msg__FleetDockStatus, fleet_dock_status_array),  // bytes offset in struct
    NULL,  // default value
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__size_function__FleetDockStatus__fleet_dock_status_array,  // size() function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_dock_status_array,  // get_const(index) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_dock_status_array,  // get(index) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__fetch_function__FleetDockStatus__fleet_dock_status_array,  // fetch(index, &value) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__assign_function__FleetDockStatus__fleet_dock_status_array,  // assign(index, value) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__resize_function__FleetDockStatus__fleet_dock_status_array  // resize(index) function pointer
  },
  {
    "fleet_names_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station__msg__FleetDockStatus, fleet_names_array),  // bytes offset in struct
    NULL,  // default value
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__size_function__FleetDockStatus__fleet_names_array,  // size() function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_const_function__FleetDockStatus__fleet_names_array,  // get_const(index) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__get_function__FleetDockStatus__fleet_names_array,  // get(index) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__fetch_function__FleetDockStatus__fleet_names_array,  // fetch(index, &value) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__assign_function__FleetDockStatus__fleet_names_array,  // assign(index, value) function pointer
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__resize_function__FleetDockStatus__fleet_names_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_members = {
  "barista_dock_charger_station__msg",  // message namespace
  "FleetDockStatus",  // message name
  2,  // number of fields
  sizeof(barista_dock_charger_station__msg__FleetDockStatus),
  barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_member_array,  // message members
  barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_type_support_handle = {
  0,
  &barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, msg, FleetDockStatus)() {
  if (!barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_type_support_handle.typesupport_identifier) {
    barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &barista_dock_charger_station__msg__FleetDockStatus__rosidl_typesupport_introspection_c__FleetDockStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
