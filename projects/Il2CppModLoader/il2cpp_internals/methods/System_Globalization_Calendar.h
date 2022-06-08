#include <interception_macros.h>

namespace app::methods::System::Globalization::Calendar {
IL2CPP_REGISTER_METHOD(0x01A1E410, DateTime, get_MinSupportedDateTime, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1E4B0, DateTime, get_MaxSupportedDateTime, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1E550, void, __ctor, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_ID, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x0173D7B0, int32_t, get_BaseCalendarID, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_IsReadOnly, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1E560, Object *, Clone, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1E700, Calendar *, ReadOnly, (Calendar * calendar));
IL2CPP_REGISTER_METHODINFO(0x04731AC8, Calendar_ReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007EA280, void, SetReadOnlyState, (Calendar * __this, bool readOnly));
IL2CPP_REGISTER_METHOD(0x01A1E880, int32_t, get_CurrentEraValue, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1E960, bool, IsLeapYear, (Calendar * __this, int32_t year));
IL2CPP_REGISTER_METHOD(0x01A1E980, DateTime, ToDateTime, (Calendar * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond));
IL2CPP_REGISTER_METHOD(0x01A1E9E0, bool, TryToDateTime, (Calendar * __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, DateTime * result));
IL2CPP_REGISTER_METHOD(0x01A1EB20, bool, IsValidYear, (Calendar * __this, int32_t year, int32_t era));
IL2CPP_REGISTER_METHOD(0x01A1EBB0, bool, IsValidMonth, (Calendar * __this, int32_t year, int32_t month, int32_t era));
IL2CPP_REGISTER_METHOD(0x01A1EC30, bool, IsValidDay, (Calendar * __this, int32_t year, int32_t month, int32_t day, int32_t era));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_TwoDigitYearMax, (Calendar * __this));
IL2CPP_REGISTER_METHOD(0x01A1ECC0, int32_t, ToFourDigitYear, (Calendar * __this, int32_t year));
IL2CPP_REGISTER_METHODINFO(0x0477ACF8, Calendar_ToFourDigitYear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1EE10, int32_t, GetSystemTwoDigitYearSetting, (int32_t CalID, int32_t defaultYearValue));
}
