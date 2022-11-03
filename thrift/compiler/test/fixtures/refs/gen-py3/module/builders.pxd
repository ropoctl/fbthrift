#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.cpp.types as _facebook_thrift_annotation_cpp_types
cimport facebook.thrift.annotation.cpp.builders as _facebook_thrift_annotation_cpp_builders

cimport module.types as _module_types

cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint anInteger
    cdef public str aString


cdef class MyField_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint opt_value
    cdef public pint value
    cdef public pint req_value
    cdef public _module_types.MyEnum opt_enum_value
    cdef public _module_types.MyEnum enum_value
    cdef public _module_types.MyEnum req_enum_value
    cdef public str opt_str_value
    cdef public str str_value
    cdef public str req_str_value


cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public object opt_ref
    cdef public object ref
    cdef public object req_ref


cdef class StructWithUnion_Builder(thrift.py3.builder.StructBuilder):
    cdef public object u
    cdef public pfloat aDouble
    cdef public object f


cdef class RecursiveStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public list mes


cdef class StructWithContainers_Builder(thrift.py3.builder.StructBuilder):
    cdef public list list_ref
    cdef public set set_ref
    cdef public dict map_ref
    cdef public list list_ref_unique
    cdef public set set_ref_shared
    cdef public list list_ref_shared_const


cdef class StructWithSharedConst_Builder(thrift.py3.builder.StructBuilder):
    cdef public object opt_shared_const
    cdef public object shared_const
    cdef public object req_shared_const


cdef class Empty_Builder(thrift.py3.builder.StructBuilder):
    pass


cdef class StructWithRef_Builder(thrift.py3.builder.StructBuilder):
    cdef public object def_field
    cdef public object opt_field
    cdef public object req_field


cdef class StructWithBox_Builder(thrift.py3.builder.StructBuilder):
    cdef public str a
    cdef public list b
    cdef public object c


cdef class StructWithNonOptionalBox_Builder(thrift.py3.builder.StructBuilder):
    cdef public str a
    cdef public list b
    cdef public object c


cdef class StructWithInternBox_Builder(thrift.py3.builder.StructBuilder):
    cdef public object field1
    cdef public object field2
    cdef public object field3
    cdef public object field4


cdef class AdaptedStructWithInternBox_Builder(thrift.py3.builder.StructBuilder):
    cdef public object field1
    cdef public object field2
    cdef public object field3
    cdef public object field4


cdef class StructWithRefTypeUnique_Builder(thrift.py3.builder.StructBuilder):
    cdef public object def_field
    cdef public object opt_field
    cdef public object req_field


cdef class StructWithRefTypeShared_Builder(thrift.py3.builder.StructBuilder):
    cdef public object def_field
    cdef public object opt_field
    cdef public object req_field


cdef class StructWithRefTypeSharedConst_Builder(thrift.py3.builder.StructBuilder):
    cdef public object def_field
    cdef public object opt_field
    cdef public object req_field


cdef class StructWithRefAndAnnotCppNoexceptMoveCtor_Builder(thrift.py3.builder.StructBuilder):
    cdef public object def_field


cdef class StructWithString_Builder(thrift.py3.builder.StructBuilder):
    cdef public str def_unique_string_ref
    cdef public str def_shared_string_ref
    cdef public str def_shared_string_const_ref
    cdef public str unique_string_ref
    cdef public str shared_string_ref


