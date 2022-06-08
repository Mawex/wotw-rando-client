#include <interception_macros.h>

namespace app::methods::System::Xml::BinXmlDateTime {
IL2CPP_REGISTER_METHOD(0x021E2430, void, Write2Dig, (StringBuilder * sb, int32_t val));
IL2CPP_REGISTER_METHOD(0x021E2560, void, Write4DigNeg, (StringBuilder * sb, int32_t val));
IL2CPP_REGISTER_METHOD(0x021E2660, void, Write3Dec, (StringBuilder * sb, int32_t val));
IL2CPP_REGISTER_METHOD(0x021E2810, void, WriteDate, (StringBuilder * sb, int32_t yr, int32_t mnth, int32_t day));
IL2CPP_REGISTER_METHOD(0x021E29F0, void, WriteTime, (StringBuilder * sb, int32_t hr, int32_t min, int32_t sec, int32_t ms));
IL2CPP_REGISTER_METHOD(0x021E2B30, void, WriteTimeFullPrecision, (StringBuilder * sb, int32_t hr, int32_t min, int32_t sec, int32_t fraction));
IL2CPP_REGISTER_METHOD(0x021E2E70, void, WriteTimeZone, (StringBuilder * sb, TimeSpan zone));
IL2CPP_REGISTER_METHOD(0x021E2FD0, void, WriteTimeZone, (StringBuilder * sb, bool negTimeZone, int32_t hr, int32_t min));
IL2CPP_REGISTER_METHOD(0x021E3100, void, BreakDownXsdDateTime, (int64_t val, int32_t * yr, int32_t * mnth, int32_t * day, int32_t * hr, int32_t * min, int32_t * sec, int32_t * ms));
IL2CPP_REGISTER_METHODINFO(0x04726330, BinXmlDateTime_BreakDownXsdDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E3320, void, BreakDownXsdDate, (int64_t val, int32_t * yr, int32_t * mnth, int32_t * day, bool * negTimeZone, int32_t * hr, int32_t * min));
IL2CPP_REGISTER_METHODINFO(0x04799DA0, BinXmlDateTime_BreakDownXsdDate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E34E0, void, BreakDownXsdTime, (int64_t val, int32_t * hr, int32_t * min, int32_t * sec, int32_t * ms));
IL2CPP_REGISTER_METHODINFO(0x04717590, BinXmlDateTime_BreakDownXsdTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E3650, String *, XsdDateTimeToString, (int64_t val));
IL2CPP_REGISTER_METHOD(0x021E39F0, String *, XsdDateToString, (int64_t val));
IL2CPP_REGISTER_METHOD(0x021E3D20, String *, XsdTimeToString, (int64_t val));
IL2CPP_REGISTER_METHOD(0x021E4010, String *, SqlDateTimeToString, (int32_t dateticks, uint32_t timeticks));
IL2CPP_REGISTER_METHOD(0x021E4150, DateTime, SqlDateTimeToDateTime, (int32_t dateticks, uint32_t timeticks));
IL2CPP_REGISTER_METHOD(0x021E42D0, String *, SqlSmallDateTimeToString, (int16_t dateticks, uint16_t timeticks));
IL2CPP_REGISTER_METHOD(0x021E4460, DateTime, SqlSmallDateTimeToDateTime, (int16_t dateticks, uint16_t timeticks));
IL2CPP_REGISTER_METHOD(0x021E4520, DateTime, XsdKatmaiDateToDateTime, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E45F0, DateTime, XsdKatmaiDateTimeToDateTime, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E46D0, DateTime, XsdKatmaiTimeToDateTime, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E4780, DateTimeOffset, XsdKatmaiDateOffsetToDateTimeOffset, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E4850, DateTimeOffset, XsdKatmaiDateTimeOffsetToDateTimeOffset, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E49A0, DateTimeOffset, XsdKatmaiTimeOffsetToDateTimeOffset, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E4A70, String *, XsdKatmaiDateToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E4D00, String *, XsdKatmaiDateTimeToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E4FE0, String *, XsdKatmaiTimeToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E52D0, String *, XsdKatmaiDateOffsetToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E5590, String *, XsdKatmaiDateTimeOffsetToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E5900, String *, XsdKatmaiTimeOffsetToString, (Byte__Array * data, int32_t offset));
IL2CPP_REGISTER_METHOD(0x021E5C80, int64_t, GetKatmaiDateTicks, (Byte__Array * data, int32_t * pos));
IL2CPP_REGISTER_METHOD(0x021E5D20, int64_t, GetKatmaiTimeTicks, (Byte__Array * data, int32_t * pos));
IL2CPP_REGISTER_METHODINFO(0x0473DE78, BinXmlDateTime_GetKatmaiTimeTicks__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E60B0, int64_t, GetKatmaiTimeZoneTicks, (Byte__Array * data, int32_t pos));
IL2CPP_REGISTER_METHOD(0x021E6120, int32_t, GetFractions, (DateTime dt));
IL2CPP_REGISTER_METHOD(0x021E6260, int32_t, GetFractions, (DateTimeOffset dt));
IL2CPP_REGISTER_METHOD(0x021E6420, void, __cctor, ());
}
