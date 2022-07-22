/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace facebook {
namespace thrift {
namespace test {


folly::Future<int32_t>
ServiceClientWrapper::func(
    apache::thrift::RpcOptions& rpcOptions,
    std::string arg_arg1,
    std::string arg_arg2,
    ::facebook::thrift::test::Foo arg_arg3) {
  auto* client = static_cast<::facebook::thrift::test::ServiceAsyncClient*>(async_client_.get());
  folly::Promise<int32_t> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<int32_t>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_func, channel_);
  client->func(
    rpcOptions,
    std::move(callback),
    arg_arg1,
    arg_arg2,
    arg_arg3
  );
  return _future;
}

} // namespace facebook
} // namespace thrift
} // namespace test
