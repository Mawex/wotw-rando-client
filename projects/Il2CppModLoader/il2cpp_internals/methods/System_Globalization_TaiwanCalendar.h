#include <interception_macros.h>

namespace app::methods::System::Globalization::TaiwanCalendar {
IL2CPP_REGISTER_METHOD(0x01DEC880, Calendar *, GetDefaultInstance, ());
IL2CPP_REGISTER_METHOD(0x01DECA70, DateTime, get_MinSupportedDateTime, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHOD(0x01DECB10, DateTime, get_MaxSupportedDateTime, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHOD(0x01DECBB0, void, __ctor, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B0E0, TaiwanCalendar__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ID, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHOD(0x01DECE80, int32_t, GetDaysInMonth, (TaiwanCalendar * __this, int32_t year, int32_t month, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DECEB0, int32_t, GetDayOfMonth, (TaiwanCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECEF0, DayOfWeek__Enum, GetDayOfWeek, (TaiwanCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECF60, int32_t, GetMonthsInYear, (TaiwanCalendar * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DECF90, int32_t, GetEra, (TaiwanCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECFB0, int32_t, GetMonth, (TaiwanCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECFF0, int32_t, GetYear, (TaiwanCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x01DED010, bool, IsLeapYear, (TaiwanCalendar * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DED030, DateTime, ToDateTime, (TaiwanCalendar * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DED060, Int32__Array *, get_Eras, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHOD(0x01DED080, int32_t, get_TwoDigitYearMax, (TaiwanCalendar * __this));
IL2CPP_REGISTER_METHOD(0x01DED0C0, int32_t, ToFourDigitYear, (TaiwanCalendar * __this, int32_t year));
IL2CPP_REGISTER_METHODINFO(0x04786B78, TaiwanCalendar_ToFourDigitYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DED290, void, __cctor, ());
}
