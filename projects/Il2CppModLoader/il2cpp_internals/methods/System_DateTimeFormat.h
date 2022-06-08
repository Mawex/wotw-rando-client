using namespace app;

namespace app::methods::System::DateTimeFormat {
IL2CPP_REGISTER_METHOD(0x028A6D20, void, FormatDigits, (StringBuilder * outputBuffer, int32_t value, int32_t len));
IL2CPP_REGISTER_METHOD(0x028A6DF0, void, FormatDigits, (StringBuilder * outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit));
IL2CPP_REGISTER_METHOD(0x028A6EF0, void, HebrewFormatDigits, (StringBuilder * outputBuffer, int32_t digits));
IL2CPP_REGISTER_METHOD(0x028A6FB0, int32_t, ParseRepeatPattern, (String * format, int32_t pos, uint16_t patternChar));
IL2CPP_REGISTER_METHOD(0x028A7030, String *, FormatDayOfWeek, (int32_t dayOfWeek, int32_t repeat, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x028A7080, String *, FormatMonth, (int32_t month, int32_t repeatCount, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x028A70D0, String *, FormatHebrewMonthName, (DateTime time, int32_t month, int32_t repeatCount, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x028A71A0, int32_t, ParseQuoteString, (String * format, int32_t pos, StringBuilder * result));
IL2CPP_REGISTER_METHODINFO(0x0471E810, DateTimeFormat_ParseQuoteString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028A73B0, int32_t, ParseNextChar, (String * format, int32_t pos));
IL2CPP_REGISTER_METHOD(0x028A73F0, bool, IsUseGenitiveForm, (String * format, int32_t index, int32_t tokenLen, uint16_t patternToMatch));
IL2CPP_REGISTER_METHOD(0x028A7510, String *, FormatCustomized, (DateTime dateTime, String * format, DateTimeFormatInfo * dtfi, TimeSpan offset));
IL2CPP_REGISTER_METHODINFO(0x04787160, DateTimeFormat_FormatCustomized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028A8890, void, FormatCustomizedTimeZone, (DateTime dateTime, TimeSpan offset, String * format, int32_t tokenLen, bool timeOnly, StringBuilder * result));
IL2CPP_REGISTER_METHOD(0x028A8D20, void, FormatCustomizedRoundripTimeZone, (DateTime dateTime, TimeSpan offset, StringBuilder * result));
IL2CPP_REGISTER_METHOD(0x028A9060, String *, GetRealFormat, (String * format, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHODINFO(0x0470DDB8, DateTimeFormat_GetRealFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028A9700, String *, ExpandPredefinedFormat, (String * format, DateTime * dateTime, DateTimeFormatInfo * * dtfi, TimeSpan * offset));
IL2CPP_REGISTER_METHODINFO(0x0471B630, DateTimeFormat_ExpandPredefinedFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028A9B30, String *, Format, (DateTime dateTime, String * format, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x028A9C10, String *, Format, (DateTime dateTime, String * format, DateTimeFormatInfo * dtfi, TimeSpan offset));
IL2CPP_REGISTER_METHOD(0x028A9EE0, String__Array *, GetAllDateTimes, (DateTime dateTime, uint16_t format, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHODINFO(0x047114E8, DateTimeFormat_GetAllDateTimes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028AA370, String__Array *, GetAllDateTimes, (DateTime dateTime, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InvalidFormatForLocal, (String * format, DateTime dateTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InvalidFormatForUtc, (String * format, DateTime dateTime));
IL2CPP_REGISTER_METHOD(0x028AA650, void, __cctor, (MethodInfo * method));
}
