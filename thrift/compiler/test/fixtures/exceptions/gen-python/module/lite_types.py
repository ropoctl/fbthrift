#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions



class Fiery(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Fiery"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_Fiery()


    def __str__(self):
        field = self.message
        if field is None:
            return str(field)
        return field



class Serious(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "sonnet",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Serious"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_Serious()


    def __str__(self):
        field = self.sonnet
        if field is None:
            return str(field)
        return field



class ComplexFieldNames(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "error_message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "internal_error_message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ComplexFieldNames"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_ComplexFieldNames()


    def __str__(self):
        field = self.internal_error_message
        if field is None:
            return str(field)
        return field



class CustomFieldNames(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "error_message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "internal_error_message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.CustomFieldNames"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_CustomFieldNames()


    def __str__(self):
        field = self.internal_error_message
        if field is None:
            return str(field)
        return field



class ExceptionWithPrimitiveField(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "error_code",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ExceptionWithPrimitiveField"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_ExceptionWithPrimitiveField()


    def __str__(self):
        field = self.message
        if field is None:
            return str(field)
        return field



class Banal(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Banal"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_Banal()


# This unfortunately has to be down here to prevent circular imports
import module.lite_metadata


def _fbthrift_metadata__exception_Fiery():
    return module.lite_metadata.gen_metadata_exception_Fiery()
def _fbthrift_metadata__exception_Serious():
    return module.lite_metadata.gen_metadata_exception_Serious()
def _fbthrift_metadata__exception_ComplexFieldNames():
    return module.lite_metadata.gen_metadata_exception_ComplexFieldNames()
def _fbthrift_metadata__exception_CustomFieldNames():
    return module.lite_metadata.gen_metadata_exception_CustomFieldNames()
def _fbthrift_metadata__exception_ExceptionWithPrimitiveField():
    return module.lite_metadata.gen_metadata_exception_ExceptionWithPrimitiveField()
def _fbthrift_metadata__exception_Banal():
    return module.lite_metadata.gen_metadata_exception_Banal()

_fbthrift_all_structs = [
    Fiery,
    Serious,
    ComplexFieldNames,
    CustomFieldNames,
    ExceptionWithPrimitiveField,
    Banal,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)


class _fbthrift_Raiser_doBland_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

class _fbthrift_Raiser_doBland_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_Raiser_doRaise_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

class _fbthrift_Raiser_doRaise_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "b",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Banal),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "f",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Fiery),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "s",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Serious),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


class _fbthrift_Raiser_get200_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

class _fbthrift_Raiser_get200_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


class _fbthrift_Raiser_get500_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

class _fbthrift_Raiser_get500_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "f",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Fiery),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "b",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Banal),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "s",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Serious),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_Raiser_doBland_args,
    _fbthrift_Raiser_doBland_result,
    _fbthrift_Raiser_doRaise_args,
    _fbthrift_Raiser_doRaise_result,
    _fbthrift_Raiser_get200_args,
    _fbthrift_Raiser_get200_result,
    _fbthrift_Raiser_get500_args,
    _fbthrift_Raiser_get500_result,
)
