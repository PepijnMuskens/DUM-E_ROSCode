// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_joint_positions.h"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetJointPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetJointPositions_Request
{
  int32_t joint0;
  int32_t joint1;
  int32_t joint2;
  int32_t joint3;
  int32_t joint4;
  int32_t joint5;
} arduino_interfaces__srv__SetJointPositions_Request;

// Struct for a sequence of arduino_interfaces__srv__SetJointPositions_Request.
typedef struct arduino_interfaces__srv__SetJointPositions_Request__Sequence
{
  arduino_interfaces__srv__SetJointPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetJointPositions_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetJointPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetJointPositions_Response
{
  int32_t time_to_complete_ms;
} arduino_interfaces__srv__SetJointPositions_Response;

// Struct for a sequence of arduino_interfaces__srv__SetJointPositions_Response.
typedef struct arduino_interfaces__srv__SetJointPositions_Response__Sequence
{
  arduino_interfaces__srv__SetJointPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetJointPositions_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arduino_interfaces__srv__SetJointPositions_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arduino_interfaces__srv__SetJointPositions_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetJointPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetJointPositions_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arduino_interfaces__srv__SetJointPositions_Request__Sequence request;
  arduino_interfaces__srv__SetJointPositions_Response__Sequence response;
} arduino_interfaces__srv__SetJointPositions_Event;

// Struct for a sequence of arduino_interfaces__srv__SetJointPositions_Event.
typedef struct arduino_interfaces__srv__SetJointPositions_Event__Sequence
{
  arduino_interfaces__srv__SetJointPositions_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetJointPositions_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_
