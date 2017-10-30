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
from thrift.py3.exceptions cimport cTException, Error as __Error
cimport thrift.py3.types

cdef extern from "folly/sorted_vector_types.h":
  pass

cdef extern from "gen-cpp2/includes_types.h" namespace "a::different::ns":
    cdef cppclass cAnEnum "a::different::ns::AnEnum":
        bint operator==(cAnEnum&)
    cAnEnum AnEnum__FIELDA "a::different::ns::AnEnum::FIELDA"
    cAnEnum AnEnum__FIELDB "a::different::ns::AnEnum::FIELDB"

cdef cAnEnum AnEnum_to_cpp(value)

cdef extern from "gen-cpp2/includes_types_custom_protocol.h" namespace "a::different::ns":
    # Forward Declaration
    cdef cppclass cAStruct "a::different::ns::AStruct"
    # Forward Declaration
    cdef cppclass cAStructB "a::different::ns::AStructB"

cdef extern from "gen-cpp2/includes_types.h" namespace "a::different::ns":
    cdef cppclass cAStruct__isset "a::different::ns::AStruct::__isset":
        bint FieldA

    cdef cppclass cAStruct "a::different::ns::AStruct":
        cAStruct() except +
        cAStruct(const cAStruct&) except +
        bint operator==(cAStruct&)
        int32_t FieldA
        cAStruct__isset __isset

    cdef cppclass cAStructB__isset "a::different::ns::AStructB::__isset":
        bint FieldA

    cdef cppclass cAStructB "a::different::ns::AStructB":
        cAStructB() except +
        cAStructB(const cAStructB&) except +
        bint operator==(cAStructB&)
        shared_ptr[const cAStruct] FieldA
        cAStructB__isset __isset

    cdef shared_ptr[cAStruct] aliasing_constructor_FieldA "std::shared_ptr<a::different::ns::AStruct>"(shared_ptr[cAStructB]&, cAStruct*)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cAStruct] move(unique_ptr[cAStruct])
    cdef shared_ptr[cAStruct] move_shared "std::move"(shared_ptr[cAStruct])
    cdef unique_ptr[cAStruct] move_unique "std::move"(unique_ptr[cAStruct])
    cdef shared_ptr[cAStructB] move(unique_ptr[cAStructB])
    cdef shared_ptr[cAStructB] move_shared "std::move"(shared_ptr[cAStructB])
    cdef unique_ptr[cAStructB] move_unique "std::move"(unique_ptr[cAStructB])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cAStruct] const_pointer_cast "std::const_pointer_cast<const a::different::ns::AStruct>"(shared_ptr[cAStruct])
    cdef shared_ptr[const cAStructB] const_pointer_cast "std::const_pointer_cast<const a::different::ns::AStructB>"(shared_ptr[cAStructB])

# Forward Definition of the cython struct
cdef class AStruct(thrift.py3.types.Struct)

cdef class AStruct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cAStruct] _cpp_obj

    @staticmethod
    cdef unique_ptr[cAStruct] _make_instance(
        cAStruct* base_instance,
        object FieldA
    ) except *

    @staticmethod
    cdef create(shared_ptr[cAStruct])

# Forward Definition of the cython struct
cdef class AStructB(thrift.py3.types.Struct)

cdef class AStructB(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cAStructB] _cpp_obj
    cdef AStruct __FieldA

    @staticmethod
    cdef unique_ptr[cAStructB] _make_instance(
        cAStructB* base_instance,
        object FieldA
    ) except *

    @staticmethod
    cdef create(shared_ptr[cAStructB])




cdef extern from "gen-cpp2/includes_constants.h" namespace "a::different::ns":
    cdef int64_t cIncludedConstant "a::different::ns::includes_constants::IncludedConstant"
