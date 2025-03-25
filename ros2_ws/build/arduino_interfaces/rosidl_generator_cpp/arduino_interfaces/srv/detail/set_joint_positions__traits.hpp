// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_joint_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__TRAITS_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arduino_interfaces/srv/detail/set_joint_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arduino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointPositions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint0
  {
    out << "joint0: ";
    rosidl_generator_traits::value_to_yaml(msg.joint0, out);
    out << ", ";
  }

  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: joint5
  {
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint0: ";
    rosidl_generator_traits::value_to_yaml(msg.joint0, out);
    out << "\n";
  }

  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << "\n";
  }

  // member: joint5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointPositions_Request & msg, bool use_flow_style = false)
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
  const arduino_interfaces::srv::SetJointPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetJointPositions_Request & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetJointPositions_Request>()
{
  return "arduino_interfaces::srv::SetJointPositions_Request";
}

template<>
inline const char * name<arduino_interfaces::srv::SetJointPositions_Request>()
{
  return "arduino_interfaces/srv/SetJointPositions_Request";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetJointPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetJointPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_interfaces::srv::SetJointPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointPositions_Response & msg,
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
  const SetJointPositions_Response & msg,
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

inline std::string to_yaml(const SetJointPositions_Response & msg, bool use_flow_style = false)
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
  const arduino_interfaces::srv::SetJointPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetJointPositions_Response & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetJointPositions_Response>()
{
  return "arduino_interfaces::srv::SetJointPositions_Response";
}

template<>
inline const char * name<arduino_interfaces::srv::SetJointPositions_Response>()
{
  return "arduino_interfaces/srv/SetJointPositions_Response";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetJointPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetJointPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_interfaces::srv::SetJointPositions_Response>
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
  const SetJointPositions_Event & msg,
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
  const SetJointPositions_Event & msg,
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

inline std::string to_yaml(const SetJointPositions_Event & msg, bool use_flow_style = false)
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
  const arduino_interfaces::srv::SetJointPositions_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduino_interfaces::srv::SetJointPositions_Event & msg)
{
  return arduino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_interfaces::srv::SetJointPositions_Event>()
{
  return "arduino_interfaces::srv::SetJointPositions_Event";
}

template<>
inline const char * name<arduino_interfaces::srv::SetJointPositions_Event>()
{
  return "arduino_interfaces/srv/SetJointPositions_Event";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetJointPositions_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetJointPositions_Event>
  : std::integral_constant<bool, has_bounded_size<arduino_interfaces::srv::SetJointPositions_Request>::value && has_bounded_size<arduino_interfaces::srv::SetJointPositions_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arduino_interfaces::srv::SetJointPositions_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduino_interfaces::srv::SetJointPositions>()
{
  return "arduino_interfaces::srv::SetJointPositions";
}

template<>
inline const char * name<arduino_interfaces::srv::SetJointPositions>()
{
  return "arduino_interfaces/srv/SetJointPositions";
}

template<>
struct has_fixed_size<arduino_interfaces::srv::SetJointPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<arduino_interfaces::srv::SetJointPositions_Request>::value &&
    has_fixed_size<arduino_interfaces::srv::SetJointPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduino_interfaces::srv::SetJointPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<arduino_interfaces::srv::SetJointPositions_Request>::value &&
    has_bounded_size<arduino_interfaces::srv::SetJointPositions_Response>::value
  >
{
};

template<>
struct is_service<arduino_interfaces::srv::SetJointPositions>
  : std::true_type
{
};

template<>
struct is_service_request<arduino_interfaces::srv::SetJointPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduino_interfaces::srv::SetJointPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__TRAITS_HPP_
