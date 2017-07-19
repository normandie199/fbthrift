#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_set cimport unordered_set as cuset
from libcpp.unordered_map cimport unordered_map as cumap
from thrift.py3.exceptions cimport cTException, Error as __Error
cimport thrift.py3.types




cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "cpp2":
    # Forward Declaration
    cdef cppclass cFoo "cpp2::Foo"

cdef extern from "src/gen-cpp2/module_types.h" namespace "cpp2":
    cdef cppclass cFoo__isset "cpp2::Foo::__isset":
        bint myInteger
        bint myString
        bint myBools
        bint myNumbers

    cdef cppclass cFoo "cpp2::Foo":
        cFoo() except +
        cFoo(const cFoo&) except +
        bint operator==(cFoo&)
        int32_t myInteger
        string myString
        vector[cbool] myBools
        vector[int32_t] myNumbers
        cFoo__isset __isset


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cFoo] move(unique_ptr[cFoo])
    cdef shared_ptr[cFoo] move_shared "std::move"(shared_ptr[cFoo])
    cdef unique_ptr[cFoo] move_unique "std::move"(unique_ptr[cFoo])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cFoo] const_pointer_cast "std::const_pointer_cast<const cpp2::Foo>"(shared_ptr[cFoo])

# Forward Definition of the cython struct
cdef class Foo(thrift.py3.types.Struct)

cdef class Foo(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cFoo] _cpp_obj
    cdef List__bool __myBools
    cdef List__i32 __myNumbers

    @staticmethod
    cdef unique_ptr[cFoo] _make_instance(
        cFoo* base_instance,
        object myInteger,
        object myString,
        object myBools,
        object myNumbers
    ) except *

    @staticmethod
    cdef create(shared_ptr[cFoo])


cdef class List__bool:
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[vector[cbool]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[cbool]])
    @staticmethod
    cdef unique_ptr[vector[cbool]] _make_instance(object items) except *

cdef class List__i32:
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[vector[int32_t]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[int32_t]])
    @staticmethod
    cdef unique_ptr[vector[int32_t]] _make_instance(object items) except *

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[vector[cbool]] move(unique_ptr[vector[cbool]])
    cdef unique_ptr[vector[cbool]] move_unique "std::move"(unique_ptr[vector[cbool]])
    cdef shared_ptr[vector[int32_t]] move(unique_ptr[vector[int32_t]])
    cdef unique_ptr[vector[int32_t]] move_unique "std::move"(unique_ptr[vector[int32_t]])
cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const vector[cbool]] const_pointer_cast "std::const_pointer_cast"(shared_ptr[vector[cbool]])

    cdef shared_ptr[const vector[int32_t]] const_pointer_cast "std::const_pointer_cast"(shared_ptr[vector[int32_t]])

