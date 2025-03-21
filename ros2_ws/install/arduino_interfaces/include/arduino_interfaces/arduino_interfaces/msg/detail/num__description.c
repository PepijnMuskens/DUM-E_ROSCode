// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arduino_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "arduino_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arduino_interfaces
const rosidl_type_hash_t *
arduino_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x61, 0x7b, 0xf8, 0xd8, 0x0b, 0x80, 0x4d,
      0xf7, 0xad, 0x6f, 0x0a, 0x9d, 0x1d, 0x82, 0xd2,
      0x34, 0x34, 0x83, 0x00, 0x0d, 0x2b, 0x70, 0x4e,
      0xf4, 0x43, 0x2c, 0xe2, 0xd0, 0x31, 0x54, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arduino_interfaces__msg__Num__TYPE_NAME[] = "arduino_interfaces/msg/Num";

// Define type names, field names, and default values
static char arduino_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field arduino_interfaces__msg__Num__FIELDS[] = {
  {
    {arduino_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduino_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduino_interfaces__msg__Num__TYPE_NAME, 26, 26},
      {arduino_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arduino_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduino_interfaces__msg__Num__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduino_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduino_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
