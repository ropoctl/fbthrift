/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/gen/module_types_tcc.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>
#include <thrift/lib/cpp2/protocol/SimpleJSONProtocol.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::extra::svc::containerStruct2> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace extra { namespace svc {

template <class Protocol_>
void containerStruct2::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_fieldA:
  {
    iprot->readBool(this->fieldA);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          101,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_req_fieldA:
  {
    iprot->readBool(this->req_fieldA);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          101,
          201,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_opt_fieldA:
  {
    this->opt_fieldA = bool();
    iprot->readBool(this->opt_fieldA.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          201,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_fieldB:
  {
    this->fieldB = std::map<std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::read(*iprot, this->fieldB);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          102,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_req_fieldB:
  {
    this->req_fieldB = std::map<std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::read(*iprot, this->req_fieldB);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          102,
          202,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_opt_fieldB:
  {
    this->opt_fieldB = std::map<std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::read(*iprot, this->opt_fieldB.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          202,
          3,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_fieldC:
  {
    this->fieldC = std::set<int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::read(*iprot, this->fieldC);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          103,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_req_fieldC:
  {
    this->req_fieldC = std::set<int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::read(*iprot, this->req_fieldC);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          103,
          203,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_opt_fieldC:
  {
    this->opt_fieldC = std::set<int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::read(*iprot, this->opt_fieldC.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          203,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_fieldD:
  {
    iprot->readString(this->fieldD);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_fieldE:
  {
    iprot->readString(this->fieldE);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          105,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_req_fieldE:
  {
    iprot->readString(this->req_fieldE);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          105,
          205,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_opt_fieldE:
  {
    this->opt_fieldE = std::string();
    iprot->readString(this->opt_fieldE.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          205,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    apache::thrift::detail::TccStructTraits<containerStruct2>::translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_fieldA;
      } else {
        goto _skip;
      }
    }
    case 101:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_req_fieldA;
      } else {
        goto _skip;
      }
    }
    case 201:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_opt_fieldA;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_fieldB;
      } else {
        goto _skip;
      }
    }
    case 102:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_req_fieldB;
      } else {
        goto _skip;
      }
    }
    case 202:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_opt_fieldB;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_fieldC;
      } else {
        goto _skip;
      }
    }
    case 103:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_req_fieldC;
      } else {
        goto _skip;
      }
    }
    case 203:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_opt_fieldC;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_fieldD;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_fieldE;
      } else {
        goto _skip;
      }
    }
    case 105:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_req_fieldE;
      } else {
        goto _skip;
      }
    }
    case 205:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_opt_fieldE;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t containerStruct2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct2");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->fieldA);
  xfer += prot_->serializedFieldSize("req_fieldA", apache::thrift::protocol::T_BOOL, 101);
  xfer += prot_->serializedSizeBool(this->req_fieldA);
  if (this->opt_fieldA.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldA", apache::thrift::protocol::T_BOOL, 201);
    xfer += prot_->serializedSizeBool(this->opt_fieldA.value());
  }
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->fieldB);
  xfer += prot_->serializedFieldSize("req_fieldB", apache::thrift::protocol::T_MAP, 102);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->req_fieldB);
  if (this->opt_fieldB.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldB", apache::thrift::protocol::T_MAP, 202);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->opt_fieldB.value());
  }
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->fieldC);
  xfer += prot_->serializedFieldSize("req_fieldC", apache::thrift::protocol::T_SET, 103);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->req_fieldC);
  if (this->opt_fieldC.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldC", apache::thrift::protocol::T_SET, 203);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->opt_fieldC.value());
  }
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->fieldD);
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->fieldE);
  xfer += prot_->serializedFieldSize("req_fieldE", apache::thrift::protocol::T_STRING, 105);
  xfer += prot_->serializedSizeString(this->req_fieldE);
  if (this->opt_fieldE.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldE", apache::thrift::protocol::T_STRING, 205);
    xfer += prot_->serializedSizeString(this->opt_fieldE.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct2");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->fieldA);
  xfer += prot_->serializedFieldSize("req_fieldA", apache::thrift::protocol::T_BOOL, 101);
  xfer += prot_->serializedSizeBool(this->req_fieldA);
  if (this->opt_fieldA.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldA", apache::thrift::protocol::T_BOOL, 201);
    xfer += prot_->serializedSizeBool(this->opt_fieldA.value());
  }
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->fieldB);
  xfer += prot_->serializedFieldSize("req_fieldB", apache::thrift::protocol::T_MAP, 102);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->req_fieldB);
  if (this->opt_fieldB.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldB", apache::thrift::protocol::T_MAP, 202);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->opt_fieldB.value());
  }
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->fieldC);
  xfer += prot_->serializedFieldSize("req_fieldC", apache::thrift::protocol::T_SET, 103);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->req_fieldC);
  if (this->opt_fieldC.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldC", apache::thrift::protocol::T_SET, 203);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->opt_fieldC.value());
  }
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->fieldD);
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->fieldE);
  xfer += prot_->serializedFieldSize("req_fieldE", apache::thrift::protocol::T_STRING, 105);
  xfer += prot_->serializedSizeString(this->req_fieldE);
  if (this->opt_fieldE.hasValue()) {
    xfer += prot_->serializedFieldSize("opt_fieldE", apache::thrift::protocol::T_STRING, 205);
    xfer += prot_->serializedSizeString(this->opt_fieldE.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("containerStruct2");
  xfer += prot_->writeFieldBegin("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->fieldA);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_fieldA", apache::thrift::protocol::T_BOOL, 101);
  xfer += prot_->writeBool(this->req_fieldA);
  xfer += prot_->writeFieldEnd();
  if (this->opt_fieldA.hasValue()) {
    xfer += prot_->writeFieldBegin("opt_fieldA", apache::thrift::protocol::T_BOOL, 201);
    xfer += prot_->writeBool(this->opt_fieldA.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::write(*prot_, this->fieldB);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_fieldB", apache::thrift::protocol::T_MAP, 102);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::write(*prot_, this->req_fieldB);
  xfer += prot_->writeFieldEnd();
  if (this->opt_fieldB.hasValue()) {
    xfer += prot_->writeFieldBegin("opt_fieldB", apache::thrift::protocol::T_MAP, 202);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::write(*prot_, this->opt_fieldB.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::write(*prot_, this->fieldC);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_fieldC", apache::thrift::protocol::T_SET, 103);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::write(*prot_, this->req_fieldC);
  xfer += prot_->writeFieldEnd();
  if (this->opt_fieldC.hasValue()) {
    xfer += prot_->writeFieldBegin("opt_fieldC", apache::thrift::protocol::T_SET, 203);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::write(*prot_, this->opt_fieldC.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->writeString(this->fieldD);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->writeString(this->fieldE);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("req_fieldE", apache::thrift::protocol::T_STRING, 105);
  xfer += prot_->writeString(this->req_fieldE);
  xfer += prot_->writeFieldEnd();
  if (this->opt_fieldE.hasValue()) {
    xfer += prot_->writeFieldBegin("opt_fieldE", apache::thrift::protocol::T_STRING, 205);
    xfer += prot_->writeString(this->opt_fieldE.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void containerStruct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void containerStruct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template void containerStruct2::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}} // extra::svc
