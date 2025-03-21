// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_stepper_motor_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__BUILDER_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_interfaces/srv/detail/set_stepper_motor_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStepperMotorPositions_Request_end_angle
{
public:
  explicit Init_SetStepperMotorPositions_Request_end_angle(::arduino_interfaces::srv::SetStepperMotorPositions_Request & msg)
  : msg_(msg)
  {}
  ::arduino_interfaces::srv::SetStepperMotorPositions_Request end_angle(::arduino_interfaces::srv::SetStepperMotorPositions_Request::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Request msg_;
};

class Init_SetStepperMotorPositions_Request_end_rotation
{
public:
  explicit Init_SetStepperMotorPositions_Request_end_rotation(::arduino_interfaces::srv::SetStepperMotorPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetStepperMotorPositions_Request_end_angle end_rotation(::arduino_interfaces::srv::SetStepperMotorPositions_Request::_end_rotation_type arg)
  {
    msg_.end_rotation = std::move(arg);
    return Init_SetStepperMotorPositions_Request_end_angle(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Request msg_;
};

class Init_SetStepperMotorPositions_Request_rotation
{
public:
  explicit Init_SetStepperMotorPositions_Request_rotation(::arduino_interfaces::srv::SetStepperMotorPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetStepperMotorPositions_Request_end_rotation rotation(::arduino_interfaces::srv::SetStepperMotorPositions_Request::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_SetStepperMotorPositions_Request_end_rotation(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Request msg_;
};

class Init_SetStepperMotorPositions_Request_base_rotation
{
public:
  Init_SetStepperMotorPositions_Request_base_rotation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStepperMotorPositions_Request_rotation base_rotation(::arduino_interfaces::srv::SetStepperMotorPositions_Request::_base_rotation_type arg)
  {
    msg_.base_rotation = std::move(arg);
    return Init_SetStepperMotorPositions_Request_rotation(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetStepperMotorPositions_Request>()
{
  return arduino_interfaces::srv::builder::Init_SetStepperMotorPositions_Request_base_rotation();
}

}  // namespace arduino_interfaces


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStepperMotorPositions_Response_time_to_complete_ms
{
public:
  Init_SetStepperMotorPositions_Response_time_to_complete_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_interfaces::srv::SetStepperMotorPositions_Response time_to_complete_ms(::arduino_interfaces::srv::SetStepperMotorPositions_Response::_time_to_complete_ms_type arg)
  {
    msg_.time_to_complete_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetStepperMotorPositions_Response>()
{
  return arduino_interfaces::srv::builder::Init_SetStepperMotorPositions_Response_time_to_complete_ms();
}

}  // namespace arduino_interfaces


namespace arduino_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStepperMotorPositions_Event_response
{
public:
  explicit Init_SetStepperMotorPositions_Event_response(::arduino_interfaces::srv::SetStepperMotorPositions_Event & msg)
  : msg_(msg)
  {}
  ::arduino_interfaces::srv::SetStepperMotorPositions_Event response(::arduino_interfaces::srv::SetStepperMotorPositions_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Event msg_;
};

class Init_SetStepperMotorPositions_Event_request
{
public:
  explicit Init_SetStepperMotorPositions_Event_request(::arduino_interfaces::srv::SetStepperMotorPositions_Event & msg)
  : msg_(msg)
  {}
  Init_SetStepperMotorPositions_Event_response request(::arduino_interfaces::srv::SetStepperMotorPositions_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetStepperMotorPositions_Event_response(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Event msg_;
};

class Init_SetStepperMotorPositions_Event_info
{
public:
  Init_SetStepperMotorPositions_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStepperMotorPositions_Event_request info(::arduino_interfaces::srv::SetStepperMotorPositions_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetStepperMotorPositions_Event_request(msg_);
  }

private:
  ::arduino_interfaces::srv::SetStepperMotorPositions_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::srv::SetStepperMotorPositions_Event>()
{
  return arduino_interfaces::srv::builder::Init_SetStepperMotorPositions_Event_info();
}

}  // namespace arduino_interfaces

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__BUILDER_HPP_
