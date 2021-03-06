include "thrift/test/EnumTest.thrift"

enum MyQualifiedEnum {
  FOO = 0,
  BAR = 1,
}
const MyQualifiedEnum FOO = BAR

struct MyQualifiedStruct {
  1: optional MyQualifiedEnum field1 = FOO;
  2: optional MyQualifiedEnum field2 = MyQualifiedEnum.FOO;
  3: optional EnumTest.MyEnum1 field3 = EnumTest.ME1_1;
  4: optional EnumTest.MyEnum1 field4 = EnumTest.MyEnum1.ME1_1;
  5: optional EnumTest.MyEnum4 field5 = EnumTest.c_me4_a;
}

enum MyBitMaskEnum {
  kNil = 0,
  kFoo = 1,
  kBar = 2,
  kBaz = 4,
} (cpp.declare_bitwise_ops)

enum MyBitMaskEnumShort {
  kNil = 0,
  kFoo = 1,
  kBar = 2,
  kBaz = 4,
} (cpp.enum_type = 'int16_t', cpp.declare_bitwise_ops)
