#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class Empty(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> Empty: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Empty'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Empty') -> bool: ...
    def __gt__(self, other: 'Empty') -> bool: ...
    def __le__(self, other: 'Empty') -> bool: ...
    def __ge__(self, other: 'Empty') -> bool: ...


class Nada(thrift.py3.types.Union, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Nada') -> bool: ...
    def __gt__(self, other: 'Nada') -> bool: ...
    def __le__(self, other: 'Nada') -> bool: ...
    def __ge__(self, other: 'Nada') -> bool: ...

    class Type(thrift.py3.types.Enum):
        EMPTY: Nada.Type = ...

    @staticmethod
    def fromValue(value: _typing.Union[None, ]) -> Nada: ...
    @__property__
    def value(self) -> _typing.Union[None, ]: ...
    @__property__
    def type(self) -> "Nada.Type": ...


