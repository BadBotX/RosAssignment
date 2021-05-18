// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment2_srv:srv/UserInput.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__TRAITS_HPP_
#define ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__TRAITS_HPP_

#include "assignment2_srv/srv/detail/user_input__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment2_srv::srv::UserInput_Request>()
{
  return "assignment2_srv::srv::UserInput_Request";
}

template<>
inline const char * name<assignment2_srv::srv::UserInput_Request>()
{
  return "assignment2_srv/srv/UserInput_Request";
}

template<>
struct has_fixed_size<assignment2_srv::srv::UserInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_srv::srv::UserInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_srv::srv::UserInput_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment2_srv::srv::UserInput_Response>()
{
  return "assignment2_srv::srv::UserInput_Response";
}

template<>
inline const char * name<assignment2_srv::srv::UserInput_Response>()
{
  return "assignment2_srv/srv/UserInput_Response";
}

template<>
struct has_fixed_size<assignment2_srv::srv::UserInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_srv::srv::UserInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_srv::srv::UserInput_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment2_srv::srv::UserInput>()
{
  return "assignment2_srv::srv::UserInput";
}

template<>
inline const char * name<assignment2_srv::srv::UserInput>()
{
  return "assignment2_srv/srv/UserInput";
}

template<>
struct has_fixed_size<assignment2_srv::srv::UserInput>
  : std::integral_constant<
    bool,
    has_fixed_size<assignment2_srv::srv::UserInput_Request>::value &&
    has_fixed_size<assignment2_srv::srv::UserInput_Response>::value
  >
{
};

template<>
struct has_bounded_size<assignment2_srv::srv::UserInput>
  : std::integral_constant<
    bool,
    has_bounded_size<assignment2_srv::srv::UserInput_Request>::value &&
    has_bounded_size<assignment2_srv::srv::UserInput_Response>::value
  >
{
};

template<>
struct is_service<assignment2_srv::srv::UserInput>
  : std::true_type
{
};

template<>
struct is_service_request<assignment2_srv::srv::UserInput_Request>
  : std::true_type
{
};

template<>
struct is_service_response<assignment2_srv::srv::UserInput_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__TRAITS_HPP_
