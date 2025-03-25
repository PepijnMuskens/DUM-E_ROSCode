// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_joint_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_interfaces/srv/detail/set_joint_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJointPositions_Request_joint5
{
public:
  explicit Init_SetJointPositions_Request_joint5(::arduino_interfaces::srv::SetJointPositions_Request & msg)
  : msg_(msg)
  {}
  ::arduino_interfaces::srv::SetJointPositions_Request joint5(::arduino_interfaces::srv::SetJointPositions_Request::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

class Init_SetJointPositions_Request_joint4
{
public:
  explicit Init_SetJointPositions_Request_joint4(::arduino_interfaces::srv::SetJointPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_Request_joint5 joint4(::arduino_interfaces::srv::SetJointPositions_Request::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_SetJointPositions_Request_joint5(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

class Init_SetJointPositions_Request_joint3
{
public:
  explicit Init_SetJointPositions_Request_joint3(::arduino_interfaces::srv::SetJointPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_Request_joint4 joint3(::arduino_interfaces::srv::SetJointPositions_Request::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_SetJointPositions_Request_joint4(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

class Init_SetJointPositions_Request_joint2
{
public:
  explicit Init_SetJointPositions_Request_joint2(::arduino_interfaces::srv::SetJointPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_Request_joint3 joint2(::arduino_interfaces::srv::SetJointPositions_Request::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_SetJointPositions_Request_joint3(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

class Init_SetJointPositions_Request_joint1
{
public:
  explicit Init_SetJointPositions_Request_joint1(::arduino_interfaces::srv::SetJointPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_Request_joint2 joint1(::arduino_interfaces::srv::SetJointPositions_Request::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_SetJointPositions_Request_joint2(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

class Init_SetJointPositions_Request_joint0
{
public:
  Init_SetJointPositions_Request_joint0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_Request_joint1 joint0(::arduino_interfaces::srv::SetJointPositions_Request::_joint0_type arg)
  {
    msg_.joint0 = std::move(arg);
    return Init_SetJointPositions_Request_joint1(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetJointPositions_Request>()
{
  return arduino_interfaces::srv::builder::Init_SetJointPositions_Request_joint0();
}

}  // namespace arduino_interfaces


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJointPositions_Response_time_to_complete_ms
{
public:
  Init_SetJointPositions_Response_time_to_complete_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_interfaces::srv::SetJointPositions_Response time_to_complete_ms(::arduino_interfaces::srv::SetJointPositions_Response::_time_to_complete_ms_type arg)
  {
    msg_.time_to_complete_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetJointPositions_Response>()
{
  return arduino_interfaces::srv::builder::Init_SetJointPositions_Response_time_to_complete_ms();
}

}  // namespace arduino_interfaces


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJointPositions_Event_response
{
public:
  explicit Init_SetJointPositions_Event_response(::arduino_interfaces::srv::SetJointPositions_Event & msg)
  : msg_(msg)
  {}
  ::arduino_interfaces::srv::SetJointPositions_Event response(::arduino_interfaces::srv::SetJointPositions_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Event msg_;
};

class Init_SetJointPositions_Event_request
{
public:
  explicit Init_SetJointPositions_Event_request(::arduino_interfaces::srv::SetJointPositions_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_Event_response request(::arduino_interfaces::srv::SetJointPositions_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointPositions_Event_response(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Event msg_;
};

class Init_SetJointPositions_Event_info
{
public:
  Init_SetJointPositions_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_Event_request info(::arduino_interfaces::srv::SetJointPositions_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointPositions_Event_request(msg_);
  }

private:
  ::arduino_interfaces::srv::SetJointPositions_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetJointPositions_Event>()
{
  return arduino_interfaces::srv::builder::Init_SetJointPositions_Event_info();
}

}  // namespace arduino_interfaces

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_
