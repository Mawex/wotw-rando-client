using namespace app;

namespace app::methods::System::Int16 {
IL2CPP_REGISTER_METHOD(0x001E71E0, int32_t, CompareTo, (Int16__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474BF30, Int16_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001303D0, int32_t, CompareTo, (Int16__Boxed * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x001E71F0, bool, Equals, (Int16__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals, (Int16__Boxed * __this, int16_t obj));
IL2CPP_REGISTER_METHOD(0x001303B0, int32_t, GetHashCode, (Int16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00130280, String *, ToString, (Int16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E7200, String *, ToString, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7230, String *, ToString, (Int16__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7270, String *, ToString, (Int16__Boxed * __this, String * format, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x0238C680, int16_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238C6B0, int16_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238C700, int16_t, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0473D690, Int16_Parse_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238C890, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, int16_t * result));
IL2CPP_REGISTER_METHOD(0x0238C930, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, int16_t * result));
IL2CPP_REGISTER_METHOD(0x001E7280, TypeCode__Enum, GetTypeCode, (Int16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E7290, bool, IConvertible_ToBoolean, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7330, uint16_t, IConvertible_ToChar, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7470, int8_t, IConvertible_ToSByte, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E75C0, uint8_t, IConvertible_ToByte, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00113CC0, int16_t, IConvertible_ToInt16, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7700, uint16_t, IConvertible_ToUInt16, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7840, int32_t, IConvertible_ToInt32, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E78E0, uint32_t, IConvertible_ToUInt32, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7A20, int64_t, IConvertible_ToInt64, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7AC0, uint64_t, IConvertible_ToUInt64, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7C00, float, IConvertible_ToSingle, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7CA0, double, IConvertible_ToDouble, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7D40, Decimal, IConvertible_ToDecimal, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E7E90, DateTime, IConvertible_ToDateTime, (Int16__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x0479A270, Int16_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E7EA0, Object *, IConvertible_ToType, (Int16__Boxed * __this, Type * type, IFormatProvider * provider));
}
