// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__rosidl_typesupport_introspection_c.h"
#include "arduino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arduino_interfaces__srv__SetStepperMotorPositions_Request__init(message_memory);
}

void arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_fini_function(void * message_memory)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_member_array[4] = {
  {
    "base_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Request, base_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Request, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Request, end_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Request, end_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_members = {
  "arduino_interfaces__srv",  // message namespace
  "SetStepperMotorPositions_Request",  // message name
  4,  // number of fields
  sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Request),
  false,  // has_any_key_member_
  arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_member_array,  // message members
  arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle = {
  0,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_members,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arduino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Request)() {
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle.typesupport_identifier) {
    arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arduino_interfaces__srv__SetStepperMotorPositions_Response__init(message_memory);
}

void arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_fini_function(void * message_memory)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_member_array[1] = {
  {
    "time_to_complete_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Response, time_to_complete_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_members = {
  "arduino_interfaces__srv",  // message namespace
  "SetStepperMotorPositions_Response",  // message name
  1,  // number of fields
  sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Response),
  false,  // has_any_key_member_
  arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_member_array,  // message members
  arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle = {
  0,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_members,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arduino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Response)() {
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle.typesupport_identifier) {
    arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "arduino_interfaces/srv/set_stepper_motor_positions.h"
// Member `request`
// Member `response`
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arduino_interfaces__srv__SetStepperMotorPositions_Event__init(message_memory);
}

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_fini_function(void * message_memory)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Event__fini(message_memory);
}

size_t arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__size_function__SetStepperMotorPositions_Event__request(
  const void * untyped_member)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * member =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__request(
  const void * untyped_member, size_t index)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * member =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__request(
  void * untyped_member, size_t index)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * member =
    (arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__fetch_function__SetStepperMotorPositions_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Request * item =
    ((const arduino_interfaces__srv__SetStepperMotorPositions_Request *)
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__request(untyped_member, index));
  arduino_interfaces__srv__SetStepperMotorPositions_Request * value =
    (arduino_interfaces__srv__SetStepperMotorPositions_Request *)(untyped_value);
  *value = *item;
}

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__assign_function__SetStepperMotorPositions_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Request * item =
    ((arduino_interfaces__srv__SetStepperMotorPositions_Request *)
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__request(untyped_member, index));
  const arduino_interfaces__srv__SetStepperMotorPositions_Request * value =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Request *)(untyped_value);
  *item = *value;
}

bool arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__resize_function__SetStepperMotorPositions_Event__request(
  void * untyped_member, size_t size)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence * member =
    (arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence *)(untyped_member);
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__fini(member);
  return arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence__init(member, size);
}

size_t arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__size_function__SetStepperMotorPositions_Event__response(
  const void * untyped_member)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * member =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__response(
  const void * untyped_member, size_t index)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * member =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__response(
  void * untyped_member, size_t index)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * member =
    (arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__fetch_function__SetStepperMotorPositions_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arduino_interfaces__srv__SetStepperMotorPositions_Response * item =
    ((const arduino_interfaces__srv__SetStepperMotorPositions_Response *)
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__response(untyped_member, index));
  arduino_interfaces__srv__SetStepperMotorPositions_Response * value =
    (arduino_interfaces__srv__SetStepperMotorPositions_Response *)(untyped_value);
  *value = *item;
}

void arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__assign_function__SetStepperMotorPositions_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Response * item =
    ((arduino_interfaces__srv__SetStepperMotorPositions_Response *)
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__response(untyped_member, index));
  const arduino_interfaces__srv__SetStepperMotorPositions_Response * value =
    (const arduino_interfaces__srv__SetStepperMotorPositions_Response *)(untyped_value);
  *item = *value;
}

bool arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__resize_function__SetStepperMotorPositions_Event__response(
  void * untyped_member, size_t size)
{
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence * member =
    (arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence *)(untyped_member);
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__fini(member);
  return arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Event, request),  // bytes offset in struct
    NULL,  // default value
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__size_function__SetStepperMotorPositions_Event__request,  // size() function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__request,  // get_const(index) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__request,  // get(index) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__fetch_function__SetStepperMotorPositions_Event__request,  // fetch(index, &value) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__assign_function__SetStepperMotorPositions_Event__request,  // assign(index, value) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__resize_function__SetStepperMotorPositions_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arduino_interfaces__srv__SetStepperMotorPositions_Event, response),  // bytes offset in struct
    NULL,  // default value
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__size_function__SetStepperMotorPositions_Event__response,  // size() function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_const_function__SetStepperMotorPositions_Event__response,  // get_const(index) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__get_function__SetStepperMotorPositions_Event__response,  // get(index) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__fetch_function__SetStepperMotorPositions_Event__response,  // fetch(index, &value) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__assign_function__SetStepperMotorPositions_Event__response,  // assign(index, value) function pointer
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__resize_function__SetStepperMotorPositions_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_members = {
  "arduino_interfaces__srv",  // message namespace
  "SetStepperMotorPositions_Event",  // message name
  3,  // number of fields
  sizeof(arduino_interfaces__srv__SetStepperMotorPositions_Event),
  false,  // has_any_key_member_
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_member_array,  // message members
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_type_support_handle = {
  0,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_members,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arduino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Event)() {
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Request)();
  arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Response)();
  if (!arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_type_support_handle.typesupport_identifier) {
    arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_members = {
  "arduino_interfaces__srv",  // service namespace
  "SetStepperMotorPositions",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle,
  NULL,  // response message
  // arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle
  NULL  // event_message
  // arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle
};


static rosidl_service_type_support_t arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_type_support_handle = {
  0,
  &arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_members,
  get_service_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Request_message_type_support_handle,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Response_message_type_support_handle,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__rosidl_typesupport_introspection_c__SetStepperMotorPositions_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arduino_interfaces,
    srv,
    SetStepperMotorPositions
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arduino_interfaces,
    srv,
    SetStepperMotorPositions
  ),
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arduino_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions)(void) {
  if (!arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_type_support_handle.typesupport_identifier) {
    arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetStepperMotorPositions_Event)()->data;
  }

  return &arduino_interfaces__srv__detail__set_stepper_motor_positions__rosidl_typesupport_introspection_c__SetStepperMotorPositions_service_type_support_handle;
}
