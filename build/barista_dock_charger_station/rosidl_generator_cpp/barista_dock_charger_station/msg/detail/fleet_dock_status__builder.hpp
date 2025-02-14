// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__BUILDER_HPP_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "barista_dock_charger_station/msg/detail/fleet_dock_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace barista_dock_charger_station
{

namespace msg
{

namespace builder
{

class Init_FleetDockStatus_fleet_names_array
{
public:
  explicit Init_FleetDockStatus_fleet_names_array(::barista_dock_charger_station::msg::FleetDockStatus & msg)
  : msg_(msg)
  {}
  ::barista_dock_charger_station::msg::FleetDockStatus fleet_names_array(::barista_dock_charger_station::msg::FleetDockStatus::_fleet_names_array_type arg)
  {
    msg_.fleet_names_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_dock_charger_station::msg::FleetDockStatus msg_;
};

class Init_FleetDockStatus_fleet_dock_status_array
{
public:
  Init_FleetDockStatus_fleet_dock_status_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetDockStatus_fleet_names_array fleet_dock_status_array(::barista_dock_charger_station::msg::FleetDockStatus::_fleet_dock_status_array_type arg)
  {
    msg_.fleet_dock_status_array = std::move(arg);
    return Init_FleetDockStatus_fleet_names_array(msg_);
  }

private:
  ::barista_dock_charger_station::msg::FleetDockStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_dock_charger_station::msg::FleetDockStatus>()
{
  return barista_dock_charger_station::msg::builder::Init_FleetDockStatus_fleet_dock_status_array();
}

}  // namespace barista_dock_charger_station

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__BUILDER_HPP_
