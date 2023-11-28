// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serial_motor_demo_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serial_motor_demo_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serial_motor_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_mot_4
{
public:
  explicit Init_MotorCommand_mot_4(::serial_motor_demo_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::serial_motor_demo_msgs::msg::MotorCommand mot_4(::serial_motor_demo_msgs::msg::MotorCommand::_mot_4_type arg)
  {
    msg_.mot_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serial_motor_demo_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_mot_3
{
public:
  explicit Init_MotorCommand_mot_3(::serial_motor_demo_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_mot_4 mot_3(::serial_motor_demo_msgs::msg::MotorCommand::_mot_3_type arg)
  {
    msg_.mot_3 = std::move(arg);
    return Init_MotorCommand_mot_4(msg_);
  }

private:
  ::serial_motor_demo_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_mot_2
{
public:
  explicit Init_MotorCommand_mot_2(::serial_motor_demo_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_mot_3 mot_2(::serial_motor_demo_msgs::msg::MotorCommand::_mot_2_type arg)
  {
    msg_.mot_2 = std::move(arg);
    return Init_MotorCommand_mot_3(msg_);
  }

private:
  ::serial_motor_demo_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_mot_1
{
public:
  Init_MotorCommand_mot_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_mot_2 mot_1(::serial_motor_demo_msgs::msg::MotorCommand::_mot_1_type arg)
  {
    msg_.mot_1 = std::move(arg);
    return Init_MotorCommand_mot_2(msg_);
  }

private:
  ::serial_motor_demo_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serial_motor_demo_msgs::msg::MotorCommand>()
{
  return serial_motor_demo_msgs::msg::builder::Init_MotorCommand_mot_1();
}

}  // namespace serial_motor_demo_msgs

#endif  // SERIAL_MOTOR_DEMO_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
