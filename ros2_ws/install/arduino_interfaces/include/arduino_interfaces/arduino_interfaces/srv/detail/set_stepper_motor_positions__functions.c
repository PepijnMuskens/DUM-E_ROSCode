// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__init(arduino_interfaces__srv__SetStepperMotorPositions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // base_rotation
  // rotation
  // end_rotation
  // end_angle
  return true;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(arduino_interfaces__srv__SetStepperMotorPositions_Request * msg)
{
  if (!msg) {
    return;
  }
  // base_rotation
  // rotation
  // end_rotation
  // end_angle
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Request * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_rotation
  if (lhs->base_rotation != rhs->base_rotation) {
    return false;
  }
  // rotation
  if (lhs->rotation != rhs->rotation) {
    return false;
  }
  // end_rotation
  if (lhs->end_rotation != rhs->end_rotation) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
    return false;
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Request * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // base_rotation
  output->base_rotation = input->base_rotation;
  // rotation
  output->rotation = input->rotation;
  // end_rotation
  output->end_rotation = input->end_rotation;
  // end_angle
  output->end_angle = input->end_angle;
  return true;
}

arduino_interfaces__srv__SetStepperMotorPositions_Request *
arduino_interfaces__srv__SetStepperMotorPositions_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Request * msg = (arduino_interfaces__srv__SetStepperMotorPositions_Request *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request));
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Request__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__init(arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Request * data = NULL;

  if (size) {
    data = (arduino_interfaces__srv__SetStepperMotorPositions_Request *)allocator.zero_allocate(size, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduino_interfaces__srv__SetStepperMotorPositions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(&data[i - 1]);
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
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__fini(arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * array)
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
      arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(&array->data[i]);
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

arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * array = (arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduino_interfaces__srv__SetStepperMotorPositions_Request * data =
      (arduino_interfaces__srv__SetStepperMotorPositions_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__init(arduino_interfaces__srv__SetStepperMotorPositions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // time_to_complete_ms
  return true;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(arduino_interfaces__srv__SetStepperMotorPositions_Response * msg)
{
  if (!msg) {
    return;
  }
  // time_to_complete_ms
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Response * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_to_complete_ms
  if (lhs->time_to_complete_ms != rhs->time_to_complete_ms) {
    return false;
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Response * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // time_to_complete_ms
  output->time_to_complete_ms = input->time_to_complete_ms;
  return true;
}

arduino_interfaces__srv__SetStepperMotorPositions_Response *
arduino_interfaces__srv__SetStepperMotorPositions_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Response * msg = (arduino_interfaces__srv__SetStepperMotorPositions_Response *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response));
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Response__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__init(arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Response * data = NULL;

  if (size) {
    data = (arduino_interfaces__srv__SetStepperMotorPositions_Response *)allocator.zero_allocate(size, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduino_interfaces__srv__SetStepperMotorPositions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(&data[i - 1]);
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
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__fini(arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * array)
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
      arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(&array->data[i]);
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

arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * array = (arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduino_interfaces__srv__SetStepperMotorPositions_Response * data =
      (arduino_interfaces__srv__SetStepperMotorPositions_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"

bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__init(arduino_interfaces__srv__SetStepperMotorPositions_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(msg);
    return false;
  }
  // request
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__init(&msg->request, 0)) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(msg);
    return false;
  }
  // response
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__init(&msg->response, 0)) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(msg);
    return false;
  }
  return true;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(arduino_interfaces__srv__SetStepperMotorPositions_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__fini(&msg->request);
  // response
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__fini(&msg->response);
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Event * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Event * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arduino_interfaces__srv__SetStepperMotorPositions_Event *
arduino_interfaces__srv__SetStepperMotorPositions_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Event * msg = (arduino_interfaces__srv__SetStepperMotorPositions_Event *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event));
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Event__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__init(arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Event * data = NULL;

  if (size) {
    data = (arduino_interfaces__srv__SetStepperMotorPositions_Event *)allocator.zero_allocate(size, sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduino_interfaces__srv__SetStepperMotorPositions_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(&data[i - 1]);
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
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__fini(arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * array)
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
      arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(&array->data[i]);
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

arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * array = (arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence *)allocator.allocate(sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__destroy(arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__are_equal(const arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * lhs, const arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence__copy(
  const arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * input,
  arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduino_interfaces__srv__SetStepperMotorPositions_Event * data =
      (arduino_interfaces__srv__SetStepperMotorPositions_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduino_interfaces__srv__SetStepperMotorPositions_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduino_interfaces__srv__SetStepperMotorPositions_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
