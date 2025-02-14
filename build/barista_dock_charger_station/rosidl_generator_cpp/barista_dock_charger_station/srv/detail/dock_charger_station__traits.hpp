// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__TRAITS_HPP_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace barista_dock_charger_station
{

namespace srv
{

inline void to_flow_style_yaml(
  const DockChargerStation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: dock_mode
  {
    out << "dock_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockChargerStation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dock_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockChargerStation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace barista_dock_charger_station

namespace rosidl_generator_traits
{

[[deprecated("use barista_dock_charger_station::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const barista_dock_charger_station::srv::DockChargerStation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  barista_dock_charger_station::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use barista_dock_charger_station::srv::to_yaml() instead")]]
inline std::string to_yaml(const barista_dock_charger_station::srv::DockChargerStation_Request & msg)
{
  return barista_dock_charger_station::srv::to_yaml(msg);
}

template<>
inline const char * data_type<barista_dock_charger_station::srv::DockChargerStation_Request>()
{
  return "barista_dock_charger_station::srv::DockChargerStation_Request";
}

template<>
inline const char * name<barista_dock_charger_station::srv::DockChargerStation_Request>()
{
  return "barista_dock_charger_station/srv/DockChargerStation_Request";
}

template<>
struct has_fixed_size<barista_dock_charger_station::srv::DockChargerStation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<barista_dock_charger_station::srv::DockChargerStation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<barista_dock_charger_station::srv::DockChargerStation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace barista_dock_charger_station
{

namespace srv
{

inline void to_flow_style_yaml(
  const DockChargerStation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockChargerStation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockChargerStation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace barista_dock_charger_station

namespace rosidl_generator_traits
{

[[deprecated("use barista_dock_charger_station::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const barista_dock_charger_station::srv::DockChargerStation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  barista_dock_charger_station::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use barista_dock_charger_station::srv::to_yaml() instead")]]
inline std::string to_yaml(const barista_dock_charger_station::srv::DockChargerStation_Response & msg)
{
  return barista_dock_charger_station::srv::to_yaml(msg);
}

template<>
inline const char * data_type<barista_dock_charger_station::srv::DockChargerStation_Response>()
{
  return "barista_dock_charger_station::srv::DockChargerStation_Response";
}

template<>
inline const char * name<barista_dock_charger_station::srv::DockChargerStation_Response>()
{
  return "barista_dock_charger_station/srv/DockChargerStation_Response";
}

template<>
struct has_fixed_size<barista_dock_charger_station::srv::DockChargerStation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<barista_dock_charger_station::srv::DockChargerStation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<barista_dock_charger_station::srv::DockChargerStation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<barista_dock_charger_station::srv::DockChargerStation>()
{
  return "barista_dock_charger_station::srv::DockChargerStation";
}

template<>
inline const char * name<barista_dock_charger_station::srv::DockChargerStation>()
{
  return "barista_dock_charger_station/srv/DockChargerStation";
}

template<>
struct has_fixed_size<barista_dock_charger_station::srv::DockChargerStation>
  : std::integral_constant<
    bool,
    has_fixed_size<barista_dock_charger_station::srv::DockChargerStation_Request>::value &&
    has_fixed_size<barista_dock_charger_station::srv::DockChargerStation_Response>::value
  >
{
};

template<>
struct has_bounded_size<barista_dock_charger_station::srv::DockChargerStation>
  : std::integral_constant<
    bool,
    has_bounded_size<barista_dock_charger_station::srv::DockChargerStation_Request>::value &&
    has_bounded_size<barista_dock_charger_station::srv::DockChargerStation_Response>::value
  >
{
};

template<>
struct is_service<barista_dock_charger_station::srv::DockChargerStation>
  : std::true_type
{
};

template<>
struct is_service_request<barista_dock_charger_station::srv::DockChargerStation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<barista_dock_charger_station::srv::DockChargerStation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__TRAITS_HPP_
