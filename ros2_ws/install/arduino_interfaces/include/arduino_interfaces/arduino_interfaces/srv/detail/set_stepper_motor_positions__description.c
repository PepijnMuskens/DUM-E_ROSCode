// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arduino_interfaces
const rosidl_type_hash_t *
arduino_interfaces__srv__SetStepperMotorPositions__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x8b, 0xd7, 0xb2, 0x85, 0x9e, 0x2d, 0x49,
      0xa3, 0xff, 0xd9, 0xa4, 0xce, 0x4c, 0x7d, 0xc8,
      0xf7, 0x89, 0xb0, 0x0f, 0x80, 0x6f, 0xb2, 0xe1,
      0xdd, 0x34, 0xbe, 0xd7, 0x83, 0x3d, 0x4a, 0xd3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduino_interfaces
const rosidl_type_hash_t *
arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x4d, 0xf3, 0x68, 0xd3, 0x07, 0x9b, 0x19,
      0xc6, 0x2c, 0x31, 0xc3, 0x01, 0x44, 0xb9, 0x65,
      0xed, 0x42, 0x9f, 0x3f, 0x8a, 0xd5, 0x68, 0x28,
      0x53, 0x08, 0x48, 0x7e, 0xf6, 0x5b, 0xbd, 0x4a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduino_interfaces
const rosidl_type_hash_t *
arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x5d, 0xa3, 0x37, 0x2d, 0x66, 0x38, 0xb0,
      0xe4, 0x7a, 0x7c, 0xae, 0x5a, 0xb6, 0x01, 0x71,
      0x3b, 0x59, 0x00, 0x42, 0x3b, 0xde, 0x90, 0xae,
      0x33, 0xd4, 0x46, 0x90, 0x10, 0x47, 0xfa, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduino_interfaces
const rosidl_type_hash_t *
arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0xc2, 0x81, 0x45, 0x9d, 0x88, 0xeb, 0xde,
      0xcb, 0x6e, 0xa8, 0x5c, 0xa8, 0xc2, 0xa5, 0xb5,
      0x7b, 0xeb, 0x35, 0x6b, 0x45, 0x4d, 0x94, 0xd0,
      0x00, 0x0c, 0x3b, 0x71, 0x45, 0x7e, 0x96, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char arduino_interfaces__srv__SetStepperMotorPositions__TYPE_NAME[] = "arduino_interfaces/srv/SetStepperMotorPositions";
static char arduino_interfaces__srv__SetStepperMotorPositions_Event__TYPE_NAME[] = "arduino_interfaces/srv/SetStepperMotorPositions_Event";
static char arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME[] = "arduino_interfaces/srv/SetStepperMotorPositions_Request";
static char arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME[] = "arduino_interfaces/srv/SetStepperMotorPositions_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__request_message[] = "request_message";
static char arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__response_message[] = "response_message";
static char arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arduino_interfaces__srv__SetStepperMotorPositions__FIELDS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduino_interfaces__srv__SetStepperMotorPositions_Event__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduino_interfaces__srv__SetStepperMotorPositions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduino_interfaces__srv__SetStepperMotorPositions__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduino_interfaces__srv__SetStepperMotorPositions__TYPE_NAME, 47, 47},
      {arduino_interfaces__srv__SetStepperMotorPositions__FIELDS, 3, 3},
    },
    {arduino_interfaces__srv__SetStepperMotorPositions__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__base_rotation[] = "base_rotation";
static char arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__rotation[] = "rotation";
static char arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__end_rotation[] = "end_rotation";
static char arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__end_angle[] = "end_angle";

static rosidl_runtime_c__type_description__Field arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELDS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__base_rotation, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__rotation, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__end_rotation, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELD_NAME__end_angle, 9, 9},
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
arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
      {arduino_interfaces__srv__SetStepperMotorPositions_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduino_interfaces__srv__SetStepperMotorPositions_Response__FIELD_NAME__time_to_complete_ms[] = "time_to_complete_ms";

static rosidl_runtime_c__type_description__Field arduino_interfaces__srv__SetStepperMotorPositions_Response__FIELDS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Response__FIELD_NAME__time_to_complete_ms, 19, 19},
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
arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
      {arduino_interfaces__srv__SetStepperMotorPositions_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__info[] = "info";
static char arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__request[] = "request";
static char arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELDS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduino_interfaces__srv__SetStepperMotorPositions_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduino_interfaces__srv__SetStepperMotorPositions_Event__TYPE_NAME, 53, 53},
      {arduino_interfaces__srv__SetStepperMotorPositions_Event__FIELDS, 3, 3},
    },
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 base_rotation\n"
  "int64 rotation\n"
  "int64 end_rotation\n"
  "int64 end_angle\n"
  "---\n"
  "int64 time_to_complete_ms";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arduino_interfaces__srv__SetStepperMotorPositions__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduino_interfaces__srv__SetStepperMotorPositions__TYPE_NAME, 47, 47},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduino_interfaces__srv__SetStepperMotorPositions_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduino_interfaces__srv__SetStepperMotorPositions_Request__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduino_interfaces__srv__SetStepperMotorPositions_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduino_interfaces__srv__SetStepperMotorPositions_Response__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduino_interfaces__srv__SetStepperMotorPositions_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduino_interfaces__srv__SetStepperMotorPositions_Event__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduino_interfaces__srv__SetStepperMotorPositions__get_individual_type_description_source(NULL),
    sources[1] = *arduino_interfaces__srv__SetStepperMotorPositions_Event__get_individual_type_description_source(NULL);
    sources[2] = *arduino_interfaces__srv__SetStepperMotorPositions_Request__get_individual_type_description_source(NULL);
    sources[3] = *arduino_interfaces__srv__SetStepperMotorPositions_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduino_interfaces__srv__SetStepperMotorPositions_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduino_interfaces__srv__SetStepperMotorPositions_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduino_interfaces__srv__SetStepperMotorPositions_Event__get_individual_type_description_source(NULL),
    sources[1] = *arduino_interfaces__srv__SetStepperMotorPositions_Request__get_individual_type_description_source(NULL);
    sources[2] = *arduino_interfaces__srv__SetStepperMotorPositions_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
