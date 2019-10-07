#!/usr/bin/env python3
import unittest

from testing.clients import TestingService
from testing.services import TestingServiceInterface
from testing.types import (
    Color,
    I32List,
    Integers,
    List__i32,
    Messy,
    Runtime,
    Set__Color,
    SimpleError,
    StrI32ListMap,
    StrStrIntListMapMap,
    easy,
)
from thrift.py3.common import ArgumentSpec, MethodSpec
from thrift.py3.reflection import inspect, inspectable
from thrift.py3.types import Qualifier, StructType


class ReflectionTests(unittest.TestCase):
    def test_struct(self) -> None:
        x = easy(val=1, an_int=Integers(small=300), name="foo", val_list=[1, 2, 3, 4])
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(easy))
        r = inspect(x)
        self.assertEqual(r.name, "easy")
        self.assertEqual(r.kind, StructType.STRUCT)
        self.assertEqual(r.annotations, {"anno1": "foo", "bar": "1"})

    def test_struct_fields(self) -> None:
        r = inspect(Messy)

        self.assertEqual(len(r.fields), 4)

        self.assertEqual(r.fields[0].name, "opt_field")
        self.assertEqual(r.fields[0].type, str)
        self.assertEqual(r.fields[0].qualifier, Qualifier.OPTIONAL)
        self.assertEqual(r.fields[0].default, None)
        self.assertEqual(
            r.fields[0].annotations, {"some": "annotation", "a.b.c": "d.e.f"}
        )

        self.assertEqual(r.fields[1].name, "req_field")
        self.assertEqual(r.fields[1].type, str)
        self.assertEqual(r.fields[1].qualifier, Qualifier.REQUIRED)
        self.assertEqual(r.fields[1].default, None)
        self.assertEqual(r.fields[1].annotations, {})

        self.assertEqual(r.fields[2].name, "unq_field")
        self.assertEqual(r.fields[2].type, str)
        self.assertEqual(r.fields[2].qualifier, Qualifier.NONE)
        self.assertEqual(r.fields[2].default, "xyzzy")
        self.assertEqual(r.fields[2].annotations, {})

        self.assertEqual(r.fields[3].name, "struct_field")
        self.assertEqual(r.fields[3].type, Runtime)
        self.assertEqual(r.fields[3].qualifier, Qualifier.NONE)
        self.assertEqual(
            r.fields[3].default,
            Runtime(bool_val=True, enum_val=Color.blue, int_list_val=[10, 20, 30]),
        )
        self.assertEqual(r.fields[3].annotations, {})

    def test_union(self) -> None:
        x = Integers(large=100)
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(Integers))
        r = inspect(x)
        self.assertEqual(r.name, "Integers")
        self.assertEqual(r.kind, StructType.UNION)
        self.assertEqual(r.annotations, {})

    def test_exception(self) -> None:
        x = SimpleError(color=Color.red)
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(SimpleError))
        r = inspect(x)
        self.assertEqual(r.name, "SimpleError")
        self.assertEqual(r.kind, StructType.EXCEPTION)
        self.assertEqual(r.annotations, {})

    def test_list_element(self) -> None:
        x = List__i32([1, 2, 3])
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(List__i32))
        r = inspect(x)
        self.assertEqual(r.value, int)

    def test_set_element(self) -> None:
        x = Set__Color({Color.red, Color.blue})
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(Set__Color))
        r = inspect(x)
        self.assertEqual(r.value, Color)

    def test_map_key_value(self) -> None:
        x = StrStrIntListMapMap({"a": StrI32ListMap({"b": I32List([7, 8, 9])})})
        self.assertTrue(inspectable(x))
        self.assertTrue(inspectable(StrStrIntListMapMap))
        r = inspect(x)
        self.assertEqual(r.key, str)
        self.assertEqual(r.value, StrI32ListMap)

    def test_interface(self) -> None:
        self.assertTrue(inspectable(TestingService))
        self.assertTrue(inspectable(TestingServiceInterface))
        x = inspect(TestingService)
        self.assertEqual(x, inspect(TestingServiceInterface))
        self.assertEqual(x.name, "TestingService")
        self.assertEqual(
            x.annotations,
            {
                "fun_times": "yes",
                "single_quote": "'",
                "double_quotes": '"""',
                "py3.pass_context": "1",
            },
        )

        methods = [
            MethodSpec(
                name="getName", arguments=[], result=str, exceptions=[], annotations={}
            ),
            MethodSpec(
                name="shutdown",
                arguments=[],
                result=None,
                exceptions=[],
                annotations={},
            ),
            MethodSpec(
                name="invert",
                arguments=[ArgumentSpec(name="value", type=bool, annotations={})],
                result=bool,
                exceptions=[],
                annotations={},
            ),
            MethodSpec(
                name="complex_action",
                arguments=[
                    ArgumentSpec(name="first", type=str, annotations={}),
                    ArgumentSpec(name="second", type=str, annotations={}),
                    ArgumentSpec(name="third", type=int, annotations={}),
                    ArgumentSpec(name="fourth", type=str, annotations={"iv": "4"}),
                ],
                result=int,
                exceptions=[],
                annotations={},
            ),
            MethodSpec(
                name="takes_a_list",
                arguments=[ArgumentSpec(name="ints", type=I32List, annotations={})],
                result=None,
                exceptions=[SimpleError],
                annotations={},
            ),
            MethodSpec(
                name="take_it_easy",
                arguments=[
                    ArgumentSpec(name="how", type=int, annotations={}),
                    ArgumentSpec(name="what", type=easy, annotations={}),
                ],
                result=None,
                exceptions=[],
                annotations={"a": "b.c.d"},
            ),
            MethodSpec(
                name="pick_a_color",
                arguments=[ArgumentSpec(name="color", type=Color, annotations={})],
                result=None,
                exceptions=[],
                annotations={},
            ),
            MethodSpec(
                name="int_sizes",
                arguments=[
                    ArgumentSpec(name="one", type=int, annotations={}),
                    ArgumentSpec(name="two", type=int, annotations={}),
                    ArgumentSpec(name="three", type=int, annotations={}),
                    ArgumentSpec(name="four", type=int, annotations={}),
                ],
                result=None,
                exceptions=[],
                annotations={},
            ),
        ]
        self.assertEqual(x.methods, methods)

    def test_other(self) -> None:
        x = None
        self.assertFalse(inspectable(x))
        self.assertFalse(inspectable(type(x)))
        x = 3
        self.assertFalse(inspectable(x))
        self.assertFalse(inspectable(type(x)))