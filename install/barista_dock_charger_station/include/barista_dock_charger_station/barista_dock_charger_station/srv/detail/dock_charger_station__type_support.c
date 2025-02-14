// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "barista_dock_charger_station/srv/detail/dock_charger_station__rosidl_typesupport_introspection_c.h"
#include "barista_dock_charger_station/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "barista_dock_charger_station/srv/detail/dock_charger_station__functions.h"
#include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  barista_dock_charger_station__srv__DockChargerStation_Request__init(message_memory);
}

void barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_fini_function(void * message_memory)
{
  barista_dock_charger_station__srv__DockChargerStation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_member_array[1] = {
  {
    "dock_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station__srv__DockChargerStation_Request, dock_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_members = {
  "barista_dock_charger_station__srv",  // message namespace
  "DockChargerStation_Request",  // message name
  1,  // number of fields
  sizeof(barista_dock_charger_station__srv__DockChargerStation_Request),
  barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_member_array,  // message members
  barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_type_support_handle = {
  0,
  &barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Request)() {
  if (!barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_type_support_handle.typesupport_identifier) {
    barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &barista_dock_charger_station__srv__DockChargerStation_Request__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "barista_dock_charger_station/srv/detail/dock_charger_station__rosidl_typesupport_introspection_c.h"
// already included above
// #include "barista_dock_charger_station/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "barista_dock_charger_station/srv/detail/dock_charger_station__functions.h"
// already included above
// #include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.h"


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  barista_dock_charger_station__srv__DockChargerStation_Response__init(message_memory);
}

void barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_fini_function(void * message_memory)
{
  barista_dock_charger_station__srv__DockChargerStation_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station__srv__DockChargerStation_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station__srv__DockChargerStation_Response, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_members = {
  "barista_dock_charger_station__srv",  // message namespace
  "DockChargerStation_Response",  // message name
  2,  // number of fields
  sizeof(barista_dock_charger_station__srv__DockChargerStation_Response),
  barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_member_array,  // message members
  barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_type_support_handle = {
  0,
  &barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Response)() {
  if (!barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_type_support_handle.typesupport_identifier) {
    barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &barista_dock_charger_station__srv__DockChargerStation_Response__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "barista_dock_charger_station/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "barista_dock_charger_station/srv/detail/dock_charger_station__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_members = {
  "barista_dock_charger_station__srv",  // service namespace
  "DockChargerStation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_Request_message_type_support_handle,
  NULL  // response message
  // barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_Response_message_type_support_handle
};

static rosidl_service_type_support_t barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_type_support_handle = {
  0,
  &barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation)() {
  if (!barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_type_support_handle.typesupport_identifier) {
    barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, barista_dock_charger_station, srv, DockChargerStation_Response)()->data;
  }

  return &barista_dock_charger_station__srv__detail__dock_charger_station__rosidl_typesupport_introspection_c__DockChargerStation_service_type_support_handle;
}
