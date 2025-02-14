// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "barista_dock_charger_station/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace barista_dock_charger_station
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_serialize(
  const barista_dock_charger_station::srv::DockChargerStation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  barista_dock_charger_station::srv::DockChargerStation_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
get_serialized_size(
  const barista_dock_charger_station::srv::DockChargerStation_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
max_serialized_size_DockChargerStation_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace barista_dock_charger_station

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, barista_dock_charger_station, srv, DockChargerStation_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "barista_dock_charger_station/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace barista_dock_charger_station
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_serialize(
  const barista_dock_charger_station::srv::DockChargerStation_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  barista_dock_charger_station::srv::DockChargerStation_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
get_serialized_size(
  const barista_dock_charger_station::srv::DockChargerStation_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
max_serialized_size_DockChargerStation_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace barista_dock_charger_station

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, barista_dock_charger_station, srv, DockChargerStation_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "barista_dock_charger_station/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, barista_dock_charger_station, srv, DockChargerStation)();

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
