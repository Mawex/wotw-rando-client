using namespace app;

namespace app::methods::System::UInt64 {
IL2CPP_REGISTER_METHOD(0x00205980, int32_t, CompareTo, (UInt64__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472B7D8, UInt64_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (UInt64__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x00205990, bool, Equals, (UInt64__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (UInt64__Boxed * __this, uint64_t obj));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (UInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (UInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002059A0, String *, ToString, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002059D0, String *, ToString, (UInt64__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x00205A10, String *, ToString, (UInt64__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5670, uint64_t, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x027C56A0, uint64_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C56D0, uint64_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5720, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, uint64_t * result));
IL2CPP_REGISTER_METHOD(0x00205A50, TypeCode__Enum, GetTypeCode, (UInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00205A60, bool, IConvertible_ToBoolean, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205B00, uint16_t, IConvertible_ToChar, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205C40, int8_t, IConvertible_ToSByte, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205D80, uint8_t, IConvertible_ToByte, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205EC0, int16_t, IConvertible_ToInt16, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206000, uint16_t, IConvertible_ToUInt16, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206140, int32_t, IConvertible_ToInt32, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002061E0, uint32_t, IConvertible_ToUInt32, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206280, int64_t, IConvertible_ToInt64, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, IConvertible_ToUInt64, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002063D0, float, IConvertible_ToSingle, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206480, double, IConvertible_ToDouble, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206530, Decimal, IConvertible_ToDecimal, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00206670, DateTime, IConvertible_ToDateTime, (UInt64__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04760FF0, UInt64_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206680, Object *, IConvertible_ToType, (UInt64__Boxed * __this, Type * type, IFormatProvider * provider));
}
