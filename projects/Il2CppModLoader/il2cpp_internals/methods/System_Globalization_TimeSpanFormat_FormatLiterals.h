#include <interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanFormat_FormatLiterals {
IL2CPP_REGISTER_METHOD(0x001D3A80, String *, get_Start, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3AC0, String *, get_DayHourSep, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3B00, String *, get_HourMinuteSep, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3B40, String *, get_MinuteSecondSep, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3B80, String *, get_SecondFractionSep, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3BC0, String *, get_End, (TimeSpanFormat_FormatLiterals__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01DF1840, TimeSpanFormat_FormatLiterals, InitInvariant, (bool isNegative));
IL2CPP_REGISTER_METHOD(0x001D3C00, void, Init, (TimeSpanFormat_FormatLiterals__Boxed * __this, String * format, bool useInvariantFieldLengths));
}
