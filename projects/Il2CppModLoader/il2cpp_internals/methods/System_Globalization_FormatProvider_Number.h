#include <interception_macros.h>

namespace app::methods::System::Globalization::FormatProvider_Number {
IL2CPP_REGISTER_METHOD(0x02270570, bool, IsWhite, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x030F5360, uint16_t *, MatchChars, (uint16_t * p, String * str));
IL2CPP_REGISTER_METHOD(0x030F5470, uint16_t *, MatchChars, (uint16_t * p, uint16_t * str));
IL2CPP_REGISTER_METHOD(0x030F54C0, bool, ParseNumber, (uint16_t * * str, NumberStyles__Enum options, FormatProvider_Number_NumberBuffer * number, StringBuilder * sb, NumberFormatInfo * numfmt, bool parseDecimal));
IL2CPP_REGISTER_METHOD(0x030F5CF0, bool, TrailingZeros, (ReadOnlySpan_1_Char_ s, int32_t index));
IL2CPP_REGISTER_METHOD(0x030F5DB0, bool, TryStringToNumber, (ReadOnlySpan_1_Char_ str, NumberStyles__Enum options, FormatProvider_Number_NumberBuffer * number, StringBuilder * sb, NumberFormatInfo * numfmt, bool parseDecimal));
IL2CPP_REGISTER_METHOD(0x030F6050, void, Int32ToDecChars, (uint16_t * buffer, int32_t * index, uint32_t value, int32_t digits));
IL2CPP_REGISTER_METHOD(0x030F60B0, uint16_t, ParseFormatSpecifier, (String * format, int32_t * digits));
IL2CPP_REGISTER_METHOD(0x030F6170, String *, NumberToString, (FormatProvider_Number_NumberBuffer number, uint16_t format, int32_t nMaxDigits, NumberFormatInfo * info, bool isDecimal));
IL2CPP_REGISTER_METHODINFO(0x0477B6E0, FormatProvider_Number_NumberToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030F68A0, void, FormatCurrency, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x030F6BA0, int32_t, wcslen, (uint16_t * s));
IL2CPP_REGISTER_METHOD(0x030F6BC0, void, FormatFixed, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info, Int32__Array * groupDigits, String * sDecimal, String * sGroup));
IL2CPP_REGISTER_METHODINFO(0x0470F350, FormatProvider_Number_FormatFixed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030F7070, void, FormatNumber, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x030F7310, void, FormatScientific, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info, uint16_t expChar));
IL2CPP_REGISTER_METHOD(0x030F74C0, void, FormatExponent, (StringBuilder * sb, NumberFormatInfo * info, int32_t value, uint16_t expChar, int32_t minDigits, bool positiveSign));
IL2CPP_REGISTER_METHOD(0x030F77A0, void, FormatGeneral, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info, uint16_t expChar, bool bSuppressScientific));
IL2CPP_REGISTER_METHOD(0x030F7D60, void, FormatPercent, (StringBuilder * sb, FormatProvider_Number_NumberBuffer number, int32_t nMinDigits, int32_t nMaxDigits, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x030F8060, void, RoundNumber, (FormatProvider_Number_NumberBuffer * number, int32_t pos));
IL2CPP_REGISTER_METHOD(0x030F8140, int32_t, FindSection, (String * format, int32_t section));
IL2CPP_REGISTER_METHOD(0x030F81E0, String *, NumberToStringFormat, (FormatProvider_Number_NumberBuffer number, String * format, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x030F9120, void, __cctor, ());
}
