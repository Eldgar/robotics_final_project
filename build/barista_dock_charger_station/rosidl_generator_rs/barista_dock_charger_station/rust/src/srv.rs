

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockChargerStation_Request {
    pub dock_mode: bool,
}



impl Default for DockChargerStation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::DockChargerStation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DockChargerStation_Request {
  type RmwMsg = crate::srv::rmw::DockChargerStation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dock_mode: msg.dock_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      dock_mode: msg.dock_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dock_mode: msg.dock_mode,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockChargerStation_Response {
    pub success: bool,
    pub info: std::string::String,
}



impl Default for DockChargerStation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::DockChargerStation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DockChargerStation_Response {
  type RmwMsg = crate::srv::rmw::DockChargerStation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        info: msg.info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        info: msg.info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      info: msg.info.to_string(),
    }
  }
}






#[link(name = "barista_dock_charger_station__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__barista_dock_charger_station__srv__DockChargerStation() -> *const std::os::raw::c_void;
}

// Corresponds to barista_dock_charger_station__srv__DockChargerStation
pub struct DockChargerStation;

impl rosidl_runtime_rs::Service for DockChargerStation {
  type Request = crate::srv::DockChargerStation_Request;
  type Response = crate::srv::DockChargerStation_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__barista_dock_charger_station__srv__DockChargerStation() }
  }
}



pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "barista_dock_charger_station__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__srv__DockChargerStation_Request() -> *const std::os::raw::c_void;
}

#[link(name = "barista_dock_charger_station__rosidl_generator_c")]
extern "C" {
    fn barista_dock_charger_station__srv__DockChargerStation_Request__init(msg: *mut DockChargerStation_Request) -> bool;
    fn barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Request>, size: usize) -> bool;
    fn barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Request>);
    fn barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DockChargerStation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Request>) -> bool;
}

// Corresponds to barista_dock_charger_station__srv__DockChargerStation_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockChargerStation_Request {
    pub dock_mode: bool,
}



impl Default for DockChargerStation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !barista_dock_charger_station__srv__DockChargerStation_Request__init(&mut msg as *mut _) {
        panic!("Call to barista_dock_charger_station__srv__DockChargerStation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DockChargerStation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DockChargerStation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DockChargerStation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "barista_dock_charger_station/srv/DockChargerStation_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__srv__DockChargerStation_Request() }
  }
}


#[link(name = "barista_dock_charger_station__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__srv__DockChargerStation_Response() -> *const std::os::raw::c_void;
}

#[link(name = "barista_dock_charger_station__rosidl_generator_c")]
extern "C" {
    fn barista_dock_charger_station__srv__DockChargerStation_Response__init(msg: *mut DockChargerStation_Response) -> bool;
    fn barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Response>, size: usize) -> bool;
    fn barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Response>);
    fn barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DockChargerStation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DockChargerStation_Response>) -> bool;
}

// Corresponds to barista_dock_charger_station__srv__DockChargerStation_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockChargerStation_Response {
    pub success: bool,
    pub info: rosidl_runtime_rs::String,
}



impl Default for DockChargerStation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !barista_dock_charger_station__srv__DockChargerStation_Response__init(&mut msg as *mut _) {
        panic!("Call to barista_dock_charger_station__srv__DockChargerStation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DockChargerStation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DockChargerStation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DockChargerStation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "barista_dock_charger_station/srv/DockChargerStation_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__barista_dock_charger_station__srv__DockChargerStation_Response() }
  }
}






  #[link(name = "barista_dock_charger_station__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__barista_dock_charger_station__srv__DockChargerStation() -> *const std::os::raw::c_void;
  }

  // Corresponds to barista_dock_charger_station__srv__DockChargerStation
  pub struct DockChargerStation;

  impl rosidl_runtime_rs::Service for DockChargerStation {
    type Request = crate::srv::rmw::DockChargerStation_Request;
    type Response = crate::srv::rmw::DockChargerStation_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__barista_dock_charger_station__srv__DockChargerStation() }
    }
  }



}  // mod rmw
