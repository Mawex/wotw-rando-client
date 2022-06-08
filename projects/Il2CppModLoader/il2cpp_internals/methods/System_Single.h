#include <interception_macros.h>

namespace app::methods::System::Single {
IL2CPP_REGISTER_METHOD(0x01E26010, bool, IsInfinity, (float f));
IL2CPP_REGISTER_METHOD(0x01E26030, bool, IsPositiveInfinity, (float f));
IL2CPP_REGISTER_METHOD(0x01E26050, bool, IsNegativeInfinity, (float f));
IL2CPP_REGISTER_METHOD(0x01E26070, bool, IsNaN, (float f));
IL2CPP_REGISTER_METHOD(0x01E26090, bool, IsFinite, (float f));
IL2CPP_REGISTER_METHOD(0x001D4970, int32_t, CompareTo, (Single__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04763FF8, Single_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D4980, int32_t, CompareTo, (Single__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D49E0, bool, Equals, (Single__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001D49F0, bool, Equals, (Single__Boxed * __this, float obj));
IL2CPP_REGISTER_METHOD(0x0014A500, int32_t, GetHashCode, (Single__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4A30, String *, ToString, (Single__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4A60, String *, ToString, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D4AA0, String *, ToString, (Single__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x001D4AE0, String *, ToString, (Single__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E263B0, float, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x01E263E0, float, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E26410, float, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01E26460, float, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x01E26470, bool, TryParse, (String * s, float * result));
IL2CPP_REGISTER_METHOD(0x01E264B0, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, float * result));
IL2CPP_REGISTER_METHOD(0x01E26510, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, float * result));
IL2CPP_REGISTER_METHOD(0x001D4B20, TypeCode__Enum, GetTypeCode, (Single__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4B30, bool, IConvertible_ToBoolean, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D4BF0, uint16_t, IConvertible_ToChar, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04714B78, Single_System_IConvertible_ToChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D4C00, int8_t, IConvertible_ToSByte, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D4D30, uint8_t, IConvertible_ToByte, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D4E60, int16_t, IConvertible_ToInt16, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D4F90, uint16_t, IConvertible_ToUInt16, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D50C0, int32_t, IConvertible_ToInt32, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D51F0, uint32_t, IConvertible_ToUInt32, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D5320, int64_t, IConvertible_ToInt64, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D5450, uint64_t, IConvertible_ToUInt64, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010FDD0, float, IConvertible_ToSingle, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D5580, double, IConvertible_ToDouble, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D5630, Decimal, IConvertible_ToDecimal, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D5790, DateTime, IConvertible_ToDateTime, (Single__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04711AC0, Single_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D57A0, Object *, IConvertible_ToType, (Single__Boxed * __this, Type * type, IFormatProvider * provider));
}
