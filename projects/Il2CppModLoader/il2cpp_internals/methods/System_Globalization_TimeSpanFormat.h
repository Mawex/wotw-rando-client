#include <interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanFormat {
IL2CPP_REGISTER_METHOD(0x01DF0190, String *, IntToString, (int32_t n, int32_t digits));
IL2CPP_REGISTER_METHOD(0x01DF01C0, String *, Format, (TimeSpan value, String * format, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHODINFO(0x04796A18, TimeSpanFormat_Format__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DF0430, String *, FormatStandard, (TimeSpan value, bool isInvariant, String * format, TimeSpanFormat_Pattern__Enum pattern));
IL2CPP_REGISTER_METHOD(0x01DF0A90, String *, FormatCustomized, (TimeSpan value, String * format, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHODINFO(0x0476F6F8, TimeSpanFormat_FormatCustomized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DF1760, void, __cctor, ());
}
