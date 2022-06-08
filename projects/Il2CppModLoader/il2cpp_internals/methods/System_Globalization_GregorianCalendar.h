using namespace app;

namespace app::methods::System::Globalization::GregorianCalendar {
IL2CPP_REGISTER_METHOD(0x02610650, void, OnDeserialized, (GregorianCalendar * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHODINFO(0x04799E10, GregorianCalendar_OnDeserialized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02610770, DateTime, get_MinSupportedDateTime, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x02610810, DateTime, get_MaxSupportedDateTime, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x026108B0, Calendar *, GetDefaultInstance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02610AA0, void, __ctor, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x02610AB0, void, __ctor, (GregorianCalendar * __this, GregorianCalendarTypes__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0478D838, GregorianCalendar__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_ID, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x02610C20, int32_t, GetDatePart, (GregorianCalendar * __this, int64_t ticks, int32_t part));
IL2CPP_REGISTER_METHOD(0x02610E50, int32_t, GetDayOfMonth, (GregorianCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x02610E80, DayOfWeek__Enum, GetDayOfWeek, (GregorianCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x02610ED0, int32_t, GetDaysInMonth, (GregorianCalendar * __this, int32_t year, int32_t month, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04742B38, GregorianCalendar_GetDaysInMonth__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, GetEra, (GregorianCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x026111E0, Int32__Array *, get_Eras, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x02611290, int32_t, GetMonth, (GregorianCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x026112C0, int32_t, GetMonthsInYear, (GregorianCalendar * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04762820, GregorianCalendar_GetMonthsInYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02611470, int32_t, GetYear, (GregorianCalendar * __this, DateTime time));
IL2CPP_REGISTER_METHOD(0x026114A0, bool, IsLeapYear, (GregorianCalendar * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04728A90, GregorianCalendar_IsLeapYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026116A0, DateTime, ToDateTime, (GregorianCalendar * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era));
IL2CPP_REGISTER_METHODINFO(0x04709088, GregorianCalendar_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026117E0, bool, TryToDateTime, (GregorianCalendar * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, DateTime * result));
IL2CPP_REGISTER_METHOD(0x02611930, int32_t, get_TwoDigitYearMax, (GregorianCalendar * __this));
IL2CPP_REGISTER_METHOD(0x02611970, int32_t, ToFourDigitYear, (GregorianCalendar * __this, int32_t year));
IL2CPP_REGISTER_METHODINFO(0x0473D918, GregorianCalendar_ToFourDigitYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02611BE0, void, __cctor, (MethodInfo * method));
}
