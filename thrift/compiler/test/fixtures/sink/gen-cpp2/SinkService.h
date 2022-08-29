/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/SinkServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/Sink.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {
class SinkService;
class SinkServiceAsyncProcessor;

class SinkServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::SinkService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "SinkService"; }

  typedef ::cpp2::SinkServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> method();
  virtual folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_method();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_method();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_method();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_method(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_method(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual ::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> methodAndReponse();
  virtual folly::Future<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_methodAndReponse();
  virtual folly::SemiFuture<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_methodAndReponse();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodAndReponse();
  virtual folly::coro::Task<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodAndReponse(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodAndReponse(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodThrow();
  virtual folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_methodThrow();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_methodThrow();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodThrow();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodThrow(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodSinkThrow();
  virtual folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_methodSinkThrow();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_methodSinkThrow();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodSinkThrow();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodSinkThrow(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodSinkThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodFinalThrow();
  virtual folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_methodFinalThrow();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_methodFinalThrow();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodFinalThrow();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodFinalThrow(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodFinalThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodBothThrow();
  virtual folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> future_methodBothThrow();
  virtual folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> semifuture_methodBothThrow();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodBothThrow();
  virtual folly::coro::Task<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> co_methodBothThrow(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_methodBothThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
  virtual void async_eb_methodFast(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback);
 private:
  static ::cpp2::SinkServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_method{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodAndReponse{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodThrow{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodSinkThrow{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodFinalThrow{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodBothThrow{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using SinkServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<SinkService> instead")]] = ::apache::thrift::ServiceHandler<SinkService>;
} // cpp2
namespace cpp2 {
class SinkServiceSvNull : public ::apache::thrift::ServiceHandler<SinkService> {
 public:
  ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> method() override;
  ::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> methodAndReponse() override;
  ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodThrow() override;
  ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodSinkThrow() override;
  ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodFinalThrow() override;
  ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> methodBothThrow() override;
};

class SinkServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::SinkService>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<SinkServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const SinkServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const SinkServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_method(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_method(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_method(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodAndReponse(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodAndReponse(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodAndReponse(apache::thrift::ContextStack* ctx, ::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodAndReponse(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodThrow(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodThrow(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodThrow(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodThrow(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodSinkThrow(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodSinkThrow(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodSinkThrow(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodSinkThrow(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodFinalThrow(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodFinalThrow(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodFinalThrow(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodFinalThrow(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodBothThrow(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodBothThrow(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodBothThrow(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodBothThrow(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodFast(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodFast(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<apache::thrift::SerializedResponse, apache::thrift::detail::SinkConsumerImpl> return_methodFast(apache::thrift::ContextStack* ctx, ::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodFast(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  SinkServiceAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::SinkService>* iface) :
      iface_(iface) {}
  ~SinkServiceAsyncProcessor() override {}
};

} // cpp2
