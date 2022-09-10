#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_python_AsyncClient,
    SyncClient as _fbthrift_python_SyncClient,
    Client as _fbthrift_python_Client,
)
from thrift.python.client.omni_client import InteractionMethodPosition as _fbthrift_InteractionMethodPosition  # type: ignore 
import thrift.python.exceptions as _fbthrift_python_exceptions
import thrift.python.types as _fbthrift_python_types
import python_module_root.my.namespacing.test.hsmodule.thrift_types
import python_module_root.my.namespacing.test.hsmodule.thrift_metadata

class HsTestService(_fbthrift_python_Client["HsTestService.Async", "HsTestService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "hsmodule.HsTestService"
    
    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return python_module_root.my.namespacing.test.hsmodule.thrift_metadata.gen_metadata_service_HsTestService()
    
    class Async(_fbthrift_python_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "hsmodule.HsTestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return python_module_root.my.namespacing.test.hsmodule.thrift_metadata.gen_metadata_service_HsTestService()
    
        async def init(
            self,
            int1: int
        ) -> int:
            _fbthrift_resp = await self._send_request(  # type: ignore 
                "HsTestService",
                "init",
                python_module_root.my.namespacing.test.hsmodule.thrift_types._fbthrift_HsTestService_init_args(
                    int1=int1,),
                python_module_root.my.namespacing.test.hsmodule.thrift_types._fbthrift_HsTestService_init_result,
                
                
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
    class Sync(_fbthrift_python_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "hsmodule.HsTestService"
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return python_module_root.my.namespacing.test.hsmodule.thrift_metadata.gen_metadata_service_HsTestService()
    
        def init(
            self,
            int1: int
        ) -> int:
            _fbthrift_resp = self._send_request(
                "HsTestService",
                "init",
                python_module_root.my.namespacing.test.hsmodule.thrift_types._fbthrift_HsTestService_init_args(
                    int1=int1,),
                python_module_root.my.namespacing.test.hsmodule.thrift_types._fbthrift_HsTestService_init_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
