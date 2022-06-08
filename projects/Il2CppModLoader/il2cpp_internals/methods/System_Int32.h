using namespace app;

namespace app::methods::System::Int32 {
IL2CPP_REGISTER_METHOD(0x001E7F80, int32_t, CompareTo, (Int32__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04756800, Int32_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (Int32__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001E7F90, bool, Equals, (Int32__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (Int32__Boxed * __this, int32_t obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (Int32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (Int32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E7FA0, String *, ToString, (Int32__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x001E7FE0, String *, ToString, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8010, String *, ToString, (Int32__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238CD20, int32_t, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x0238CD50, int32_t, Parse, (String * s, NumberStyles__Enum style));
IL2CPP_REGISTER_METHOD(0x0238CD90, int32_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238CDC0, int32_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238CE10, bool, TryParse, (String * s, int32_t * result));
IL2CPP_REGISTER_METHOD(0x0238CE50, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, int32_t * result));
IL2CPP_REGISTER_METHOD(0x001E8050, TypeCode__Enum, GetTypeCode, (Int32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E8060, bool, IConvertible_ToBoolean, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8100, uint16_t, IConvertible_ToChar, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E81A0, int8_t, IConvertible_ToSByte, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8240, uint8_t, IConvertible_ToByte, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E82E0, int16_t, IConvertible_ToInt16, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8380, uint16_t, IConvertible_ToUInt16, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, IConvertible_ToInt32, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8420, uint32_t, IConvertible_ToUInt32, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E84C0, int64_t, IConvertible_ToInt64, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8560, uint64_t, IConvertible_ToUInt64, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8600, float, IConvertible_ToSingle, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E86A0, double, IConvertible_ToDouble, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8740, Decimal, IConvertible_ToDecimal, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8890, DateTime, IConvertible_ToDateTime, (Int32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04725AE8, Int32_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E88A0, Object *, IConvertible_ToType, (Int32__Boxed * __this, Type * type, IFormatProvider * provider));
}
