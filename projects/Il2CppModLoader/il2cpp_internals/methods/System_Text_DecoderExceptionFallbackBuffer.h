#include <interception_macros.h>

namespace app::methods::System::Text::DecoderExceptionFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x02448F70, bool, Fallback, (DecoderExceptionFallbackBuffer * __this, Byte__Array * bytesUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x00420EE0, uint16_t, GetNextChar, (DecoderExceptionFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Remaining, (DecoderExceptionFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02448F80, void, Throw, (DecoderExceptionFallbackBuffer * __this, Byte__Array * bytesUnknown, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047381F0, DecoderExceptionFallbackBuffer_Throw__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DecoderExceptionFallbackBuffer * __this));
}
