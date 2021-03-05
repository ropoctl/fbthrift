/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import java.util.*;
import org.apache.thrift.protocol.*;

public class MyServicePrioChildReactiveClient  extends test.fixtures.basicannotations.MyServicePrioParentReactiveClient
  implements MyServicePrioChild.Reactive {
  private final org.apache.thrift.ProtocolId _protocolId;
  private final reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient;

  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _pang_EXCEPTION_READERS = java.util.Collections.emptyMap();

  static {
  }

  public MyServicePrioChildReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient) {
    super(_protocolId, _rpcClient);
    this._protocolId = _protocolId;
    this._rpcClient = _rpcClient;
  }

  @java.lang.Override
  public void close() {}

  private com.facebook.swift.transport.payload.Writer _createpangWriter() {
    return oprot -> {
      try {

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _pang_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> pang( final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("pang")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createpangWriter(),
                    _pang_READER,
                    _pang_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> pang() {
    return pang( com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }


  private static Map<String, String> getHeaders(com.facebook.swift.transport.client.RpcOptions rpcOptions) {
      return rpcOptions.getRequestHeaders() != null ? rpcOptions.getRequestHeaders() : java.util.Collections.emptyMap();
  }
}
