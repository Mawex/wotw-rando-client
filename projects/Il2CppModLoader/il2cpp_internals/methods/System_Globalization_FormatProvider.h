#include <interception_macros.h>

namespace app::methods::System::Globalization::FormatProvider {
IL2CPP_REGISTER_METHOD(0x030F4FA0, String *, FormatBigInteger, (int32_t precision, int32_t scale, bool sign, String * format, NumberFormatInfo * numberFormatInfo, Char__Array * digits, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x030F5200, bool, TryStringToBigInteger, (ReadOnlySpan_1_Char_ s, NumberStyles__Enum styles, NumberFormatInfo * numberFormatInfo, StringBuilder * receiver, int32_t * precision, int32_t * scale, bool * sign));
}
