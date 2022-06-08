#include <interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanParse_TimeSpanRawInfo {
IL2CPP_REGISTER_METHOD(0x001D3C30, TimeSpanFormat_FormatLiterals, get_PositiveInvariant, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3C70, TimeSpanFormat_FormatLiterals, get_NegativeInvariant, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3CB0, TimeSpanFormat_FormatLiterals, get_PositiveLocalized, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3D20, TimeSpanFormat_FormatLiterals, get_NegativeLocalized, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D3D90, bool, FullAppCompatMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3DD0, bool, PartialAppCompatMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3E10, bool, FullMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3E50, bool, FullDMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3E90, bool, FullHMMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3ED0, bool, FullDHMMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3F10, bool, FullHMSMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3F50, bool, FullDHMSMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3F90, bool, FullHMSFMatch, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanFormat_FormatLiterals pattern));
IL2CPP_REGISTER_METHOD(0x001D3FD0, void, Init, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x001D3FE0, bool, ProcessToken, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanParse_TimeSpanToken * tok, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x001D3FF0, bool, AddSep, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, String * sep, TimeSpanParse_TimeSpanResult * result));
IL2CPP_REGISTER_METHOD(0x001D4000, bool, AddNum, (TimeSpanParse_TimeSpanRawInfo__Boxed * __this, TimeSpanParse_TimeSpanToken num, TimeSpanParse_TimeSpanResult * result));
}
