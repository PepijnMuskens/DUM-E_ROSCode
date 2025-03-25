// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arduino_interfaces:srv/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arduino_interfaces/srv/set_joint_positions.hpp"


#ifndef ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_HPP_
#define ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Request __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointPositions_Request_
{
  using Type = SetJointPositions_Request_<ContainerAllocator>;

  explicit SetJointPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint0 = 0l;
      this->joint1 = 0l;
      this->joint2 = 0l;
      this->joint3 = 0l;
      this->joint4 = 0l;
      this->joint5 = 0l;
    }
  }

  explicit SetJointPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint0 = 0l;
      this->joint1 = 0l;
      this->joint2 = 0l;
      this->joint3 = 0l;
      this->joint4 = 0l;
      this->joint5 = 0l;
    }
  }

  // field types and members
  using _joint0_type =
    int32_t;
  _joint0_type joint0;
  using _joint1_type =
    int32_t;
  _joint1_type joint1;
  using _joint2_type =
    int32_t;
  _joint2_type joint2;
  using _joint3_type =
    int32_t;
  _joint3_type joint3;
  using _joint4_type =
    int32_t;
  _joint4_type joint4;
  using _joint5_type =
    int32_t;
  _joint5_type joint5;

  // setters for named parameter idiom
  Type & set__joint0(
    const int32_t & _arg)
  {
    this->joint0 = _arg;
    return *this;
  }
  Type & set__joint1(
    const int32_t & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const int32_t & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const int32_t & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint4(
    const int32_t & _arg)
  {
    this->joint4 = _arg;
    return *this;
  }
  Type & set__joint5(
    const int32_t & _arg)
  {
    this->joint5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Request
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Request
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointPositions_Request_ & other) const
  {
    if (this->joint0 != other.joint0) {
      return false;
    }
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint4 != other.joint4) {
      return false;
    }
    if (this->joint5 != other.joint5) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointPositions_Request_

// alias to use template instance with default allocator
using SetJointPositions_Request =
  arduino_interfaces::srv::SetJointPositions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces


#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Response __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointPositions_Response_
{
  using Type = SetJointPositions_Response_<ContainerAllocator>;

  explicit SetJointPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_complete_ms = 0l;
    }
  }

  explicit SetJointPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_complete_ms = 0l;
    }
  }

  // field types and members
  using _time_to_complete_ms_type =
    int32_t;
  _time_to_complete_ms_type time_to_complete_ms;

  // setters for named parameter idiom
  Type & set__time_to_complete_ms(
    const int32_t & _arg)
  {
    this->time_to_complete_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Response
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Response
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointPositions_Response_ & other) const
  {
    if (this->time_to_complete_ms != other.time_to_complete_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointPositions_Response_

// alias to use template instance with default allocator
using SetJointPositions_Response =
  arduino_interfaces::srv::SetJointPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Event __attribute__((deprecated))
#else
# define DEPRECATED__arduino_interfaces__srv__SetJointPositions_Event __declspec(deprecated)
#endif

namespace arduino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointPositions_Event_
{
  using Type = SetJointPositions_Event_<ContainerAllocator>;

  explicit SetJointPositions_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetJointPositions_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetJointPositions_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arduino_interfaces::srv::SetJointPositions_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Event
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduino_interfaces__srv__SetJointPositions_Event
    std::shared_ptr<arduino_interfaces::srv::SetJointPositions_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointPositions_Event_ & other) const
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
  bool operator!=(const SetJointPositions_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointPositions_Event_

// alias to use template instance with default allocator
using SetJointPositions_Event =
  arduino_interfaces::srv::SetJointPositions_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduino_interfaces

namespace arduino_interfaces
{

namespace srv
{

struct SetJointPositions
{
  using Request = arduino_interfaces::srv::SetJointPositions_Request;
  using Response = arduino_interfaces::srv::SetJointPositions_Response;
  using Event = arduino_interfaces::srv::SetJointPositions_Event;
};

}  // namespace srv

}  // namespace arduino_interfaces

#endif  // ARDUINO_INTERFACES__SRV__DETAIL__SET_JOINT_POSITIONS__STRUCT_HPP_
