/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class NestedContainersAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "NestedContainers";
  }

  virtual void mapList(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void mapList(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
 private:
  void mapListImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::map<int32_t, std::vector<int32_t>>& foo);
 public:
  virtual void sync_mapList(const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void sync_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapList(const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void mapList(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
  static void recv_mapList(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapList(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void mapListT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::map<int32_t, std::vector<int32_t>>& foo);
 public:
  virtual void mapSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void mapSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
 private:
  void mapSetImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::map<int32_t, std::set<int32_t>>& foo);
 public:
  virtual void sync_mapSet(const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void sync_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapSet(const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void mapSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::set<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
  static void recv_mapSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void mapSetT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::map<int32_t, std::set<int32_t>>& foo);
 public:
  virtual void listMap(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void listMap(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
 private:
  void listMapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::map<int32_t, int32_t>>& foo);
 public:
  virtual void sync_listMap(const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void sync_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listMap(const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void listMap(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
  static void recv_listMap(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listMap(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void listMapT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::map<int32_t, int32_t>>& foo);
 public:
  virtual void listSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
  virtual void listSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
 private:
  void listSetImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::set<int32_t>>& foo);
 public:
  virtual void sync_listSet(const std::vector<std::set<int32_t>>& foo);
  virtual void sync_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listSet(const std::vector<std::set<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual void listSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::set<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
  static void recv_listSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void listSetT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::set<int32_t>>& foo);
 public:
  virtual void turtles(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void turtles(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
 private:
  void turtlesImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
 public:
  virtual void sync_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void sync_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<folly::Unit> future_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<folly::Unit> future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void turtles(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  static folly::exception_wrapper recv_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
  static void recv_turtles(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_turtles(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void turtlesT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
 public:
};

} // cpp2
