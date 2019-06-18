/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyServiceEmpty.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyServiceEmpty.tcc"

#include <thrift/lib/cpp2/gen/service_cpp.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceEmptySvIf::getProcessor() {
  return std::make_unique<MyServiceEmptyAsyncProcessor>(this);
}

const char* MyServiceEmptyAsyncProcessor::getServiceName() {
  return "MyServiceEmpty";
}

folly::Optional<std::string> MyServiceEmptyAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void MyServiceEmptyAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool MyServiceEmptyAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> MyServiceEmptyAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> MyServiceEmptyAsyncProcessor::cacheKeyMap_ {};
const MyServiceEmptyAsyncProcessor::ProcessMap& MyServiceEmptyAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServiceEmptyAsyncProcessor::ProcessMap MyServiceEmptyAsyncProcessor::binaryProcessMap_ {};

const MyServiceEmptyAsyncProcessor::ProcessMap& MyServiceEmptyAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceEmptyAsyncProcessor::ProcessMap MyServiceEmptyAsyncProcessor::compactProcessMap_ {};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
