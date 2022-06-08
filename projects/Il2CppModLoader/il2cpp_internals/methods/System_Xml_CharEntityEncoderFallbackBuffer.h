#include <interception_macros.h>

namespace app::methods::System::Xml::CharEntityEncoderFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x021E8320, void, __ctor, (CharEntityEncoderFallbackBuffer * __this, CharEntityEncoderFallback * parent));
IL2CPP_REGISTER_METHOD(0x021E83C0, bool, Fallback, (CharEntityEncoderFallbackBuffer * __this, uint16_t charUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x021E87D0, bool, Fallback, (CharEntityEncoderFallbackBuffer * __this, uint16_t charUnknownHigh, uint16_t charUnknownLow, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477F048, CharEntityEncoderFallbackBuffer_Fallback_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E8C50, uint16_t, GetNextChar, (CharEntityEncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x021E8CA0, bool, MovePrevious, (CharEntityEncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x021E8CC0, int32_t, get_Remaining, (CharEntityEncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x021E8CF0, void, Reset, (CharEntityEncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x021E8D00, int32_t, SurrogateCharToUtf32, (CharEntityEncoderFallbackBuffer * __this, uint16_t highSurrogate, uint16_t lowSurrogate));
}
