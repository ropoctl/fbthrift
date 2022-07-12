/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>


namespace apache {
namespace thrift {
namespace tag {
struct message;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_message
#define APACHE_THRIFT_ACCESSOR_message
APACHE_THRIFT_DEFINE_ACCESSOR(message);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class CustomException;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class FOLLY_EXPORT CustomException : public virtual apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = CustomException;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  CustomException();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  CustomException(apache::thrift::FragileConstructor, ::std::string message__arg);

  CustomException(CustomException&&) noexcept;

  CustomException(const CustomException& src);


  CustomException& operator=(CustomException&&) noexcept;
  CustomException& operator=(const CustomException& src);

  ~CustomException() override;

 private:
  ::std::string __fbthrift_field_message;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const CustomException&) const;
  bool operator<(const CustomException&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> message_ref() const& {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> message_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> message_ref() & {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> message_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> message() const& {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> message() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> message() & {
    return {this->__fbthrift_field_message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> message() && {
    return {static_cast<T&&>(this->__fbthrift_field_message), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_message() const& {
    return __fbthrift_field_message;
  }

  ::std::string get_message() && {
    return std::move(__fbthrift_field_message);
  }

  template <typename T_CustomException_message_struct_setter = ::std::string>
  [[deprecated("Use `FOO.message_ref() = BAR;` instead of `FOO.set_message(BAR);`")]]
  ::std::string& set_message(T_CustomException_message_struct_setter&& message_) {
    message_ref() = std::forward<T_CustomException_message_struct_setter>(message_);
    return __fbthrift_field_message;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::CustomException";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<CustomException>;
  friend void swap(CustomException& a, CustomException& b);
};

template <class Protocol_>
unsigned long CustomException::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2
