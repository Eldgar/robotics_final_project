// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__BUILDER_HPP_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "barista_dock_charger_station/srv/detail/dock_charger_station__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace barista_dock_charger_station
{

namespace srv
{

namespace builder
{

class Init_DockChargerStation_Request_dock_mode
{
public:
  Init_DockChargerStation_Request_dock_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::barista_dock_charger_station::srv::DockChargerStation_Request dock_mode(::barista_dock_charger_station::srv::DockChargerStation_Request::_dock_mode_type arg)
  {
    msg_.dock_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_dock_charger_station::srv::DockChargerStation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_dock_charger_station::srv::DockChargerStation_Request>()
{
  return barista_dock_charger_station::srv::builder::Init_DockChargerStation_Request_dock_mode();
}

}  // namespace barista_dock_charger_station


namespace barista_dock_charger_station
{

namespace srv
{

namespace builder
{

class Init_DockChargerStation_Response_info
{
public:
  explicit Init_DockChargerStation_Response_info(::barista_dock_charger_station::srv::DockChargerStation_Response & msg)
  : msg_(msg)
  {}
  ::barista_dock_charger_station::srv::DockChargerStation_Response info(::barista_dock_charger_station::srv::DockChargerStation_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_dock_charger_station::srv::DockChargerStation_Response msg_;
};

class Init_DockChargerStation_Response_success
{
public:
  Init_DockChargerStation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockChargerStation_Response_info success(::barista_dock_charger_station::srv::DockChargerStation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DockChargerStation_Response_info(msg_);
  }

private:
  ::barista_dock_charger_station::srv::DockChargerStation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_dock_charger_station::srv::DockChargerStation_Response>()
{
  return barista_dock_charger_station::srv::builder::Init_DockChargerStation_Response_success();
}

}  // namespace barista_dock_charger_station

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__BUILDER_HPP_
