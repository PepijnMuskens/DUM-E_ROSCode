// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_stepper_motor_positions.h"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_H_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetStepperMotorPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Request
{
  int64_t base_rotation;
  int64_t rotation;
  int64_t end_rotation;
  int64_t end_angle;
} arduino_interfaces__srv__SetStepperMotorPositions_Request;

// Struct for a sequence of arduino_interfaces__srv__SetStepperMotorPositions_Request.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence
{
  arduino_interfaces__srv__SetStepperMotorPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetStepperMotorPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Response
{
  int64_t time_to_complete_ms;
} arduino_interfaces__srv__SetStepperMotorPositions_Response;

// Struct for a sequence of arduino_interfaces__srv__SetStepperMotorPositions_Response.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence
{
  arduino_interfaces__srv__SetStepperMotorPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arduino_interfaces__srv__SetStepperMotorPositions_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arduino_interfaces__srv__SetStepperMotorPositions_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetStepperMotorPositions in the package arduino_interfaces.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arduino_interfaces__srv__SetStepperMotorPositions_Request__Sequence request;
  arduino_interfaces__srv__SetStepperMotorPositions_Response__Sequence response;
} arduino_interfaces__srv__SetStepperMotorPositions_Event;

// Struct for a sequence of arduino_interfaces__srv__SetStepperMotorPositions_Event.
typedef struct arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence
{
  arduino_interfaces__srv__SetStepperMotorPositions_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__srv__SetStepperMotorPositions_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_H_
