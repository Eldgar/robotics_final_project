// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_HPP_
#define BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Request __attribute__((deprecated))
#else
# define DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Request __declspec(deprecated)
#endif

namespace barista_dock_charger_station
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DockChargerStation_Request_
{
  using Type = DockChargerStation_Request_<ContainerAllocator>;

  explicit DockChargerStation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_mode = false;
    }
  }

  explicit DockChargerStation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_mode = false;
    }
  }

  // field types and members
  using _dock_mode_type =
    bool;
  _dock_mode_type dock_mode;

  // setters for named parameter idiom
  Type & set__dock_mode(
    const bool & _arg)
  {
    this->dock_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Request
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Request
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockChargerStation_Request_ & other) const
  {
    if (this->dock_mode != other.dock_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockChargerStation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockChargerStation_Request_

// alias to use template instance with default allocator
using DockChargerStation_Request =
  barista_dock_charger_station::srv::DockChargerStation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace barista_dock_charger_station


#ifndef _WIN32
# define DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Response __attribute__((deprecated))
#else
# define DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Response __declspec(deprecated)
#endif

namespace barista_dock_charger_station
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DockChargerStation_Response_
{
  using Type = DockChargerStation_Response_<ContainerAllocator>;

  explicit DockChargerStation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->info = "";
    }
  }

  explicit DockChargerStation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->info = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Response
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__barista_dock_charger_station__srv__DockChargerStation_Response
    std::shared_ptr<barista_dock_charger_station::srv::DockChargerStation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockChargerStation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockChargerStation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockChargerStation_Response_

// alias to use template instance with default allocator
using DockChargerStation_Response =
  barista_dock_charger_station::srv::DockChargerStation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace barista_dock_charger_station

namespace barista_dock_charger_station
{

namespace srv
{

struct DockChargerStation
{
  using Request = barista_dock_charger_station::srv::DockChargerStation_Request;
  using Response = barista_dock_charger_station::srv::DockChargerStation_Response;
};

}  // namespace srv

}  // namespace barista_dock_charger_station

#endif  // BARISTA_DOCK_CHARGER_STATION__SRV__DETAIL__DOCK_CHARGER_STATION__STRUCT_HPP_
