#include <interception_macros.h>

namespace app::methods::System::Boolean {
IL2CPP_REGISTER_METHOD(0x001E1560, int32_t, GetHashCode, (Boolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E1570, String *, ToString, (Boolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E1580, String *, ToString, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1590, bool, Equals, (Boolean__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals, (Boolean__Boxed * __this, bool obj));
IL2CPP_REGISTER_METHOD(0x001E15A0, int32_t, CompareTo, (Boolean__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047698A0, Boolean_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E15B0, int32_t, CompareTo, (Boolean__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0229DDD0, bool, Parse, (String * value));
IL2CPP_REGISTER_METHODINFO(0x04717A60, Boolean_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229DF00, bool, TryParse, (String * value, bool * result));
IL2CPP_REGISTER_METHOD(0x0229E3D0, String *, TrimWhiteSpaceAndNull, (String * value));
IL2CPP_REGISTER_METHOD(0x001E15D0, TypeCode__Enum, GetTypeCode, (Boolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E15E0, bool, IConvertible_ToBoolean, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E15F0, uint16_t, IConvertible_ToChar, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x0471E960, Boolean_System_IConvertible_ToChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E1600, int8_t, IConvertible_ToSByte, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E16A0, uint8_t, IConvertible_ToByte, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1740, int16_t, IConvertible_ToInt16, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E17F0, uint16_t, IConvertible_ToUInt16, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E18A0, int32_t, IConvertible_ToInt32, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1950, uint32_t, IConvertible_ToUInt32, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1A00, int64_t, IConvertible_ToInt64, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1AB0, uint64_t, IConvertible_ToUInt64, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1B60, float, IConvertible_ToSingle, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1C10, double, IConvertible_ToDouble, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1CC0, Decimal, IConvertible_ToDecimal, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001E1E10, DateTime, IConvertible_ToDateTime, (Boolean__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x047644C0, Boolean_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E1E20, Object *, IConvertible_ToType, (Boolean__Boxed * __this, Type * type, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0229E6E0, void, __cctor, ());
}
