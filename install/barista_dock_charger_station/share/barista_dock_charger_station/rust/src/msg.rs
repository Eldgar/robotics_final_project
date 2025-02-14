pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "barista_dock_charger_station__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__msg__FleetDockStatus() -> *const std::os::raw::c_void;
}

#[link(name = "barista_dock_charger_station__rosidl_generator_c")]
extern "C" {
    fn barista_dock_charger_station__msg__FleetDockStatus__init(msg: *mut FleetDockStatus) -> bool;
    fn barista_dock_charger_station__msg__FleetDockStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FleetDockStatus>, size: usize) -> bool;
    fn barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FleetDockStatus>);
    fn barista_dock_charger_station__msg__FleetDockStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FleetDockStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<FleetDockStatus>) -> bool;
}

// Corresponds to barista_dock_charger_station__msg__FleetDockStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetDockStatus {
    pub fleet_dock_status_array: rosidl_runtime_rs::Sequence<bool>,
    pub fleet_names_array: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,
}



impl Default for FleetDockStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !barista_dock_charger_station__msg__FleetDockStatus__init(&mut msg as *mut _) {
        panic!("Call to barista_dock_charger_station__msg__FleetDockStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FleetDockStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__msg__FleetDockStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__msg__FleetDockStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FleetDockStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FleetDockStatus where Self: Sized {
  const TYPE_NAME: &'static str = "barista_dock_charger_station/msg/FleetDockStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__msg__FleetDockStatus() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetDockStatus {
    pub fleet_dock_status_array: Vec<bool>,
    pub fleet_names_array: Vec<std::string::String>,
}



impl Default for FleetDockStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::FleetDockStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FleetDockStatus {
  type RmwMsg = crate::msg::rmw::FleetDockStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_dock_status_array: msg.fleet_dock_status_array.into(),
        fleet_names_array: msg.fleet_names_array
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_dock_status_array: msg.fleet_dock_status_array.as_slice().into(),
        fleet_names_array: msg.fleet_names_array
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_dock_status_array: msg.fleet_dock_status_array
          .into_iter()
          .collect(),
      fleet_names_array: msg.fleet_names_array
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


