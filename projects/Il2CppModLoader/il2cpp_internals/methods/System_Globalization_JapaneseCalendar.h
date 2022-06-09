#include <interception_macros.h>

namespace app::methods::System_Globalization::JapaneseCalendar {
IL2CPP_REGISTER_METHOD(0x02618350, DateTime, get_MinSupportedDateTime, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHOD(0x026183F0, DateTime, get_MaxSupportedDateTime, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHOD(0x02618490, EraInfo__Array *, GetEraInfo, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, EraInfo__Array *, GetErasFromRegistry, ());
IL2CPP_REGISTER_METHOD(0x02618C00, Calendar *, GetDefaultInstance, ());
IL2CPP_REGISTER_METHOD(0x02618DF0, void, __ctor, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475F840, JapaneseCalendar__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ID, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DECE80, int32_t, GetDaysInMonth, (app::JapaneseCalendar * this_ptr, int32_t year, int32_t month, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DECEB0, int32_t, GetDayOfMonth, (app::JapaneseCalendar * this_ptr, app::DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECEF0, DayOfWeek__Enum, GetDayOfWeek, (app::JapaneseCalendar * this_ptr, app::DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECF60, int32_t, GetMonthsInYear, (app::JapaneseCalendar * this_ptr, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DECF90, int32_t, GetEra, (app::JapaneseCalendar * this_ptr, app::DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECFB0, int32_t, GetMonth, (app::JapaneseCalendar * this_ptr, app::DateTime time));
IL2CPP_REGISTER_METHOD(0x01DECFF0, int32_t, GetYear, (app::JapaneseCalendar * this_ptr, app::DateTime time));
IL2CPP_REGISTER_METHOD(0x01DED010, bool, IsLeapYear, (app::JapaneseCalendar * this_ptr, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DED030, DateTime, ToDateTime, (app::JapaneseCalendar * this_ptr, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era));
IL2CPP_REGISTER_METHOD(0x026190B0, int32_t, ToFourDigitYear, (app::JapaneseCalendar * this_ptr, int32_t year));
IL2CPP_REGISTER_METHODINFO(0x0474F808, JapaneseCalendar_ToFourDigitYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DED060, Int32__Array *, get_Eras, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHOD(0x02619280, String__Array *, EraNames, ());
IL2CPP_REGISTER_METHOD(0x026193F0, String__Array *, AbbrevEraNames, ());
IL2CPP_REGISTER_METHOD(0x02619560, String__Array *, EnglishEraNames, ());
IL2CPP_REGISTER_METHOD(0x026196D0, bool, IsValidYear, (app::JapaneseCalendar * this_ptr, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01DED080, int32_t, get_TwoDigitYearMax, (app::JapaneseCalendar * this_ptr));
IL2CPP_REGISTER_METHOD(0x026197D0, void, __cctor, ());
}
