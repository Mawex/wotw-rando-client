#pragma once
#include <interception_macros.h>

namespace app::methods::System::Char {
    IL2CPP_REGISTER_METHOD(0x022A0120, bool, IsLatin1, (uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x022A0130, bool, IsAscii, (uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x022A0140, app::UnicodeCategory__Enum, GetLatin1UnicodeCategory, (uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x001E29D0, int32_t, GetHashCode, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E29E0, bool, Equals_1, (app::Char__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals_2, (app::Char__Boxed * this_ptr, uint16_t obj))
    IL2CPP_REGISTER_METHOD(0x001E29F0, int32_t, CompareTo_1, (app::Char__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04701978, Char_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E2A00, int32_t, CompareTo_2, (app::Char__Boxed * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x00123DF0, app::String *, ToString_1, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E2A10, app::String *, ToString_2, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x022A0550, app::String *, ToString_3, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0570, uint16_t, Parse, (app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x0471AB08, Char_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A0680, bool, TryParse, (app::String * s, uint16_t * result))
    IL2CPP_REGISTER_METHOD(0x022A06B0, bool, IsDigit, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A07A0, bool, CheckLetter, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A07B0, bool, IsLetter, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0910, bool, IsWhiteSpaceLatin1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0940, bool, IsWhiteSpace_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0AF0, bool, IsUpper, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0C30, bool, IsLower_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0D70, bool, CheckPunctuation, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A0D80, bool, IsPunctuation, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0EB0, bool, CheckLetterOrDigit, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A0EC0, bool, IsLetterOrDigit_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0FF0, uint16_t, ToUpper_1, (uint16_t c, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHODINFO(0x04752A80, Char_ToUpper__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A10E0, uint16_t, ToUpper_2, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A11D0, uint16_t, ToUpperInvariant, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A12A0, uint16_t, ToLower_1, (uint16_t c, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHODINFO(0x04755850, Char_ToLower__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A1390, uint16_t, ToLower_2, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A1480, uint16_t, ToLowerInvariant, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x001E2A20, app::TypeCode__Enum, GetTypeCode, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E2A30, bool, IConvertible_ToBoolean, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x04744380, Char_System_IConvertible_ToBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, IConvertible_ToChar, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2A40, int8_t, IConvertible_ToSByte, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2B80, uint8_t, IConvertible_ToByte, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2CC0, int16_t, IConvertible_ToInt16, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2E00, uint16_t, IConvertible_ToUInt16, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2EA0, int32_t, IConvertible_ToInt32, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2F40, uint32_t, IConvertible_ToUInt32, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E2FE0, int64_t, IConvertible_ToInt64, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E3080, uint64_t, IConvertible_ToUInt64, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x001E3120, float, IConvertible_ToSingle, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x047399A0, Char_System_IConvertible_ToSingle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3130, double, IConvertible_ToDouble, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x0477B318, Char_System_IConvertible_ToDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3140, app::Decimal, IConvertible_ToDecimal, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x04700D10, Char_System_IConvertible_ToDecimal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3150, app::DateTime, IConvertible_ToDateTime, (app::Char__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x04743090, Char_System_IConvertible_ToDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3160, app::Object *, IConvertible_ToType, (app::Char__Boxed * this_ptr, app::Type * type, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x022A1960, bool, IsControl, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047671B0, Char_IsControl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A1AF0, bool, IsLetterOrDigit_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047304D0, Char_IsLetterOrDigit_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A1CC0, bool, IsLower_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04730050, Char_IsLower_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A1EA0, bool, CheckNumber, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A1EB0, bool, IsNumber_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2010, bool, IsNumber_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04724A98, Char_IsNumber_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A2220, bool, CheckSeparator, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A2230, bool, IsSeparatorLatin1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2250, bool, IsSeparator, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2380, bool, IsSurrogate_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A23A0, bool, IsSurrogate_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04716258, Char_IsSurrogate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A24E0, bool, CheckSymbol, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A24F0, bool, IsSymbol, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2620, bool, IsWhiteSpace_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477EA90, Char_IsWhiteSpace_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A2870, app::UnicodeCategory__Enum, GetUnicodeCategory_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2960, app::UnicodeCategory__Enum, GetUnicodeCategory_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473D588, Char_GetUnicodeCategory_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A2B00, bool, IsHighSurrogate_1, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2B20, bool, IsHighSurrogate_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474E318, Char_IsHighSurrogate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A2C70, bool, IsLowSurrogate, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2C90, bool, IsSurrogatePair_1, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04787C80, Char_IsSurrogatePair__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A2E10, bool, IsSurrogatePair_2, (uint16_t high_surrogate, uint16_t low_surrogate))
    IL2CPP_REGISTER_METHOD(0x022A2E40, app::String *, ConvertFromUtf32, (int32_t utf32))
    IL2CPP_REGISTER_METHODINFO(0x04787FB8, Char_ConvertFromUtf32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3000, int32_t, ConvertToUtf32, (uint16_t high_surrogate, uint16_t low_surrogate))
    IL2CPP_REGISTER_METHODINFO(0x0477FE08, Char_ConvertToUtf32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3190, void, cctor, ())
}
