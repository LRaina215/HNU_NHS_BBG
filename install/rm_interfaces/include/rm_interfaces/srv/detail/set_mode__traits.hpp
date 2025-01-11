// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__SET_MODE__TRAITS_HPP_
#define RM_INTERFACES__SRV__DETAIL__SET_MODE__TRAITS_HPP_

#include "rm_interfaces/srv/detail/set_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::srv::SetMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::srv::SetMode_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::srv::SetMode_Request>()
{
  return "rm_interfaces::srv::SetMode_Request";
}

template<>
inline const char * name<rm_interfaces::srv::SetMode_Request>()
{
  return "rm_interfaces/srv/SetMode_Request";
}

template<>
struct has_fixed_size<rm_interfaces::srv::SetMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::srv::SetMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::srv::SetMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rm_interfaces::srv::SetMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rm_interfaces::srv::SetMode_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rm_interfaces::srv::SetMode_Response>()
{
  return "rm_interfaces::srv::SetMode_Response";
}

template<>
inline const char * name<rm_interfaces::srv::SetMode_Response>()
{
  return "rm_interfaces/srv/SetMode_Response";
}

template<>
struct has_fixed_size<rm_interfaces::srv::SetMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::srv::SetMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::srv::SetMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_interfaces::srv::SetMode>()
{
  return "rm_interfaces::srv::SetMode";
}

template<>
inline const char * name<rm_interfaces::srv::SetMode>()
{
  return "rm_interfaces/srv/SetMode";
}

template<>
struct has_fixed_size<rm_interfaces::srv::SetMode>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_interfaces::srv::SetMode_Request>::value &&
    has_fixed_size<rm_interfaces::srv::SetMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_interfaces::srv::SetMode>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_interfaces::srv::SetMode_Request>::value &&
    has_bounded_size<rm_interfaces::srv::SetMode_Response>::value
  >
{
};

template<>
struct is_service<rm_interfaces::srv::SetMode>
  : std::true_type
{
};

template<>
struct is_service_request<rm_interfaces::srv::SetMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_interfaces::srv::SetMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__SRV__DETAIL__SET_MODE__TRAITS_HPP_
