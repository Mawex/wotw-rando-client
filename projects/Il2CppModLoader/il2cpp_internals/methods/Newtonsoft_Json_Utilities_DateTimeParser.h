#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::DateTimeParser {
IL2CPP_REGISTER_METHOD(0x01C07B20, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x001C2460, bool, Parse, (DateTimeParser__Boxed * __this, Char__Array * text, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x001C2470, bool, ParseDate, (DateTimeParser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C2480, bool, ParseTimeAndZoneAndWhitespace, (DateTimeParser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C24C0, bool, ParseTime, (DateTimeParser__Boxed * __this, int32_t * start));
IL2CPP_REGISTER_METHOD(0x001C24D0, bool, ParseZone, (DateTimeParser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C24E0, bool, Parse4Digit, (DateTimeParser__Boxed * __this, int32_t start, int32_t * num));
IL2CPP_REGISTER_METHOD(0x001C24F0, bool, Parse2Digit, (DateTimeParser__Boxed * __this, int32_t start, int32_t * num));
IL2CPP_REGISTER_METHOD(0x001C2500, bool, ParseChar, (DateTimeParser__Boxed * __this, int32_t start, uint16_t ch));
}
