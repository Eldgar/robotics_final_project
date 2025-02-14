// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from barista_dock_charger_station:srv/DockChargerStation.idl
// generated code does not contain a copyright notice
#include "barista_dock_charger_station/srv/detail/dock_charger_station__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
barista_dock_charger_station__srv__DockChargerStation_Request__init(barista_dock_charger_station__srv__DockChargerStation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // dock_mode
  return true;
}

void
barista_dock_charger_station__srv__DockChargerStation_Request__fini(barista_dock_charger_station__srv__DockChargerStation_Request * msg)
{
  if (!msg) {
    return;
  }
  // dock_mode
}

bool
barista_dock_charger_station__srv__DockChargerStation_Request__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Request * lhs, const barista_dock_charger_station__srv__DockChargerStation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dock_mode
  if (lhs->dock_mode != rhs->dock_mode) {
    return false;
  }
  return true;
}

bool
barista_dock_charger_station__srv__DockChargerStation_Request__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Request * input,
  barista_dock_charger_station__srv__DockChargerStation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // dock_mode
  output->dock_mode = input->dock_mode;
  return true;
}

barista_dock_charger_station__srv__DockChargerStation_Request *
barista_dock_charger_station__srv__DockChargerStation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Request * msg = (barista_dock_charger_station__srv__DockChargerStation_Request *)allocator.allocate(sizeof(barista_dock_charger_station__srv__DockChargerStation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(barista_dock_charger_station__srv__DockChargerStation_Request));
  bool success = barista_dock_charger_station__srv__DockChargerStation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
barista_dock_charger_station__srv__DockChargerStation_Request__destroy(barista_dock_charger_station__srv__DockChargerStation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    barista_dock_charger_station__srv__DockChargerStation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Request * data = NULL;

  if (size) {
    data = (barista_dock_charger_station__srv__DockChargerStation_Request *)allocator.zero_allocate(size, sizeof(barista_dock_charger_station__srv__DockChargerStation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = barista_dock_charger_station__srv__DockChargerStation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        barista_dock_charger_station__srv__DockChargerStation_Request__fini(&data[i - 1]);
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
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array)
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
      barista_dock_charger_station__srv__DockChargerStation_Request__fini(&array->data[i]);
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

barista_dock_charger_station__srv__DockChargerStation_Request__Sequence *
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array = (barista_dock_charger_station__srv__DockChargerStation_Request__Sequence *)allocator.allocate(sizeof(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__destroy(barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * lhs, const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!barista_dock_charger_station__srv__DockChargerStation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
barista_dock_charger_station__srv__DockChargerStation_Request__Sequence__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * input,
  barista_dock_charger_station__srv__DockChargerStation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(barista_dock_charger_station__srv__DockChargerStation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    barista_dock_charger_station__srv__DockChargerStation_Request * data =
      (barista_dock_charger_station__srv__DockChargerStation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!barista_dock_charger_station__srv__DockChargerStation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          barista_dock_charger_station__srv__DockChargerStation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!barista_dock_charger_station__srv__DockChargerStation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
barista_dock_charger_station__srv__DockChargerStation_Response__init(barista_dock_charger_station__srv__DockChargerStation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    barista_dock_charger_station__srv__DockChargerStation_Response__fini(msg);
    return false;
  }
  return true;
}

void
barista_dock_charger_station__srv__DockChargerStation_Response__fini(barista_dock_charger_station__srv__DockChargerStation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
barista_dock_charger_station__srv__DockChargerStation_Response__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Response * lhs, const barista_dock_charger_station__srv__DockChargerStation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
barista_dock_charger_station__srv__DockChargerStation_Response__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Response * input,
  barista_dock_charger_station__srv__DockChargerStation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

barista_dock_charger_station__srv__DockChargerStation_Response *
barista_dock_charger_station__srv__DockChargerStation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Response * msg = (barista_dock_charger_station__srv__DockChargerStation_Response *)allocator.allocate(sizeof(barista_dock_charger_station__srv__DockChargerStation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(barista_dock_charger_station__srv__DockChargerStation_Response));
  bool success = barista_dock_charger_station__srv__DockChargerStation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
barista_dock_charger_station__srv__DockChargerStation_Response__destroy(barista_dock_charger_station__srv__DockChargerStation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    barista_dock_charger_station__srv__DockChargerStation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Response * data = NULL;

  if (size) {
    data = (barista_dock_charger_station__srv__DockChargerStation_Response *)allocator.zero_allocate(size, sizeof(barista_dock_charger_station__srv__DockChargerStation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = barista_dock_charger_station__srv__DockChargerStation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        barista_dock_charger_station__srv__DockChargerStation_Response__fini(&data[i - 1]);
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
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array)
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
      barista_dock_charger_station__srv__DockChargerStation_Response__fini(&array->data[i]);
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

barista_dock_charger_station__srv__DockChargerStation_Response__Sequence *
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array = (barista_dock_charger_station__srv__DockChargerStation_Response__Sequence *)allocator.allocate(sizeof(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__destroy(barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__are_equal(const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * lhs, const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!barista_dock_charger_station__srv__DockChargerStation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
barista_dock_charger_station__srv__DockChargerStation_Response__Sequence__copy(
  const barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * input,
  barista_dock_charger_station__srv__DockChargerStation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(barista_dock_charger_station__srv__DockChargerStation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    barista_dock_charger_station__srv__DockChargerStation_Response * data =
      (barista_dock_charger_station__srv__DockChargerStation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!barista_dock_charger_station__srv__DockChargerStation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          barista_dock_charger_station__srv__DockChargerStation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!barista_dock_charger_station__srv__DockChargerStation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
