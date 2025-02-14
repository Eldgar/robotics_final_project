// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace barista_dock_charger_station
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetDockStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) barista_dock_charger_station::msg::FleetDockStatus(_init);
}

void FleetDockStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<barista_dock_charger_station::msg::FleetDockStatus *>(message_memory);
  typed_message->~FleetDockStatus();
}

size_t size_function__FleetDockStatus__fleet_dock_status_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__FleetDockStatus__fleet_dock_status_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__FleetDockStatus__fleet_dock_status_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__FleetDockStatus__fleet_dock_status_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FleetDockStatus__fleet_names_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FleetDockStatus__fleet_names_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FleetDockStatus__fleet_names_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FleetDockStatus__fleet_names_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FleetDockStatus__fleet_names_array(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FleetDockStatus__fleet_names_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FleetDockStatus__fleet_names_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FleetDockStatus__fleet_names_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetDockStatus_message_member_array[2] = {
  {
    "fleet_dock_status_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station::msg::FleetDockStatus, fleet_dock_status_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__FleetDockStatus__fleet_dock_status_array,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__FleetDockStatus__fleet_dock_status_array,  // fetch(index, &value) function pointer
    assign_function__FleetDockStatus__fleet_dock_status_array,  // assign(index, value) function pointer
    resize_function__FleetDockStatus__fleet_dock_status_array  // resize(index) function pointer
  },
  {
    "fleet_names_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(barista_dock_charger_station::msg::FleetDockStatus, fleet_names_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__FleetDockStatus__fleet_names_array,  // size() function pointer
    get_const_function__FleetDockStatus__fleet_names_array,  // get_const(index) function pointer
    get_function__FleetDockStatus__fleet_names_array,  // get(index) function pointer
    fetch_function__FleetDockStatus__fleet_names_array,  // fetch(index, &value) function pointer
    assign_function__FleetDockStatus__fleet_names_array,  // assign(index, value) function pointer
    resize_function__FleetDockStatus__fleet_names_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetDockStatus_message_members = {
  "barista_dock_charger_station::msg",  // message namespace
  "FleetDockStatus",  // message name
  2,  // number of fields
  sizeof(barista_dock_charger_station::msg::FleetDockStatus),
  FleetDockStatus_message_member_array,  // message members
  FleetDockStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetDockStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetDockStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetDockStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace barista_dock_charger_station


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<barista_dock_charger_station::msg::FleetDockStatus>()
{
  return &::barista_dock_charger_station::msg::rosidl_typesupport_introspection_cpp::FleetDockStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, barista_dock_charger_station, msg, FleetDockStatus)() {
  return &::barista_dock_charger_station::msg::rosidl_typesupport_introspection_cpp::FleetDockStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
