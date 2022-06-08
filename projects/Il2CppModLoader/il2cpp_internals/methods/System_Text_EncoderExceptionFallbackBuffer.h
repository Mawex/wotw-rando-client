#include <interception_macros.h>

namespace app::methods::System::Text::EncoderExceptionFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EncoderExceptionFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244C670, bool, Fallback, (EncoderExceptionFallbackBuffer * __this, uint16_t charUnknown, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047621F0, EncoderExceptionFallbackBuffer_Fallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244C780, bool, Fallback, (EncoderExceptionFallbackBuffer * __this, uint16_t charUnknownHigh, uint16_t charUnknownLow, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477E770, EncoderExceptionFallbackBuffer_Fallback_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, uint16_t, GetNextChar, (EncoderExceptionFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, MovePrevious, (EncoderExceptionFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Remaining, (EncoderExceptionFallbackBuffer * __this));
}
