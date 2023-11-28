// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serial_motor_demo_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serial_motor_demo_msgs__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__serial_motor_demo_msgs__msg__MotorCommand __declspec(deprecated)
#endif

namespace serial_motor_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mot_1 = 0l;
      this->mot_2 = 0l;
      this->mot_3 = 0l;
      this->mot_4 = 0l;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mot_1 = 0l;
      this->mot_2 = 0l;
      this->mot_3 = 0l;
      this->mot_4 = 0l;
    }
  }

  // field types and members
  using _mot_1_type =
    int32_t;
  _mot_1_type mot_1;
  using _mot_2_type =
    int32_t;
  _mot_2_type mot_2;
  using _mot_3_type =
    int32_t;
  _mot_3_type mot_3;
  using _mot_4_type =
    int32_t;
  _mot_4_type mot_4;

  // setters for named parameter idiom
  Type & set__mot_1(
    const int32_t & _arg)
  {
    this->mot_1 = _arg;
    return *this;
  }
  Type & set__mot_2(
    const int32_t & _arg)
  {
    this->mot_2 = _arg;
    return *this;
  }
  Type & set__mot_3(
    const int32_t & _arg)
  {
    this->mot_3 = _arg;
    return *this;
  }
  Type & set__mot_4(
    const int32_t & _arg)
  {
    this->mot_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serial_motor_demo_msgs__msg__MotorCommand
    std::shared_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serial_motor_demo_msgs__msg__MotorCommand
    std::shared_ptr<serial_motor_demo_msgs::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->mot_1 != other.mot_1) {
      return false;
    }
    if (this->mot_2 != other.mot_2) {
      return false;
    }
    if (this->mot_3 != other.mot_3) {
      return false;
    }
    if (this->mot_4 != other.mot_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  serial_motor_demo_msgs::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serial_motor_demo_msgs

#endif  // SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
