#include <interception_macros.h>

namespace app::methods::System::NumberFormatter_CustomInfo {
IL2CPP_REGISTER_METHOD(0x02279FC0, void, GetActiveSection, (String * format, bool * positive, bool zero, int32_t * offset, int32_t * length));
IL2CPP_REGISTER_METHOD(0x0227A470, NumberFormatter_CustomInfo *, Parse, (String * format, int32_t offset, int32_t length, NumberFormatInfo * nfi));
IL2CPP_REGISTER_METHOD(0x0227A910, String *, Format, (NumberFormatter_CustomInfo * __this, String * format, int32_t offset, int32_t length, NumberFormatInfo * nfi, bool positive, StringBuilder * sb_int, StringBuilder * sb_dec, StringBuilder * sb_exp));
IL2CPP_REGISTER_METHOD(0x0227B250, void, __ctor, (NumberFormatter_CustomInfo * __this));
}
