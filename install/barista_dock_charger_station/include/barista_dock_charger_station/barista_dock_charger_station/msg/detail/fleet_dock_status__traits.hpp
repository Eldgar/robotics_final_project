// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__TRAITS_HPP_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace barista_dock_charger_station
{

namespace msg
{

inline void to_flow_style_yaml(
  const FleetDockStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_dock_status_array
  {
    if (msg.fleet_dock_status_array.size() == 0) {
      out << "fleet_dock_status_array: []";
    } else {
      out << "fleet_dock_status_array: [";
      size_t pending_items = msg.fleet_dock_status_array.size();
      for (auto item : msg.fleet_dock_status_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fleet_names_array
  {
    if (msg.fleet_names_array.size() == 0) {
      out << "fleet_names_array: []";
    } else {
      out << "fleet_names_array: [";
      size_t pending_items = msg.fleet_names_array.size();
      for (auto item : msg.fleet_names_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetDockStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fleet_dock_status_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fleet_dock_status_array.size() == 0) {
      out << "fleet_dock_status_array: []\n";
    } else {
      out << "fleet_dock_status_array:\n";
      for (auto item : msg.fleet_dock_status_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fleet_names_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fleet_names_array.size() == 0) {
      out << "fleet_names_array: []\n";
    } else {
      out << "fleet_names_array:\n";
      for (auto item : msg.fleet_names_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetDockStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace barista_dock_charger_station

namespace rosidl_generator_traits
{

[[deprecated("use barista_dock_charger_station::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const barista_dock_charger_station::msg::FleetDockStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  barista_dock_charger_station::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use barista_dock_charger_station::msg::to_yaml() instead")]]
inline std::string to_yaml(const barista_dock_charger_station::msg::FleetDockStatus & msg)
{
  return barista_dock_charger_station::msg::to_yaml(msg);
}

template<>
inline const char * data_type<barista_dock_charger_station::msg::FleetDockStatus>()
{
  return "barista_dock_charger_station::msg::FleetDockStatus";
}

template<>
inline const char * name<barista_dock_charger_station::msg::FleetDockStatus>()
{
  return "barista_dock_charger_station/msg/FleetDockStatus";
}

template<>
struct has_fixed_size<barista_dock_charger_station::msg::FleetDockStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<barista_dock_charger_station::msg::FleetDockStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<barista_dock_charger_station::msg::FleetDockStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__TRAITS_HPP_
