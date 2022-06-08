using namespace app;

namespace app::methods::System::SByte {
IL2CPP_REGISTER_METHOD(0x001D8570, int32_t, CompareTo, (SByte__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04721BA0, SByte_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D8580, int32_t, CompareTo, (SByte__Boxed * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x001D8590, bool, Equals, (SByte__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals, (SByte__Boxed * __this, int8_t obj));
IL2CPP_REGISTER_METHOD(0x001D85B0, int32_t, GetHashCode, (SByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D85C0, String *, ToString, (SByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D85F0, String *, ToString, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8620, String *, ToString, (SByte__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8660, String *, ToString, (SByte__Boxed * __this, String * format, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x01EF0A50, int8_t, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01EF0A80, int8_t, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01EF0AD0, int8_t, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04758A48, SByte_Parse_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EF0C60, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, int8_t * result));
IL2CPP_REGISTER_METHOD(0x01EF0D00, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, int8_t * result));
IL2CPP_REGISTER_METHOD(0x001D8670, TypeCode__Enum, GetTypeCode, (SByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D8680, bool, IConvertible_ToBoolean, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8720, uint16_t, IConvertible_ToChar, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010E100, int8_t, IConvertible_ToSByte, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8860, uint8_t, IConvertible_ToByte, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D89A0, int16_t, IConvertible_ToInt16, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8A40, uint16_t, IConvertible_ToUInt16, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8B80, int32_t, IConvertible_ToInt32, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8B90, uint32_t, IConvertible_ToUInt32, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8CD0, int64_t, IConvertible_ToInt64, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8D70, uint64_t, IConvertible_ToUInt64, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8EB0, float, IConvertible_ToSingle, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8F50, double, IConvertible_ToDouble, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D8FF0, Decimal, IConvertible_ToDecimal, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001D9140, DateTime, IConvertible_ToDateTime, (SByte__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x047545B8, SByte_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D9150, Object *, IConvertible_ToType, (SByte__Boxed * __this, Type * type, IFormatProvider * provider));
}
