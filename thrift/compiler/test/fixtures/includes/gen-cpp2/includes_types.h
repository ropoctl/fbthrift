/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/io/Cursor.h>
#include <folly/io/IOBuf.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include "transitive_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Included;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef int64_t IncludedInt64;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Included : private apache::thrift::detail::st::ComparisonOperators<Included> {
 public:

  Included() :
      MyIntField(0LL),
      MyTransitiveField( ::cpp2::Foo(::apache::thrift::detail::wrap_argument<1>(2LL))) {}
  // FragileConstructor for use in initialization lists only

  Included(apache::thrift::FragileConstructor, int64_t MyIntField__arg,  ::cpp2::Foo MyTransitiveField__arg) :
      MyIntField(std::move(MyIntField__arg)),
      MyTransitiveField(std::move(MyTransitiveField__arg)) {
    __isset.MyIntField = true;
    __isset.MyTransitiveField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Included(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Included(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyIntField = arg.move();
    __isset.MyIntField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Included(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Included(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyTransitiveField = arg.move();
    __isset.MyTransitiveField = true;
  }

  Included(Included&&) = default;

  Included(const Included&) = default;

  Included& operator=(Included&&) = default;

  Included& operator=(const Included&) = default;
  void __clear();

  virtual ~Included() {}

  int64_t MyIntField;
   ::cpp2::Foo MyTransitiveField;

  struct __isset {
    void __clear() {
      MyIntField = false;
      MyTransitiveField = false;
    }

    bool MyIntField = false;
    bool MyTransitiveField = false;
  } __isset;
  bool operator==(const Included& rhs) const;

  bool operator < (const Included& rhs) const {
    if (!(MyIntField == rhs.MyIntField)) {
      return MyIntField < rhs.MyIntField;
    }
    if (!(MyTransitiveField == rhs.MyTransitiveField)) {
      return MyTransitiveField < rhs.MyTransitiveField;
    }
    (void)rhs;
    return false;
  }

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }
  const  ::cpp2::Foo& get_MyTransitiveField() const&;
   ::cpp2::Foo get_MyTransitiveField() &&;

  template <typename T_Included_MyTransitiveField_struct_setter>
   ::cpp2::Foo& set_MyTransitiveField(T_Included_MyTransitiveField_struct_setter&& MyTransitiveField_) {
    MyTransitiveField = std::forward<T_Included_MyTransitiveField_struct_setter>(MyTransitiveField_);
    __isset.MyTransitiveField = true;
    return MyTransitiveField;
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
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(Included& a, Included& b);
extern template uint32_t Included::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Included::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Included>::clear( ::cpp2::Included* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Included>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Included>::write(Protocol* proto,  ::cpp2::Included const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Included>::read(Protocol* proto,  ::cpp2::Included* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Included>::serializedSize(Protocol const* proto,  ::cpp2::Included const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Included>::serializedSizeZC(Protocol const* proto,  ::cpp2::Included const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
