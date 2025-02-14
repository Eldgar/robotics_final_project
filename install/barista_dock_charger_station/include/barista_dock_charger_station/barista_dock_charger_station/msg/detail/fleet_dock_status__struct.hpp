// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_HPP_
#define BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__barista_dock_charger_station__msg__FleetDockStatus __attribute__((deprecated))
#else
# define DEPRECATED__barista_dock_charger_station__msg__FleetDockStatus __declspec(deprecated)
#endif

namespace barista_dock_charger_station
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FleetDockStatus_
{
  using Type = FleetDockStatus_<ContainerAllocator>;

  explicit FleetDockStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FleetDockStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fleet_dock_status_array_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _fleet_dock_status_array_type fleet_dock_status_array;
  using _fleet_names_array_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fleet_names_array_type fleet_names_array;

  // setters for named parameter idiom
  Type & set__fleet_dock_status_array(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->fleet_dock_status_array = _arg;
    return *this;
  }
  Type & set__fleet_names_array(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fleet_names_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__barista_dock_charger_station__msg__FleetDockStatus
    std::shared_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__barista_dock_charger_station__msg__FleetDockStatus
    std::shared_ptr<barista_dock_charger_station::msg::FleetDockStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetDockStatus_ & other) const
  {
    if (this->fleet_dock_status_array != other.fleet_dock_status_array) {
      return false;
    }
    if (this->fleet_names_array != other.fleet_names_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetDockStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetDockStatus_

// alias to use template instance with default allocator
using FleetDockStatus =
  barista_dock_charger_station::msg::FleetDockStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace barista_dock_charger_station

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__DETAIL__FLEET_DOCK_STATUS__STRUCT_HPP_
