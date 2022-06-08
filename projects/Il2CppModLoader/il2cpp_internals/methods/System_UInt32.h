#include <interception_macros.h>

namespace app::methods::System::UInt32 {
IL2CPP_REGISTER_METHOD(0x00204CC0, int32_t, CompareTo, (UInt32__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04706C08, UInt32_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (UInt32__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x00204CD0, bool, Equals, (UInt32__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (UInt32__Boxed * __this, uint32_t obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (UInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (UInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00204CE0, String *, ToString, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204D10, String *, ToString, (UInt32__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5290, uint32_t, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x027C52C0, uint32_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C52F0, uint32_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5340, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, uint32_t * result));
IL2CPP_REGISTER_METHOD(0x00204D50, TypeCode__Enum, GetTypeCode, (UInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00204D60, bool, IConvertible_ToBoolean, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204E00, uint16_t, IConvertible_ToChar, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204F40, int8_t, IConvertible_ToSByte, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205080, uint8_t, IConvertible_ToByte, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002051C0, int16_t, IConvertible_ToInt16, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205300, uint16_t, IConvertible_ToUInt16, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205440, int32_t, IConvertible_ToInt32, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010E170, uint32_t, IConvertible_ToUInt32, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002054E0, int64_t, IConvertible_ToInt64, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205580, uint64_t, IConvertible_ToUInt64, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205620, float, IConvertible_ToSingle, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002056C0, double, IConvertible_ToDouble, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205760, Decimal, IConvertible_ToDecimal, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002058A0, DateTime, IConvertible_ToDateTime, (UInt32__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04714708, UInt32_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002058B0, Object *, IConvertible_ToType, (UInt32__Boxed * __this, Type * type, IFormatProvider * provider));
}
