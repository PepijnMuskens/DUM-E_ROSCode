// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_stepper_motor_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__TRAITS_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arduino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStepperMotorPositions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_rotation
  {
    out << "base_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.base_rotation, out);
    out << ", ";
  }

  // member: rotation
  {
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << ", ";
  }

  // member: end_rotation
  {
    out << "end_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.end_rotation, out);
    out << ", ";
  }

  // member: end_angle
  {
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStepperMotorPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.base_rotation, out);
    out << "\n";
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << "\n";
  }

  // member: end_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.end_rotation, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStepperMotorPositions_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arduino_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_interfaces::srv::SetStepperMotorPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetStepperMotorPositions_Request & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetStepperMotorPositions_Request>()
{
  return "arduino_interfaces::srv::SetStepperMotorPositions_Request";
}

template<>
inline const char * name<arduino_interfaces::srv::SetStepperMotorPositions_Request>()
{
  return "arduino_interfaces/srv/SetStepperMotorPositions_Request";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_interfaces::srv::SetStepperMotorPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStepperMotorPositions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_to_complete_ms
  {
    out << "time_to_complete_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_complete_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStepperMotorPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_to_complete_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_complete_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_complete_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStepperMotorPositions_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arduino_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_interfaces::srv::SetStepperMotorPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetStepperMotorPositions_Response & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetStepperMotorPositions_Response>()
{
  return "arduino_interfaces::srv::SetStepperMotorPositions_Response";
}

template<>
inline const char * name<arduino_interfaces::srv::SetStepperMotorPositions_Response>()
{
  return "arduino_interfaces/srv/SetStepperMotorPositions_Response";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_interfaces::srv::SetStepperMotorPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace arduino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStepperMotorPositions_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStepperMotorPositions_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStepperMotorPositions_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arduino_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_interfaces::srv::SetStepperMotorPositions_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetStepperMotorPositions_Event & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetStepperMotorPositions_Event>()
{
  return "arduino_interfaces::srv::SetStepperMotorPositions_Event";
}

template<>
inline const char * name<arduino_interfaces::srv::SetStepperMotorPositions_Event>()
{
  return "arduino_interfaces/srv/SetStepperMotorPositions_Event";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Event>
  : std::integral_constant<bool, has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Request>::value && has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arduino_interfaces::srv::SetStepperMotorPositions_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduino_interfaces::srv::SetStepperMotorPositions>()
{
  return "arduino_interfaces::srv::SetStepperMotorPositions";
}

template<>
inline const char * name<arduino_interfaces::srv::SetStepperMotorPositions>()
{
  return "arduino_interfaces/srv/SetStepperMotorPositions";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions_Request>::value &&
    has_fixed_size<arduino_interfaces::srv::SetStepperMotorPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Request>::value &&
    has_bounded_size<arduino_interfaces::srv::SetStepperMotorPositions_Response>::value
  >
{
};

template<>
struct is_service<arduino_interfaces::srv::SetStepperMotorPositions>
  : std::true_type
{
};

template<>
struct is_service_request<arduino_interfaces::srv::SetStepperMotorPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduino_interfaces::srv::SetStepperMotorPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__TRAITS_HPP_
