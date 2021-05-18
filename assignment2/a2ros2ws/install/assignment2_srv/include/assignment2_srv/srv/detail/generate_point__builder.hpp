// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__BUILDER_HPP_
#define ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__BUILDER_HPP_

#include "assignment2_srv/srv/detail/generate_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace assignment2_srv
{

namespace srv
{

namespace builder
{

class Init_GeneratePoint_Request_gp_call
{
public:
  Init_GeneratePoint_Request_gp_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_srv::srv::GeneratePoint_Request gp_call(::assignment2_srv::srv::GeneratePoint_Request::_gp_call_type arg)
  {
    msg_.gp_call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_srv::srv::GeneratePoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_srv::srv::GeneratePoint_Request>()
{
  return assignment2_srv::srv::builder::Init_GeneratePoint_Request_gp_call();
}

}  // namespace assignment2_srv


namespace assignment2_srv
{

namespace srv
{

namespace builder
{

class Init_GeneratePoint_Response_y
{
public:
  explicit Init_GeneratePoint_Response_y(::assignment2_srv::srv::GeneratePoint_Response & msg)
  : msg_(msg)
  {}
  ::assignment2_srv::srv::GeneratePoint_Response y(::assignment2_srv::srv::GeneratePoint_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_srv::srv::GeneratePoint_Response msg_;
};

class Init_GeneratePoint_Response_x
{
public:
  Init_GeneratePoint_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeneratePoint_Response_y x(::assignment2_srv::srv::GeneratePoint_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GeneratePoint_Response_y(msg_);
  }

private:
  ::assignment2_srv::srv::GeneratePoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_srv::srv::GeneratePoint_Response>()
{
  return assignment2_srv::srv::builder::Init_GeneratePoint_Response_x();
}

}  // namespace assignment2_srv

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__BUILDER_HPP_
