#include <interception_macros.h>

namespace app::methods::System::Byte {
IL2CPP_REGISTER_METHOD(0x001E1F00, int32_t, CompareTo, (Byte__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04739490, Byte_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E1F10, int32_t, CompareTo, (Byte__Boxed * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x001E1F20, bool, Equals, (Byte__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals, (Byte__Boxed * __this, uint8_t obj));
IL2CPP_REGISTER_METHOD(0x0010E100, int32_t, GetHashCode, (Byte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0229F450, uint8_t, Parse, (String * s, NumberStyles__Enum style));
IL2CPP_REGISTER_METHOD(0x0229F490, uint8_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0229F4C0, uint8_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0229F510, uint8_t, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0476F838, Byte_Parse_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229F650, bool, TryParse, (String * s, uint8_t * result));
IL2CPP_REGISTER_METHOD(0x0229F6C0, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, uint8_t * result));
IL2CPP_REGISTER_METHOD(0x0229F750, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, uint8_t * result));
IL2CPP_REGISTER_METHOD(0x001E1F30, String *, ToString, (Byte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E1F60, String *, ToString, (Byte__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x001E1FA0, String *, ToString, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1FD0, String *, ToString, (Byte__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2010, TypeCode__Enum, GetTypeCode, (Byte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E2020, bool, IConvertible_ToBoolean, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E20C0, uint16_t, IConvertible_ToChar, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2160, int8_t, IConvertible_ToSByte, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010E100, uint8_t, IConvertible_ToByte, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E22A0, int16_t, IConvertible_ToInt16, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2340, uint16_t, IConvertible_ToUInt16, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E23E0, int32_t, IConvertible_ToInt32, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2480, uint32_t, IConvertible_ToUInt32, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2520, int64_t, IConvertible_ToInt64, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E25C0, uint64_t, IConvertible_ToUInt64, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2660, float, IConvertible_ToSingle, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E2700, double, IConvertible_ToDouble, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E27A0, Decimal, IConvertible_ToDecimal, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E28E0, DateTime, IConvertible_ToDateTime, (Byte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x0475C078, Byte_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E28F0, Object *, IConvertible_ToType, (Byte__Boxed * __this, Type * type, IFormatProvider * provider));
}
