// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_srv:srv/UserInput.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__BUILDER_HPP_
#define ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__BUILDER_HPP_

#include "assignment2_srv/srv/detail/user_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace assignment2_srv
{

namespace srv
{

namespace builder
{

class Init_UserInput_Request_user_input
{
public:
  Init_UserInput_Request_user_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_srv::srv::UserInput_Request user_input(::assignment2_srv::srv::UserInput_Request::_user_input_type arg)
  {
    msg_.user_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_srv::srv::UserInput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_srv::srv::UserInput_Request>()
{
  return assignment2_srv::srv::builder::Init_UserInput_Request_user_input();
}

}  // namespace assignment2_srv


namespace assignment2_srv
{

namespace srv
{

namespace builder
{

class Init_UserInput_Response_success
{
public:
  Init_UserInput_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_srv::srv::UserInput_Response success(::assignment2_srv::srv::UserInput_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_srv::srv::UserInput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_srv::srv::UserInput_Response>()
{
  return assignment2_srv::srv::builder::Init_UserInput_Response_success();
}

}  // namespace assignment2_srv

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__BUILDER_HPP_
