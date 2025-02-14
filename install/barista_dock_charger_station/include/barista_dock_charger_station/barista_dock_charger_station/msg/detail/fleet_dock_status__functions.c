// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from barista_dock_charger_station:msg/FleetDockStatus.idl
// generated code does not contain a copyright notice
#include "barista_dock_charger_station/msg/detail/fleet_dock_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_dock_status_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fleet_names_array`
#include "rosidl_runtime_c/string_functions.h"

bool
barista_dock_charger_station__msg__FleetDockStatus__init(barista_dock_charger_station__msg__FleetDockStatus * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_dock_status_array
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->fleet_dock_status_array, 0)) {
    barista_dock_charger_station__msg__FleetDockStatus__fini(msg);
    return false;
  }
  // fleet_names_array
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fleet_names_array, 0)) {
    barista_dock_charger_station__msg__FleetDockStatus__fini(msg);
    return false;
  }
  return true;
}

void
barista_dock_charger_station__msg__FleetDockStatus__fini(barista_dock_charger_station__msg__FleetDockStatus * msg)
{
  if (!msg) {
    return;
  }
  // fleet_dock_status_array
  rosidl_runtime_c__boolean__Sequence__fini(&msg->fleet_dock_status_array);
  // fleet_names_array
  rosidl_runtime_c__String__Sequence__fini(&msg->fleet_names_array);
}

bool
barista_dock_charger_station__msg__FleetDockStatus__are_equal(const barista_dock_charger_station__msg__FleetDockStatus * lhs, const barista_dock_charger_station__msg__FleetDockStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fleet_dock_status_array
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->fleet_dock_status_array), &(rhs->fleet_dock_status_array)))
  {
    return false;
  }
  // fleet_names_array
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fleet_names_array), &(rhs->fleet_names_array)))
  {
    return false;
  }
  return true;
}

bool
barista_dock_charger_station__msg__FleetDockStatus__copy(
  const barista_dock_charger_station__msg__FleetDockStatus * input,
  barista_dock_charger_station__msg__FleetDockStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // fleet_dock_status_array
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->fleet_dock_status_array), &(output->fleet_dock_status_array)))
  {
    return false;
  }
  // fleet_names_array
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fleet_names_array), &(output->fleet_names_array)))
  {
    return false;
  }
  return true;
}

barista_dock_charger_station__msg__FleetDockStatus *
barista_dock_charger_station__msg__FleetDockStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__msg__FleetDockStatus * msg = (barista_dock_charger_station__msg__FleetDockStatus *)allocator.allocate(sizeof(barista_dock_charger_station__msg__FleetDockStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(barista_dock_charger_station__msg__FleetDockStatus));
  bool success = barista_dock_charger_station__msg__FleetDockStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
barista_dock_charger_station__msg__FleetDockStatus__destroy(barista_dock_charger_station__msg__FleetDockStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    barista_dock_charger_station__msg__FleetDockStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
barista_dock_charger_station__msg__FleetDockStatus__Sequence__init(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__msg__FleetDockStatus * data = NULL;

  if (size) {
    data = (barista_dock_charger_station__msg__FleetDockStatus *)allocator.zero_allocate(size, sizeof(barista_dock_charger_station__msg__FleetDockStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = barista_dock_charger_station__msg__FleetDockStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        barista_dock_charger_station__msg__FleetDockStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      barista_dock_charger_station__msg__FleetDockStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

barista_dock_charger_station__msg__FleetDockStatus__Sequence *
barista_dock_charger_station__msg__FleetDockStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__msg__FleetDockStatus__Sequence * array = (barista_dock_charger_station__msg__FleetDockStatus__Sequence *)allocator.allocate(sizeof(barista_dock_charger_station__msg__FleetDockStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = barista_dock_charger_station__msg__FleetDockStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
barista_dock_charger_station__msg__FleetDockStatus__Sequence__destroy(barista_dock_charger_station__msg__FleetDockStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    barista_dock_charger_station__msg__FleetDockStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
barista_dock_charger_station__msg__FleetDockStatus__Sequence__are_equal(const barista_dock_charger_station__msg__FleetDockStatus__Sequence * lhs, const barista_dock_charger_station__msg__FleetDockStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!barista_dock_charger_station__msg__FleetDockStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
barista_dock_charger_station__msg__FleetDockStatus__Sequence__copy(
  const barista_dock_charger_station__msg__FleetDockStatus__Sequence * input,
  barista_dock_charger_station__msg__FleetDockStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(barista_dock_charger_station__msg__FleetDockStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    barista_dock_charger_station__msg__FleetDockStatus * data =
      (barista_dock_charger_station__msg__FleetDockStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!barista_dock_charger_station__msg__FleetDockStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          barista_dock_charger_station__msg__FleetDockStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!barista_dock_charger_station__msg__FleetDockStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
