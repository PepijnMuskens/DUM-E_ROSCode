// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
#include "arduino_interfaces/srv/detail/set_joint_positions__type_support.h"
#include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPositions_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPositions_Request_type_support_ids_t;

static const _SetJointPositions_Request_type_support_ids_t _SetJointPositions_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPositions_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPositions_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPositions_Request_type_support_symbol_names_t _SetJointPositions_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetJointPositions_Request)),
  }
};

typedef struct _SetJointPositions_Request_type_support_data_t
{
  void * data[2];
} _SetJointPositions_Request_type_support_data_t;

static _SetJointPositions_Request_type_support_data_t _SetJointPositions_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPositions_Request_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetJointPositions_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPositions_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPositions_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPositions_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPositions_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arduino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arduino_interfaces, srv, SetJointPositions_Request)() {
  return &::arduino_interfaces::srv::rosidl_typesupport_c::SetJointPositions_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__type_support.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPositions_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPositions_Response_type_support_ids_t;

static const _SetJointPositions_Response_type_support_ids_t _SetJointPositions_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPositions_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPositions_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPositions_Response_type_support_symbol_names_t _SetJointPositions_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetJointPositions_Response)),
  }
};

typedef struct _SetJointPositions_Response_type_support_data_t
{
  void * data[2];
} _SetJointPositions_Response_type_support_data_t;

static _SetJointPositions_Response_type_support_data_t _SetJointPositions_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPositions_Response_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetJointPositions_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPositions_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPositions_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPositions_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPositions_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arduino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arduino_interfaces, srv, SetJointPositions_Response)() {
  return &::arduino_interfaces::srv::rosidl_typesupport_c::SetJointPositions_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__type_support.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPositions_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPositions_Event_type_support_ids_t;

static const _SetJointPositions_Event_type_support_ids_t _SetJointPositions_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPositions_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPositions_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPositions_Event_type_support_symbol_names_t _SetJointPositions_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetJointPositions_Event)),
  }
};

typedef struct _SetJointPositions_Event_type_support_data_t
{
  void * data[2];
} _SetJointPositions_Event_type_support_data_t;

static _SetJointPositions_Event_type_support_data_t _SetJointPositions_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPositions_Event_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetJointPositions_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPositions_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPositions_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPositions_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPositions_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arduino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arduino_interfaces, srv, SetJointPositions_Event)() {
  return &::arduino_interfaces::srv::rosidl_typesupport_c::SetJointPositions_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetJointPositions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPositions_type_support_ids_t;

static const _SetJointPositions_type_support_ids_t _SetJointPositions_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPositions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPositions_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPositions_type_support_symbol_names_t _SetJointPositions_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arduino_interfaces, srv, SetJointPositions)),
  }
};

typedef struct _SetJointPositions_type_support_data_t
{
  void * data[2];
} _SetJointPositions_type_support_data_t;

static _SetJointPositions_type_support_data_t _SetJointPositions_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPositions_service_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetJointPositions_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointPositions_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointPositions_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointPositions_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPositions_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetJointPositions_Request_message_type_support_handle,
  &SetJointPositions_Response_message_type_support_handle,
  &SetJointPositions_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arduino_interfaces,
    srv,
    SetJointPositions
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arduino_interfaces,
    srv,
    SetJointPositions
  ),
  &arduino_interfaces__srv__SetJointPositions__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions__get_type_description,
  &arduino_interfaces__srv__SetJointPositions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arduino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arduino_interfaces, srv, SetJointPositions)() {
  return &::arduino_interfaces::srv::rosidl_typesupport_c::SetJointPositions_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
