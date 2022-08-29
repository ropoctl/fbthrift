/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FB303Service.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FB303Service.tcc"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::getProcessor() {
  return std::make_unique<::test::fixtures::basic::FB303ServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::test::fixtures::basic::FB303ServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::test::fixtures::basic::FB303ServiceServiceInfoHolder apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::simple_rpc(::test::fixtures::basic::ReservedKeyword& /*_return*/, ::std::int32_t /*int_parameter*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("simple_rpc");
}

folly::SemiFuture<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::semifuture_simple_rpc(::std::int32_t p_int_parameter) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::test::fixtures::basic::ReservedKeyword>();
  simple_rpc(*ret, p_int_parameter);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::future_simple_rpc(::std::int32_t p_int_parameter) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_simple_rpc(p_int_parameter), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::co_simple_rpc(::std::int32_t p_int_parameter) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<::std::int32_t /*int_parameter*/>(p_int_parameter));
}

folly::coro::Task<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>> apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::co_simple_rpc(apache::thrift::RequestParams /* params */, ::std::int32_t p_int_parameter) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_simple_rpc(p_int_parameter);
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>::async_tm_simple_rpc(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>>> callback, ::std::int32_t p_int_parameter) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_simple_rpc.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_simple_rpc.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_simple_rpc(params, p_int_parameter);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_simple_rpc.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_simple_rpc(p_int_parameter);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_simple_rpc(p_int_parameter);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_simple_rpc(params, p_int_parameter);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_simple_rpc(p_int_parameter);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::test::fixtures::basic::ReservedKeyword _return;
        simple_rpc(_return, p_int_parameter);
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_int_parameter) = std::move(ex).restoreArgs<::std::int32_t /*int_parameter*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace test { namespace fixtures { namespace basic {

void FB303ServiceSvNull::simple_rpc(::test::fixtures::basic::ReservedKeyword& /*_return*/, ::std::int32_t /*int_parameter*/) {}


const char* FB303ServiceAsyncProcessor::getServiceName() {
  return "FB303Service";
}

void FB303ServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>>::gen(response);
}

void FB303ServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void FB303ServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void FB303ServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const FB303ServiceAsyncProcessor::ProcessMap& FB303ServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const FB303ServiceAsyncProcessor::ProcessMap FB303ServiceAsyncProcessor::kOwnProcessMap_ {
  {"simple_rpc",
    {&FB303ServiceAsyncProcessor::setUpAndProcess_simple_rpc<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &FB303ServiceAsyncProcessor::setUpAndProcess_simple_rpc<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &FB303ServiceAsyncProcessor::executeRequest_simple_rpc<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &FB303ServiceAsyncProcessor::executeRequest_simple_rpc<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& FB303ServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap FB303ServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"simple_rpc",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "FB303Service.simple_rpc",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  };

  return requestInfoMap;
}
}}} // test::fixtures::basic
