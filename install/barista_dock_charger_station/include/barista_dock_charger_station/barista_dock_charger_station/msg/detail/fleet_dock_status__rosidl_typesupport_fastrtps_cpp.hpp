// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "barista_dock_charger_station/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_serialize(
  const barista_dock_charger_station::msg::FleetDockStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  barista_dock_charger_station::msg::FleetDockStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
get_serialized_size(
  const barista_dock_charger_station::msg::FleetDockStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
max_serialized_size_FleetDockStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace barista_dock_charger_station

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, barista_dock_charger_station, msg, FleetDockStatus)();

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
