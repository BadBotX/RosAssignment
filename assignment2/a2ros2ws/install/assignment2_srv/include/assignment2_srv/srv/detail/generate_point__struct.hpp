// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_srv:srv/GeneratePoint.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_HPP_
#define ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__assignment2_srv__srv__GeneratePoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_srv__srv__GeneratePoint_Request __declspec(deprecated)
#endif

namespace assignment2_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GeneratePoint_Request_
{
  using Type = GeneratePoint_Request_<ContainerAllocator>;

  explicit GeneratePoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gp_call = false;
    }
  }

  explicit GeneratePoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gp_call = false;
    }
  }

  // field types and members
  using _gp_call_type =
    bool;
  _gp_call_type gp_call;

  // setters for named parameter idiom
  Type & set__gp_call(
    const bool & _arg)
  {
    this->gp_call = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_srv__srv__GeneratePoint_Request
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_srv__srv__GeneratePoint_Request
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneratePoint_Request_ & other) const
  {
    if (this->gp_call != other.gp_call) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneratePoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneratePoint_Request_

// alias to use template instance with default allocator
using GeneratePoint_Request =
  assignment2_srv::srv::GeneratePoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_srv


#ifndef _WIN32
# define DEPRECATED__assignment2_srv__srv__GeneratePoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_srv__srv__GeneratePoint_Response __declspec(deprecated)
#endif

namespace assignment2_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GeneratePoint_Response_
{
  using Type = GeneratePoint_Response_<ContainerAllocator>;

  explicit GeneratePoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit GeneratePoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_srv__srv__GeneratePoint_Response
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_srv__srv__GeneratePoint_Response
    std::shared_ptr<assignment2_srv::srv::GeneratePoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneratePoint_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneratePoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneratePoint_Response_

// alias to use template instance with default allocator
using GeneratePoint_Response =
  assignment2_srv::srv::GeneratePoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_srv

namespace assignment2_srv
{

namespace srv
{

struct GeneratePoint
{
  using Request = assignment2_srv::srv::GeneratePoint_Request;
  using Response = assignment2_srv::srv::GeneratePoint_Response;
};

}  // namespace srv

}  // namespace assignment2_srv

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__GENERATE_POINT__STRUCT_HPP_
