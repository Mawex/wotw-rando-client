#include <interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanParse {
IL2CPP_REGISTER_METHOD(0x01DF2000, bool, TryTimeToTicks, (bool positive, TimeSpanParse_TimeSpanToken days, TimeSpanParse_TimeSpanToken hours, TimeSpanParse_TimeSpanToken minutes, TimeSpanParse_TimeSpanToken seconds, TimeSpanParse_TimeSpanToken fraction, int64_t * result));
IL2CPP_REGISTER_METHOD(0x01DF2350, TimeSpan, Parse, (String * input, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHODINFO(0x04746B50, TimeSpanParse_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DF2450, bool, TryParse, (String * input, IFormatProvider * formatProvider, TimeSpan * result));
IL2CPP_REGISTER_METHOD(0x01DF2550, bool, TryParseTimeSpan, (String * input, TimeSpanParse_TimeSpanStandardStyles__Enum style, IFormatProvider * formatProvider, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF27C0, bool, ProcessTerminalState, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF29D0, bool, ProcessTerminal_DHMSF, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF2E50, bool, ProcessTerminal_HMS_F_D, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF4850, bool, ProcessTerminal_HM_S_D, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF5ED0, bool, ProcessTerminal_HM, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF6280, bool, ProcessTerminal_D, (TimeSpanParse_TimeSpanRawInfo * raw, TimeSpanParse_TimeSpanStandardStyles__Enum style, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x01DF6610, void, __cctor, ());
}
