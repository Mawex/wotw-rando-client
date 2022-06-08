#include <interception_macros.h>

namespace app::methods::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer {
IL2CPP_REGISTER_METHOD(0x027CDE00, void, __ctor, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this, UTF7Encoding_DecoderUTF7Fallback * fallback));
IL2CPP_REGISTER_METHOD(0x027CDE10, bool, Fallback, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this, Byte__Array * bytesUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x027CDE60, uint16_t, GetNextChar, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02458690, int32_t, get_Remaining, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x024586A0, void, Reset, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x027CDE80, int32_t, InternalFallback, (UTF7Encoding_DecoderUTF7FallbackBuffer * __this, Byte__Array * bytes, uint8_t * pBytes));
IL2CPP_REGISTER_METHODINFO(0x04787FC0, UTF7Encoding_DecoderUTF7FallbackBuffer_InternalFallback__MethodInfo);
}
