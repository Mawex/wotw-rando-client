using namespace app;

namespace app::methods::Newtonsoft::Json::Utilities::DateTimeUtils {
IL2CPP_REGISTER_METHOD(0x01C089A0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C08AA0, TimeSpan, GetUtcOffset, (DateTime d));
IL2CPP_REGISTER_METHOD(0x01C08AE0, XmlDateTimeSerializationMode__Enum, ToSerializationMode, (DateTimeKind__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047122E8, DateTimeUtils_ToSerializationMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C08BC0, DateTime, EnsureDateTime, (DateTime value, DateTimeZoneHandling__Enum timeZone));
IL2CPP_REGISTER_METHODINFO(0x0476B010, DateTimeUtils_EnsureDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01968A90, DateTime, SwitchToLocalTime, (DateTime value));
IL2CPP_REGISTER_METHOD(0x01968B20, DateTime, SwitchToUtcTime, (DateTime value));
IL2CPP_REGISTER_METHOD(0x01C08E00, int64_t, ToUniversalTicks, (DateTime dateTime));
IL2CPP_REGISTER_METHOD(0x01C08F00, int64_t, ToUniversalTicks, (DateTime dateTime, TimeSpan offset));
IL2CPP_REGISTER_METHOD(0x01C09070, int64_t, ConvertDateTimeToJavaScriptTicks, (DateTime dateTime, TimeSpan offset));
IL2CPP_REGISTER_METHOD(0x01C09130, int64_t, ConvertDateTimeToJavaScriptTicks, (DateTime dateTime, bool convertToUtc));
IL2CPP_REGISTER_METHOD(0x01C092F0, int64_t, UniversialTicksToJavaScriptTicks, (int64_t universialTicks));
IL2CPP_REGISTER_METHOD(0x01C093B0, DateTime, ConvertJavaScriptTicksToDateTime, (int64_t javaScriptTicks));
IL2CPP_REGISTER_METHOD(0x01C09480, bool, TryParseDateTimeIso, (StringReference text, DateTimeZoneHandling__Enum dateTimeZoneHandling, DateTime * dt));
IL2CPP_REGISTER_METHOD(0x01C09880, bool, TryParseDateTimeOffsetIso, (StringReference text, DateTimeOffset * dt));
IL2CPP_REGISTER_METHOD(0x01C09A70, DateTime, CreateDateTime, (DateTimeParser dateTimeParser));
IL2CPP_REGISTER_METHOD(0x01C09B60, bool, TryParseDateTime, (StringReference s, DateTimeZoneHandling__Enum dateTimeZoneHandling, String * dateFormatString, CultureInfo * culture, DateTime * dt));
IL2CPP_REGISTER_METHOD(0x01C09F50, bool, TryParseDateTime, (String * s, DateTimeZoneHandling__Enum dateTimeZoneHandling, String * dateFormatString, CultureInfo * culture, DateTime * dt));
IL2CPP_REGISTER_METHOD(0x01C0A3A0, bool, TryParseDateTimeOffset, (StringReference s, String * dateFormatString, CultureInfo * culture, DateTimeOffset * dt));
IL2CPP_REGISTER_METHOD(0x01C0A750, bool, TryParseDateTimeOffset, (String * s, String * dateFormatString, CultureInfo * culture, DateTimeOffset * dt));
IL2CPP_REGISTER_METHOD(0x01C0ABB0, bool, TryParseMicrosoftDate, (StringReference text, int64_t * ticks, TimeSpan * offset, DateTimeKind__Enum * kind));
IL2CPP_REGISTER_METHOD(0x01C0AD80, bool, TryParseDateTimeMicrosoft, (StringReference text, DateTimeZoneHandling__Enum dateTimeZoneHandling, DateTime * dt));
IL2CPP_REGISTER_METHOD(0x01C0AF60, bool, TryParseDateTimeExact, (String * text, DateTimeZoneHandling__Enum dateTimeZoneHandling, String * dateFormatString, CultureInfo * culture, DateTime * dt));
IL2CPP_REGISTER_METHOD(0x01C0B090, bool, TryParseDateTimeOffsetMicrosoft, (StringReference text, DateTimeOffset * dt));
IL2CPP_REGISTER_METHOD(0x01C0B210, bool, TryParseDateTimeOffsetExact, (String * text, String * dateFormatString, CultureInfo * culture, DateTimeOffset * dt));
IL2CPP_REGISTER_METHOD(0x01C0B320, bool, TryReadOffset, (StringReference offsetText, int32_t startIndex, TimeSpan * offset));
IL2CPP_REGISTER_METHOD(0x01C0B500, void, WriteDateTimeString, (TextWriter * writer, DateTime value, DateFormatHandling__Enum format, String * formatString, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01C0B6B0, int32_t, WriteDateTimeString, (Char__Array * chars, int32_t start, DateTime value, Nullable_1_TimeSpan_ offset, DateTimeKind__Enum kind, DateFormatHandling__Enum format));
IL2CPP_REGISTER_METHOD(0x01C0BAA0, int32_t, WriteDefaultIsoDate, (Char__Array * chars, int32_t start, DateTime dt));
IL2CPP_REGISTER_METHOD(0x01C0C070, void, CopyIntToCharArray, (Char__Array * chars, int32_t start, int32_t value, int32_t digits));
IL2CPP_REGISTER_METHOD(0x01C0C0F0, int32_t, WriteDateTimeOffset, (Char__Array * chars, int32_t start, TimeSpan offset, DateFormatHandling__Enum format));
IL2CPP_REGISTER_METHOD(0x01C0C350, void, WriteDateTimeOffsetString, (TextWriter * writer, DateTimeOffset value, DateFormatHandling__Enum format, String * formatString, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01C0C520, void, GetDateValues, (DateTime td, int32_t * year, int32_t * month, int32_t * day));
}
