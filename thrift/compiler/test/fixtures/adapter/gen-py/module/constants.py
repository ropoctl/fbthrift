#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import sys
from thrift.util.Recursive import fix_spec
from thrift.Thrift import TType, TMessageType, TPriority, TRequestContext, TProcessorEventHandler, TServerInterface, TProcessor, TException, TApplicationException, UnimplementedTypedef
from thrift.protocol.TProtocol import TProtocolException

from json import loads
import sys
if sys.version_info[0] >= 3:
  long = int

import thrift.annotation.cpp.ttypes
import thrift.annotation.python.ttypes
import thrift.annotation.thrift.ttypes
import thrift.annotation.hack.ttypes

import my


from .ttypes import UTF8STRINGS, Foo, Baz, Bar, DirectlyAdapted, StructWithFieldAdapter, TerseAdaptedFields, B, A, MyStruct, SetWithAdapter, StringWithAdapter, ListWithElemAdapter, ListWithElemAdapter_withAdapter, MyI64, DoubleTypedefI64, MyI32, FooWithAdapter, StructWithAdapter, UnionWithAdapter, AdaptedA

var1 = 10

var2 = "20"

var3 = MyStruct(**{
  "field" : 30,
})

