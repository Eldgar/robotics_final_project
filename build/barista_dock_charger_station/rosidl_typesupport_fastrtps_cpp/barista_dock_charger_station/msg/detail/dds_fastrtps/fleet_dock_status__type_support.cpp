// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fleet_dock_status_array
  {
    cdr << ros_message.fleet_dock_status_array;
  }
  // Member: fleet_names_array
  {
    cdr << ros_message.fleet_names_array;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  barista_dock_charger_station::msg::FleetDockStatus & ros_message)
{
  // Member: fleet_dock_status_array
  {
    cdr >> ros_message.fleet_dock_status_array;
  }

  // Member: fleet_names_array
  {
    cdr >> ros_message.fleet_names_array;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
get_serialized_size(
  const barista_dock_charger_station::msg::FleetDockStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fleet_dock_status_array
  {
    size_t array_size = ros_message.fleet_dock_status_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fleet_dock_status_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fleet_names_array
  {
    size_t array_size = ros_message.fleet_names_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.fleet_names_array[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_barista_dock_charger_station
max_serialized_size_FleetDockStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: fleet_dock_status_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fleet_names_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FleetDockStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const barista_dock_charger_station::msg::FleetDockStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FleetDockStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<barista_dock_charger_station::msg::FleetDockStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FleetDockStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const barista_dock_charger_station::msg::FleetDockStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FleetDockStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FleetDockStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FleetDockStatus__callbacks = {
  "barista_dock_charger_station::msg",
  "FleetDockStatus",
  _FleetDockStatus__cdr_serialize,
  _FleetDockStatus__cdr_deserialize,
  _FleetDockStatus__get_serialized_size,
  _FleetDockStatus__max_serialized_size
};

static rosidl_message_type_support_t _FleetDockStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FleetDockStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace barista_dock_charger_station

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_barista_dock_charger_station
const rosidl_message_type_support_t *
get_message_type_support_handle<barista_dock_charger_station::msg::FleetDockStatus>()
{
  return &barista_dock_charger_station::msg::typesupport_fastrtps_cpp::_FleetDockStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, barista_dock_charger_station, msg, FleetDockStatus)() {
  return &barista_dock_charger_station::msg::typesupport_fastrtps_cpp::_FleetDockStatus__handle;
}

#ifdef __cplusplus
}
#endif
