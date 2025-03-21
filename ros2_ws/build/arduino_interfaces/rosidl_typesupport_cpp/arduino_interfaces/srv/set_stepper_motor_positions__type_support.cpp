// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStepperMotorPositions_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStepperMotorPositions_Request_type_support_ids_t;

static const _SetStepperMotorPositions_Request_type_support_ids_t _SetStepperMotorPositions_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStepperMotorPositions_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStepperMotorPositions_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStepperMotorPositions_Request_type_support_symbol_names_t _SetStepperMotorPositions_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Request)),
  }
};

typedef struct _SetStepperMotorPositions_Request_type_support_data_t
{
  void * data[2];
} _SetStepperMotorPositions_Request_type_support_data_t;

static _SetStepperMotorPositions_Request_type_support_data_t _SetStepperMotorPositions_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStepperMotorPositions_Request_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetStepperMotorPositions_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetStepperMotorPositions_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetStepperMotorPositions_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStepperMotorPositions_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStepperMotorPositions_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Request>()
{
  return &::arduino_interfaces::srv::rosidl_typesupport_cpp::SetStepperMotorPositions_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Request)() {
  return get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStepperMotorPositions_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStepperMotorPositions_Response_type_support_ids_t;

static const _SetStepperMotorPositions_Response_type_support_ids_t _SetStepperMotorPositions_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStepperMotorPositions_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStepperMotorPositions_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStepperMotorPositions_Response_type_support_symbol_names_t _SetStepperMotorPositions_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Response)),
  }
};

typedef struct _SetStepperMotorPositions_Response_type_support_data_t
{
  void * data[2];
} _SetStepperMotorPositions_Response_type_support_data_t;

static _SetStepperMotorPositions_Response_type_support_data_t _SetStepperMotorPositions_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStepperMotorPositions_Response_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetStepperMotorPositions_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetStepperMotorPositions_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetStepperMotorPositions_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStepperMotorPositions_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStepperMotorPositions_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Response>()
{
  return &::arduino_interfaces::srv::rosidl_typesupport_cpp::SetStepperMotorPositions_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Response)() {
  return get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__functions.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStepperMotorPositions_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStepperMotorPositions_Event_type_support_ids_t;

static const _SetStepperMotorPositions_Event_type_support_ids_t _SetStepperMotorPositions_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStepperMotorPositions_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStepperMotorPositions_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStepperMotorPositions_Event_type_support_symbol_names_t _SetStepperMotorPositions_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Event)),
  }
};

typedef struct _SetStepperMotorPositions_Event_type_support_data_t
{
  void * data[2];
} _SetStepperMotorPositions_Event_type_support_data_t;

static _SetStepperMotorPositions_Event_type_support_data_t _SetStepperMotorPositions_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStepperMotorPositions_Event_message_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetStepperMotorPositions_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetStepperMotorPositions_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetStepperMotorPositions_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStepperMotorPositions_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStepperMotorPositions_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Event>()
{
  return &::arduino_interfaces::srv::rosidl_typesupport_cpp::SetStepperMotorPositions_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arduino_interfaces, srv, SetStepperMotorPositions_Event)() {
  return get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arduino_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStepperMotorPositions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStepperMotorPositions_type_support_ids_t;

static const _SetStepperMotorPositions_type_support_ids_t _SetStepperMotorPositions_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStepperMotorPositions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStepperMotorPositions_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStepperMotorPositions_type_support_symbol_names_t _SetStepperMotorPositions_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arduino_interfaces, srv, SetStepperMotorPositions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arduino_interfaces, srv, SetStepperMotorPositions)),
  }
};

typedef struct _SetStepperMotorPositions_type_support_data_t
{
  void * data[2];
} _SetStepperMotorPositions_type_support_data_t;

static _SetStepperMotorPositions_type_support_data_t _SetStepperMotorPositions_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStepperMotorPositions_service_typesupport_map = {
  2,
  "arduino_interfaces",
  &_SetStepperMotorPositions_service_typesupport_ids.typesupport_identifier[0],
  &_SetStepperMotorPositions_service_typesupport_symbol_names.symbol_name[0],
  &_SetStepperMotorPositions_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetStepperMotorPositions_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStepperMotorPositions_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arduino_interfaces::srv::SetStepperMotorPositions>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arduino_interfaces::srv::SetStepperMotorPositions>,
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_hash,
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_description,
  &arduino_interfaces__srv__SetStepperMotorPositions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions>()
{
  return &::arduino_interfaces::srv::rosidl_typesupport_cpp::SetStepperMotorPositions_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, arduino_interfaces, srv, SetStepperMotorPositions)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<arduino_interfaces::srv::SetStepperMotorPositions>();
}

#ifdef __cplusplus
}
#endif
