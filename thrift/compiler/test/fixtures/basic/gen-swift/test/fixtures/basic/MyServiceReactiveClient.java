/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import java.util.*;
import org.apache.thrift.protocol.*;

public class MyServiceReactiveClient 
  implements MyService.Reactive {
  private final org.apache.thrift.ProtocolId _protocolId;
  private final reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient;

  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _ping_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _getRandomData_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _sink_SINK_FIELD_DESC = new TField("sink", TType.I64, (short)1);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _sink_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _putDataById_ID_FIELD_DESC = new TField("id", TType.I64, (short)1);
  private static final TField _putDataById_DATA_FIELD_DESC = new TField("data", TType.STRING, (short)2);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _putDataById_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _hasDataById_ID_FIELD_DESC = new TField("id", TType.I64, (short)1);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _hasDataById_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _getDataById_ID_FIELD_DESC = new TField("id", TType.I64, (short)1);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _getDataById_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _deleteDataById_ID_FIELD_DESC = new TField("id", TType.I64, (short)1);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _deleteDataById_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final TField _lobDataById_ID_FIELD_DESC = new TField("id", TType.I64, (short)1);
  private static final TField _lobDataById_DATA_FIELD_DESC = new TField("data", TType.STRING, (short)2);
  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _lobDataById_EXCEPTION_READERS = java.util.Collections.emptyMap();

  static {
  }

  public MyServiceReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient) {
    
    this._protocolId = _protocolId;
    this._rpcClient = _rpcClient;
  }

  @java.lang.Override
  public void close() {}

  private com.facebook.swift.transport.payload.Writer _createpingWriter() {
    return oprot -> {
      try {

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _ping_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> ping( final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("ping")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createpingWriter(),
                    _ping_READER,
                    _ping_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> ping() {
    return ping( com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _creategetRandomDataWriter() {
    return oprot -> {
      try {

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _getRandomData_READER =
    oprot -> {
              try {
                String _r = oprot.readString();
                return _r;


              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<String> getRandomData( final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("getRandomData")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<String> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _creategetRandomDataWriter(),
                    _getRandomData_READER,
                    _getRandomData_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<String> getRandomData() {
    return getRandomData( com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _createsinkWriter(final long sink) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_sink_SINK_FIELD_DESC);

          long _iter0 = sink;

          oprot.writeI64(sink);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _sink_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> sink(final long sink,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("sink")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createsinkWriter(sink),
                    _sink_READER,
                    _sink_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> sink(final long sink) {
    return sink(sink,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _createputDataByIdWriter(final long id, final String data) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_putDataById_ID_FIELD_DESC);

          long _iter0 = id;

          oprot.writeI64(id);
          oprot.writeFieldEnd();
        }

        {
          oprot.writeFieldBegin(_putDataById_DATA_FIELD_DESC);

          String _iter0 = data;

          oprot.writeString(data);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _putDataById_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> putDataById(final long id, final String data,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("putDataById")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createputDataByIdWriter(id, data),
                    _putDataById_READER,
                    _putDataById_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> putDataById(final long id, final String data) {
    return putDataById(id, data,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _createhasDataByIdWriter(final long id) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_hasDataById_ID_FIELD_DESC);

          long _iter0 = id;

          oprot.writeI64(id);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _hasDataById_READER =
    oprot -> {
              try {
                boolean _r = oprot.readBool();
                return _r;


              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Boolean> hasDataById(final long id,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("hasDataById")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Boolean> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createhasDataByIdWriter(id),
                    _hasDataById_READER,
                    _hasDataById_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Boolean> hasDataById(final long id) {
    return hasDataById(id,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _creategetDataByIdWriter(final long id) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_getDataById_ID_FIELD_DESC);

          long _iter0 = id;

          oprot.writeI64(id);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _getDataById_READER =
    oprot -> {
              try {
                String _r = oprot.readString();
                return _r;


              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<String> getDataById(final long id,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("getDataById")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<String> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _creategetDataByIdWriter(id),
                    _getDataById_READER,
                    _getDataById_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<String> getDataById(final long id) {
    return getDataById(id,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _createdeleteDataByIdWriter(final long id) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_deleteDataById_ID_FIELD_DESC);

          long _iter0 = id;

          oprot.writeI64(id);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _deleteDataById_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> deleteDataById(final long id,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("deleteDataById")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createdeleteDataByIdWriter(id),
                    _deleteDataById_READER,
                    _deleteDataById_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> deleteDataById(final long id) {
    return deleteDataById(id,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }

  private com.facebook.swift.transport.payload.Writer _createlobDataByIdWriter(final long id, final String data) {
    return oprot -> {
      try {
        {
          oprot.writeFieldBegin(_lobDataById_ID_FIELD_DESC);

          long _iter0 = id;

          oprot.writeI64(id);
          oprot.writeFieldEnd();
        }

        {
          oprot.writeFieldBegin(_lobDataById_DATA_FIELD_DESC);

          String _iter0 = data;

          oprot.writeString(data);
          oprot.writeFieldEnd();
        }


      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _lobDataById_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> lobDataById(final long id, final String data,  final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("lobDataById")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createlobDataByIdWriter(id, data),
                    _lobDataById_READER,
                    _lobDataById_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> lobDataById(final long id, final String data) {
    return lobDataById(id, data,  com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }


  private static Map<String, String> getHeaders(com.facebook.swift.transport.client.RpcOptions rpcOptions) {
      return rpcOptions.getRequestHeaders() != null ? rpcOptions.getRequestHeaders() : java.util.Collections.emptyMap();
  }
}
