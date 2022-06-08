using namespace app;

namespace app::methods::System::UInt16 {
IL2CPP_REGISTER_METHOD(0x00204100, int32_t, CompareTo, (UInt16__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04712150, UInt16_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E2A00, int32_t, CompareTo, (UInt16__Boxed * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x00204110, bool, Equals, (UInt16__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals, (UInt16__Boxed * __this, uint16_t obj));
IL2CPP_REGISTER_METHOD(0x00113CC0, int32_t, GetHashCode, (UInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00204120, String *, ToString, (UInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00204150, String *, ToString, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204180, String *, ToString, (UInt16__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C4C80, uint16_t, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x027C4CB0, uint16_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C4CE0, uint16_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C4D30, uint16_t, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04758B28, UInt16_Parse_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C4E70, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, uint16_t * result));
IL2CPP_REGISTER_METHOD(0x027C4F00, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, uint16_t * result));
IL2CPP_REGISTER_METHOD(0x002041C0, TypeCode__Enum, GetTypeCode, (UInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002041D0, bool, IConvertible_ToBoolean, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204270, uint16_t, IConvertible_ToChar, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204310, int8_t, IConvertible_ToSByte, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204450, uint8_t, IConvertible_ToByte, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204590, int16_t, IConvertible_ToInt16, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, IConvertible_ToUInt16, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002046D0, int32_t, IConvertible_ToInt32, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204770, uint32_t, IConvertible_ToUInt32, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204810, int64_t, IConvertible_ToInt64, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002048B0, uint64_t, IConvertible_ToUInt64, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204950, float, IConvertible_ToSingle, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002049F0, double, IConvertible_ToDouble, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204A90, Decimal, IConvertible_ToDecimal, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204BD0, DateTime, IConvertible_ToDateTime, (UInt16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x047682D0, UInt16_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00204BE0, Object *, IConvertible_ToType, (UInt16__Boxed * __this, Type * type, IFormatProvider * provider));
}
