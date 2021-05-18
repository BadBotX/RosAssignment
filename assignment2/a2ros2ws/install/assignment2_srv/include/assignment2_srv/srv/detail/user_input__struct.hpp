// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_srv:srv/UserInput.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_HPP_
#define ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__assignment2_srv__srv__UserInput_Request __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_srv__srv__UserInput_Request __declspec(deprecated)
#endif

namespace assignment2_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UserInput_Request_
{
  using Type = UserInput_Request_<ContainerAllocator>;

  explicit UserInput_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_input = 0ll;
    }
  }

  explicit UserInput_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_input = 0ll;
    }
  }

  // field types and members
  using _user_input_type =
    int64_t;
  _user_input_type user_input;

  // setters for named parameter idiom
  Type & set__user_input(
    const int64_t & _arg)
  {
    this->user_input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_srv::srv::UserInput_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_srv::srv::UserInput_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::UserInput_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::UserInput_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_srv__srv__UserInput_Request
    std::shared_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_srv__srv__UserInput_Request
    std::shared_ptr<assignment2_srv::srv::UserInput_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_Request_ & other) const
  {
    if (this->user_input != other.user_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_Request_

// alias to use template instance with default allocator
using UserInput_Request =
  assignment2_srv::srv::UserInput_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_srv


#ifndef _WIN32
# define DEPRECATED__assignment2_srv__srv__UserInput_Response __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_srv__srv__UserInput_Response __declspec(deprecated)
#endif

namespace assignment2_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UserInput_Response_
{
  using Type = UserInput_Response_<ContainerAllocator>;

  explicit UserInput_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit UserInput_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_srv::srv::UserInput_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_srv::srv::UserInput_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::UserInput_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_srv::srv::UserInput_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_srv__srv__UserInput_Response
    std::shared_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_srv__srv__UserInput_Response
    std::shared_ptr<assignment2_srv::srv::UserInput_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_Response_

// alias to use template instance with default allocator
using UserInput_Response =
  assignment2_srv::srv::UserInput_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_srv

namespace assignment2_srv
{

namespace srv
{

struct UserInput
{
  using Request = assignment2_srv::srv::UserInput_Request;
  using Response = assignment2_srv::srv::UserInput_Response;
};

}  // namespace srv

}  // namespace assignment2_srv

#endif  // ASSIGNMENT2_SRV__SRV__DETAIL__USER_INPUT__STRUCT_HPP_
