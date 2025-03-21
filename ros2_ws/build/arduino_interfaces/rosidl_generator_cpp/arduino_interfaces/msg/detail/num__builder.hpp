// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/msg/num.hpp"


#ifndef ARDUINO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define ARDUINO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_interfaces::msg::Num num(::arduino_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_interfaces::msg::Num>()
{
  return arduino_interfaces::msg::builder::Init_Num_num();
}

}  // namespace arduino_interfaces

#endif  // ARDUINO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
