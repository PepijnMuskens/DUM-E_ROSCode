// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduino_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/msg/num.h"


#ifndef ARDUINO_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define ARDUINO_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package arduino_interfaces.
typedef struct arduino_interfaces__msg__Num
{
  int64_t num;
} arduino_interfaces__msg__Num;

// Struct for a sequence of arduino_interfaces__msg__Num.
typedef struct arduino_interfaces__msg__Num__Sequence
{
  arduino_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
