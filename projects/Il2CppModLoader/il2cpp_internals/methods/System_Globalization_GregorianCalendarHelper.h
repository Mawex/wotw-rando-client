using namespace app;

namespace app::methods::System::Globalization::GregorianCalendarHelper {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_MaxYear, (GregorianCalendarHelper * __this));
IL2CPP_REGISTER_METHOD(0x02611CC0, void, __ctor, (GregorianCalendarHelper * __this, Calendar * cal, EraInfo__Array * eraInfo));
IL2CPP_REGISTER_METHOD(0x02611D80, int32_t, GetGregorianYear, (GregorianCalendarHelper * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04754BF8, GregorianCalendarHelper_GetGregorianYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026120C0, bool, IsValidYear, (GregorianCalendarHelper * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x026121B0, int32_t, GetDatePart, (GregorianCalendarHelper * __this, int64_t ticks, int32_t part));
IL2CPP_REGISTER_METHOD(0x02612410, int64_t, GetAbsoluteDate, (int32_t year, int32_t month, int32_t day));
IL2CPP_REGISTER_METHODINFO(0x04730C38, GregorianCalendarHelper_GetAbsoluteDate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02612660, int64_t, DateToTicks, (int32_t year, int32_t month, int32_t day));
IL2CPP_REGISTER_METHOD(0x02612720, int64_t, TimeToTicks, (int32_t hour, int32_t minute, int32_t second, int32_t millisecond));
IL2CPP_REGISTER_METHODINFO(0x04761E28, GregorianCalendarHelper_TimeToTicks__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02612910, void, CheckTicksRange, (GregorianCalendarHelper * __this, int64_t ticks));
IL2CPP_REGISTER_METHODINFO(0x04729448, GregorianCalendarHelper_CheckTicksRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02612B00, int32_t, GetDayOfMonth, (GregorianCalendarHelper * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x02612B30, DayOfWeek__Enum, GetDayOfWeek, (GregorianCalendarHelper * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x02612BA0, int32_t, GetDaysInMonth, (GregorianCalendarHelper * __this, int32_t year, int32_t month, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04777530, GregorianCalendarHelper_GetDaysInMonth__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02612DA0, int32_t, GetEra, (GregorianCalendarHelper * __this, DateTime time));
IL2CPP_REGISTER_METHODINFO(0x04770AF8, GregorianCalendarHelper_GetEra__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02612EF0, Int32__Array *, get_Eras, (GregorianCalendarHelper * __this));
IL2CPP_REGISTER_METHOD(0x02613160, int32_t, GetMonth, (GregorianCalendarHelper * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x02613190, int32_t, GetMonthsInYear, (GregorianCalendarHelper * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x026131B0, int32_t, GetYear, (GregorianCalendarHelper * __this, DateTime time));
IL2CPP_REGISTER_METHODINFO(0x04791E78, GregorianCalendarHelper_GetYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02613320, bool, IsLeapYear, (GregorianCalendarHelper * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x026133A0, DateTime, ToDateTime, (GregorianCalendarHelper * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era));
IL2CPP_REGISTER_METHOD(0x02613570, void, __cctor, (MethodInfo * method));
}
