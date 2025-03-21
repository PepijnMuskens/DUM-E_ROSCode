// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_stepper_motor_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Request __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStepperMotorPositions_Request_
{
  using Type = SetStepperMotorPositions_Request_<ContainerAllocator>;

  explicit SetStepperMotorPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_rotation = 0ll;
      this->rotation = 0ll;
      this->end_rotation = 0ll;
      this->end_angle = 0ll;
    }
  }

  explicit SetStepperMotorPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_rotation = 0ll;
      this->rotation = 0ll;
      this->end_rotation = 0ll;
      this->end_angle = 0ll;
    }
  }

  // field types and members
  using _base_rotation_type =
    int64_t;
  _base_rotation_type base_rotation;
  using _rotation_type =
    int64_t;
  _rotation_type rotation;
  using _end_rotation_type =
    int64_t;
  _end_rotation_type end_rotation;
  using _end_angle_type =
    int64_t;
  _end_angle_type end_angle;

  // setters for named parameter idiom
  Type & set__base_rotation(
    const int64_t & _arg)
  {
    this->base_rotation = _arg;
    return *this;
  }
  Type & set__rotation(
    const int64_t & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__end_rotation(
    const int64_t & _arg)
  {
    this->end_rotation = _arg;
    return *this;
  }
  Type & set__end_angle(
    const int64_t & _arg)
  {
    this->end_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Request
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Request
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStepperMotorPositions_Request_ & other) const
  {
    if (this->base_rotation != other.base_rotation) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->end_rotation != other.end_rotation) {
      return false;
    }
    if (this->end_angle != other.end_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStepperMotorPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStepperMotorPositions_Request_

// alias to use template instance with default allocator
using SetStepperMotorPositions_Request =
  arduino_interfaces::srv::SetStepperMotorPositions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces


#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Response __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStepperMotorPositions_Response_
{
  using Type = SetStepperMotorPositions_Response_<ContainerAllocator>;

  explicit SetStepperMotorPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_complete_ms = 0ll;
    }
  }

  explicit SetStepperMotorPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_complete_ms = 0ll;
    }
  }

  // field types and members
  using _time_to_complete_ms_type =
    int64_t;
  _time_to_complete_ms_type time_to_complete_ms;

  // setters for named parameter idiom
  Type & set__time_to_complete_ms(
    const int64_t & _arg)
  {
    this->time_to_complete_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Response
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Response
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStepperMotorPositions_Response_ & other) const
  {
    if (this->time_to_complete_ms != other.time_to_complete_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStepperMotorPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStepperMotorPositions_Response_

// alias to use template instance with default allocator
using SetStepperMotorPositions_Response =
  arduino_interfaces::srv::SetStepperMotorPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Event __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Event __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStepperMotorPositions_Event_
{
  using Type = SetStepperMotorPositions_Event_<ContainerAllocator>;

  explicit SetStepperMotorPositions_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetStepperMotorPositions_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetStepperMotorPositions_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetStepperMotorPositions_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Event
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetStepperMotorPositions_Event
    std::shared_ptr<arduino_interfaces::srv::SetStepperMotorPositions_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStepperMotorPositions_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStepperMotorPositions_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStepperMotorPositions_Event_

// alias to use template instance with default allocator
using SetStepperMotorPositions_Event =
  arduino_interfaces::srv::SetStepperMotorPositions_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces

namespace arduino_interfaces
{

namespace srv
{

struct SetStepperMotorPositions
{
  using Request = arduino_interfaces::srv::SetStepperMotorPositions_Request;
  using Response = arduino_interfaces::srv::SetStepperMotorPositions_Response;
  using Event = arduino_interfaces::srv::SetStepperMotorPositions_Event;
};

}  // namespace srv

}  // namespace arduino_interfaces

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_STEPPER_MOTOR_POSITIONS__STRUCT_HPP_
