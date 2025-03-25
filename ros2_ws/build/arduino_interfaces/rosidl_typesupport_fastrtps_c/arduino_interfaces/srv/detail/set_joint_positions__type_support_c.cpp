// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice
#include "arduino_interfaces/srv/detail/set_joint_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arduino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
#include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetJointPositions_Request__ros_msg_type = arduino_interfaces__srv__SetJointPositions_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_arduino_interfaces__srv__SetJointPositions_Request(
  const arduino_interfaces__srv__SetJointPositions_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint0
  {
    cdr << ros_message->joint0;
  }

  // Field name: joint1
  {
    cdr << ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr << ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr << ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr << ros_message->joint4;
  }

  // Field name: joint5
  {
    cdr << ros_message->joint5;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Request(
  eprosima::fastcdr::Cdr & cdr,
  arduino_interfaces__srv__SetJointPositions_Request * ros_message)
{
  // Field name: joint0
  {
    cdr >> ros_message->joint0;
  }

  // Field name: joint1
  {
    cdr >> ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr >> ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr >> ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr >> ros_message->joint4;
  }

  // Field name: joint5
  {
    cdr >> ros_message->joint5;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Request__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint0
  {
    size_t item_size = sizeof(ros_message->joint0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint1
  {
    size_t item_size = sizeof(ros_message->joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint2
  {
    size_t item_size = sizeof(ros_message->joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint3
  {
    size_t item_size = sizeof(ros_message->joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint4
  {
    size_t item_size = sizeof(ros_message->joint4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint5
  {
    size_t item_size = sizeof(ros_message->joint5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: joint0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Request;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Request(
  const arduino_interfaces__srv__SetJointPositions_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint0
  {
    cdr << ros_message->joint0;
  }

  // Field name: joint1
  {
    cdr << ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr << ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr << ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr << ros_message->joint4;
  }

  // Field name: joint5
  {
    cdr << ros_message->joint5;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Request__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint0
  {
    size_t item_size = sizeof(ros_message->joint0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint1
  {
    size_t item_size = sizeof(ros_message->joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint2
  {
    size_t item_size = sizeof(ros_message->joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint3
  {
    size_t item_size = sizeof(ros_message->joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint4
  {
    size_t item_size = sizeof(ros_message->joint4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint5
  {
    size_t item_size = sizeof(ros_message->joint5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: joint0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: joint5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Request;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetJointPositions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arduino_interfaces__srv__SetJointPositions_Request * ros_message = static_cast<const arduino_interfaces__srv__SetJointPositions_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arduino_interfaces__srv__SetJointPositions_Request(ros_message, cdr);
}

static bool _SetJointPositions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arduino_interfaces__srv__SetJointPositions_Request * ros_message = static_cast<arduino_interfaces__srv__SetJointPositions_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Request(cdr, ros_message);
}

static uint32_t _SetJointPositions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
      untyped_ros_message, 0));
}

static size_t _SetJointPositions_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetJointPositions_Request = {
  "arduino_interfaces::srv",
  "SetJointPositions_Request",
  _SetJointPositions_Request__cdr_serialize,
  _SetJointPositions_Request__cdr_deserialize,
  _SetJointPositions_Request__get_serialized_size,
  _SetJointPositions_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetJointPositions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetJointPositions_Request,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Request)() {
  return &_SetJointPositions_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetJointPositions_Response__ros_msg_type = arduino_interfaces__srv__SetJointPositions_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_arduino_interfaces__srv__SetJointPositions_Response(
  const arduino_interfaces__srv__SetJointPositions_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: time_to_complete_ms
  {
    cdr << ros_message->time_to_complete_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Response(
  eprosima::fastcdr::Cdr & cdr,
  arduino_interfaces__srv__SetJointPositions_Response * ros_message)
{
  // Field name: time_to_complete_ms
  {
    cdr >> ros_message->time_to_complete_ms;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Response__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: time_to_complete_ms
  {
    size_t item_size = sizeof(ros_message->time_to_complete_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: time_to_complete_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Response;
    is_plain =
      (
      offsetof(DataType, time_to_complete_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Response(
  const arduino_interfaces__srv__SetJointPositions_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: time_to_complete_ms
  {
    cdr << ros_message->time_to_complete_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Response__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: time_to_complete_ms
  {
    size_t item_size = sizeof(ros_message->time_to_complete_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: time_to_complete_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Response;
    is_plain =
      (
      offsetof(DataType, time_to_complete_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetJointPositions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arduino_interfaces__srv__SetJointPositions_Response * ros_message = static_cast<const arduino_interfaces__srv__SetJointPositions_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arduino_interfaces__srv__SetJointPositions_Response(ros_message, cdr);
}

static bool _SetJointPositions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arduino_interfaces__srv__SetJointPositions_Response * ros_message = static_cast<arduino_interfaces__srv__SetJointPositions_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Response(cdr, ros_message);
}

static uint32_t _SetJointPositions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
      untyped_ros_message, 0));
}

static size_t _SetJointPositions_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetJointPositions_Response = {
  "arduino_interfaces::srv",
  "SetJointPositions_Response",
  _SetJointPositions_Response__cdr_serialize,
  _SetJointPositions_Response__cdr_deserialize,
  _SetJointPositions_Response__get_serialized_size,
  _SetJointPositions_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetJointPositions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetJointPositions_Response,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Response)() {
  return &_SetJointPositions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__struct.h"
// already included above
// #include "arduino_interfaces/srv/detail/set_joint_positions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_arduino_interfaces__srv__SetJointPositions_Request(
  const arduino_interfaces__srv__SetJointPositions_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Request(
  eprosima::fastcdr::Cdr & cdr,
  arduino_interfaces__srv__SetJointPositions_Request * ros_message);

size_t get_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Request(
  const arduino_interfaces__srv__SetJointPositions_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Request)();

bool cdr_serialize_arduino_interfaces__srv__SetJointPositions_Response(
  const arduino_interfaces__srv__SetJointPositions_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Response(
  eprosima::fastcdr::Cdr & cdr,
  arduino_interfaces__srv__SetJointPositions_Response * ros_message);

size_t get_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Response(
  const arduino_interfaces__srv__SetJointPositions_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arduino_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SetJointPositions_Event__ros_msg_type = arduino_interfaces__srv__SetJointPositions_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_arduino_interfaces__srv__SetJointPositions_Event(
  const arduino_interfaces__srv__SetJointPositions_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_arduino_interfaces__srv__SetJointPositions_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_arduino_interfaces__srv__SetJointPositions_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Event(
  eprosima::fastcdr::Cdr & cdr,
  arduino_interfaces__srv__SetJointPositions_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      arduino_interfaces__srv__SetJointPositions_Request__Sequence__fini(&ros_message->request);
    }
    if (!arduino_interfaces__srv__SetJointPositions_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      arduino_interfaces__srv__SetJointPositions_Response__Sequence__fini(&ros_message->response);
    }
    if (!arduino_interfaces__srv__SetJointPositions_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_arduino_interfaces__srv__SetJointPositions_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Event__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_arduino_interfaces__srv__SetJointPositions_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_arduino_interfaces__srv__SetJointPositions_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_arduino_interfaces__srv__SetJointPositions_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
bool cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Event(
  const arduino_interfaces__srv__SetJointPositions_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_arduino_interfaces__srv__SetJointPositions_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetJointPositions_Event__ros_msg_type * ros_message = static_cast<const _SetJointPositions_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arduino_interfaces
size_t max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_arduino_interfaces__srv__SetJointPositions_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arduino_interfaces__srv__SetJointPositions_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetJointPositions_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arduino_interfaces__srv__SetJointPositions_Event * ros_message = static_cast<const arduino_interfaces__srv__SetJointPositions_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arduino_interfaces__srv__SetJointPositions_Event(ros_message, cdr);
}

static bool _SetJointPositions_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arduino_interfaces__srv__SetJointPositions_Event * ros_message = static_cast<arduino_interfaces__srv__SetJointPositions_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arduino_interfaces__srv__SetJointPositions_Event(cdr, ros_message);
}

static uint32_t _SetJointPositions_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arduino_interfaces__srv__SetJointPositions_Event(
      untyped_ros_message, 0));
}

static size_t _SetJointPositions_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arduino_interfaces__srv__SetJointPositions_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetJointPositions_Event = {
  "arduino_interfaces::srv",
  "SetJointPositions_Event",
  _SetJointPositions_Event__cdr_serialize,
  _SetJointPositions_Event__cdr_deserialize,
  _SetJointPositions_Event__get_serialized_size,
  _SetJointPositions_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetJointPositions_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetJointPositions_Event,
  get_message_typesupport_handle_function,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_hash,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_description,
  &arduino_interfaces__srv__SetJointPositions_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Event)() {
  return &_SetJointPositions_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "arduino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arduino_interfaces/srv/set_joint_positions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetJointPositions__callbacks = {
  "arduino_interfaces::srv",
  "SetJointPositions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions_Response)(),
};

static rosidl_service_type_support_t SetJointPositions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetJointPositions__callbacks,
  get_service_typesupport_handle_function,
  &_SetJointPositions_Request__type_support,
  &_SetJointPositions_Response__type_support,
  &_SetJointPositions_Event__type_support,
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

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arduino_interfaces, srv, SetJointPositions)() {
  return &SetJointPositions__handle;
}

#if defined(__cplusplus)
}
#endif
