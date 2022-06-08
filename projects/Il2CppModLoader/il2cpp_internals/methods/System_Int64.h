#include <interception_macros.h>

namespace app::methods::System::Int64 {
IL2CPP_REGISTER_METHOD(0x001E8970, int32_t, CompareTo, (Int64__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04760138, Int64_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E8980, int32_t, CompareTo, (Int64__Boxed * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x001E89A0, bool, Equals, (Int64__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (Int64__Boxed * __this, int64_t obj));
IL2CPP_REGISTER_METHOD(0x00154D60, int32_t, GetHashCode, (Int64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E89B0, String *, ToString, (Int64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E89E0, String *, ToString, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8A10, String *, ToString, (Int64__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238D1C0, int64_t, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x0238D1F0, int64_t, Parse, (String * s, NumberStyles__Enum style));
IL2CPP_REGISTER_METHOD(0x0238D230, int64_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238D260, int64_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0238D2B0, bool, TryParse, (String * s, int64_t * result));
IL2CPP_REGISTER_METHOD(0x0238D2F0, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, int64_t * result));
IL2CPP_REGISTER_METHOD(0x001E8A50, TypeCode__Enum, GetTypeCode, (Int64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E8A60, bool, IConvertible_ToBoolean, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8B00, uint16_t, IConvertible_ToChar, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8C40, int8_t, IConvertible_ToSByte, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8D90, uint8_t, IConvertible_ToByte, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8E30, int16_t, IConvertible_ToInt16, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E8F80, uint16_t, IConvertible_ToUInt16, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E90C0, int32_t, IConvertible_ToInt32, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E9160, uint32_t, IConvertible_ToUInt32, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, IConvertible_ToInt64, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E92A0, uint64_t, IConvertible_ToUInt64, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E93E0, float, IConvertible_ToSingle, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E9480, double, IConvertible_ToDouble, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E9520, Decimal, IConvertible_ToDecimal, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E9680, DateTime, IConvertible_ToDateTime, (Int64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04746248, Int64_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E9690, Object *, IConvertible_ToType, (Int64__Boxed * __this, Type * type, IFormatProvider * provider));
}
