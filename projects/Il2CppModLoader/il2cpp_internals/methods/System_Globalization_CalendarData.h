#include <interception_macros.h>

namespace app::methods::System::Globalization::CalendarData {
IL2CPP_REGISTER_METHOD(0x01A1EEA0, void, __ctor, (CalendarData * __this));
IL2CPP_REGISTER_METHOD(0x01A1EEB0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01A20530, void, __ctor, (CalendarData * __this, String * localeName, int32_t calendarId, bool bUseUserOverrides));
IL2CPP_REGISTER_METHOD(0x01A20C00, void, InitializeEraNames, (CalendarData * __this, String * localeName, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x01A212A0, void, InitializeAbbreviatedEraNames, (CalendarData * __this, String * localeName, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x01A21730, CalendarData *, GetCalendarData, (int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x01A21940, String *, CalendarIdToCultureName, (int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, nativeGetTwoDigitYearMax, (int32_t calID));
IL2CPP_REGISTER_METHOD(0x01A21AB0, bool, nativeGetCalendarData, (CalendarData * data, String * localeName, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x01A21B00, bool, fill_calendar_data, (CalendarData * __this, String * localeName, int32_t datetimeIndex));
}
