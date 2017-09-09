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


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace some { namespace ns {
class IncludedA;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
class IncludedA : private apache::thrift::detail::st::ComparisonOperators<IncludedA> {
 public:

  IncludedA() :
      i32Field(0) {}
  // FragileConstructor for use in initialization lists only

  IncludedA(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg) :
      i32Field(std::move(i32Field__arg)),
      strField(std::move(strField__arg)) {
    __isset.i32Field = true;
    __isset.strField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  IncludedA(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    IncludedA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i32Field = arg.move();
    __isset.i32Field = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  IncludedA(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    IncludedA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    strField = arg.move();
    __isset.strField = true;
  }

  IncludedA(IncludedA&&) = default;

  IncludedA(const IncludedA&) = default;

  IncludedA& operator=(IncludedA&&) = default;

  IncludedA& operator=(const IncludedA&) = default;
  void __clear();

  virtual ~IncludedA() {}

  int32_t i32Field;
  std::string strField;

  struct __isset {
    void __clear() {
      i32Field = false;
      strField = false;
    }

    bool i32Field = false;
    bool strField = false;
  } __isset;
  bool operator==(const IncludedA& rhs) const;

  bool operator < (const IncludedA& rhs) const {
    if (!(i32Field == rhs.i32Field)) {
      return i32Field < rhs.i32Field;
    }
    if (!(strField == rhs.strField)) {
      return strField < rhs.strField;
    }
    (void)rhs;
    return false;
  }

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

  const std::string& get_strField() const& {
    return strField;
  }

  std::string get_strField() && {
    return std::move(strField);
  }

  template <typename T_IncludedA_strField_struct_setter>
  std::string& set_strField(T_IncludedA_strField_struct_setter&& strField_) {
    strField = std::forward<T_IncludedA_strField_struct_setter>(strField_);
    __isset.strField = true;
    return strField;
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

void swap(IncludedA& a, IncludedA& b);
extern template uint32_t IncludedA::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t IncludedA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t IncludedA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedA::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t IncludedA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t IncludedA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::IncludedA>::clear( ::some::ns::IncludedA* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::IncludedA>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedA>::write(Protocol* proto,  ::some::ns::IncludedA const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedA>::read(Protocol* proto,  ::some::ns::IncludedA* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedA>::serializedSize(Protocol const* proto,  ::some::ns::IncludedA const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedA>::serializedSizeZC(Protocol const* proto,  ::some::ns::IncludedA const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
