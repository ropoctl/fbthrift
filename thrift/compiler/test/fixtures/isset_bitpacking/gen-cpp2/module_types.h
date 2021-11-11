/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/annotation/gen-cpp2/cpp_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct field1;
struct field2;
struct field3;
struct field4;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Foo;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Foo() :
      __fbthrift_field_field1(),
      __fbthrift_field_field2(),
      __fbthrift_field_field4() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, ::std::int32_t field1__arg, ::std::int32_t field2__arg, ::std::string field3__arg, double field4__arg);

  Foo(Foo&&) noexcept;

  Foo(const Foo& src);


  Foo& operator=(Foo&&) noexcept;
  Foo& operator=(const Foo& src);
  void __clear();
 private:
  ::std::int32_t __fbthrift_field_field1;
 private:
  ::std::int32_t __fbthrift_field_field2;
 private:
  ::std::string __fbthrift_field_field3;
 private:
  double __fbthrift_field_field4;
 private:
  apache::thrift::detail::isset_bitset<4, true> __isset;

 public:

  bool operator==(const Foo&) const;
  bool operator<(const Foo&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field1_ref() const& {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field1_ref() const&& {
    return {std::move(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field1_ref() & {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field1_ref() && {
    return {std::move(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field1() const& {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field1() const&& {
    return {std::move(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field1() & {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field1() && {
    return {std::move(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2_ref() const& {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2_ref() & {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2_ref() && {
    return {std::move(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2() const& {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2() const&& {
    return {std::move(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2() & {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2() && {
    return {std::move(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field3_ref() const& {
    return {this->__fbthrift_field_field3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->__fbthrift_field_field3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field3_ref() & {
    return {this->__fbthrift_field_field3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field3_ref() && {
    return {std::move(this->__fbthrift_field_field3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field3() const& {
    return {this->__fbthrift_field_field3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field3() const&& {
    return {std::move(this->__fbthrift_field_field3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field3() & {
    return {this->__fbthrift_field_field3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field3() && {
    return {std::move(this->__fbthrift_field_field3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field4_ref() const& {
    return {this->__fbthrift_field_field4, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->__fbthrift_field_field4), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field4_ref() & {
    return {this->__fbthrift_field_field4, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field4_ref() && {
    return {std::move(this->__fbthrift_field_field4), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field4() const& {
    return {this->__fbthrift_field_field4, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field4() const&& {
    return {std::move(this->__fbthrift_field_field4), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field4() & {
    return {this->__fbthrift_field_field4, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field4() && {
    return {std::move(this->__fbthrift_field_field4), __isset.at(3), __isset.bit(3)};
  }

  const ::std::int32_t* get_field1() const& {
    return field1_ref() ? std::addressof(__fbthrift_field_field1) : nullptr;
  }

  ::std::int32_t* get_field1() & {
    return field1_ref() ? std::addressof(__fbthrift_field_field1) : nullptr;
  }
  ::std::int32_t* get_field1() && = delete;

  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::int32_t& set_field1(::std::int32_t field1_) {
    field1_ref() = field1_;
    return __fbthrift_field_field1;
  }

  const ::std::int32_t* get_field2() const& {
    return field2_ref() ? std::addressof(__fbthrift_field_field2) : nullptr;
  }

  ::std::int32_t* get_field2() & {
    return field2_ref() ? std::addressof(__fbthrift_field_field2) : nullptr;
  }
  ::std::int32_t* get_field2() && = delete;

  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::int32_t& set_field2(::std::int32_t field2_) {
    field2_ref() = field2_;
    return __fbthrift_field_field2;
  }

  const ::std::string* get_field3() const& {
    return field3_ref() ? std::addressof(__fbthrift_field_field3) : nullptr;
  }

  ::std::string* get_field3() & {
    return field3_ref() ? std::addressof(__fbthrift_field_field3) : nullptr;
  }
  ::std::string* get_field3() && = delete;

  template <typename T_Foo_field3_struct_setter = ::std::string>
  [[deprecated("Use `FOO.field3_ref() = BAR;` instead of `FOO.set_field3(BAR);`")]]
  ::std::string& set_field3(T_Foo_field3_struct_setter&& field3_) {
    field3_ref() = std::forward<T_Foo_field3_struct_setter>(field3_);
    return __fbthrift_field_field3;
  }

  const double* get_field4() const& {
    return field4_ref() ? std::addressof(__fbthrift_field_field4) : nullptr;
  }

  double* get_field4() & {
    return field4_ref() ? std::addressof(__fbthrift_field_field4) : nullptr;
  }
  double* get_field4() && = delete;

  [[deprecated("Use `FOO.field4_ref() = BAR;` instead of `FOO.set_field4(BAR);`")]]
  double& set_field4(double field4_) {
    field4_ref() = field4_;
    return __fbthrift_field_field4;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Foo>;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
uint32_t Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
