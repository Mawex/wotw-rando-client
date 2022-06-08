#include <interception_macros.h>

namespace app::methods::System::Text::DecoderReplacementFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x0244B730, void, __ctor, (DecoderReplacementFallbackBuffer * __this, DecoderReplacementFallback * fallback));
IL2CPP_REGISTER_METHOD(0x0244B760, bool, Fallback, (DecoderReplacementFallbackBuffer * __this, Byte__Array * bytesUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x0244B7B0, uint16_t, GetNextChar, (DecoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244B800, int32_t, get_Remaining, (DecoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244B810, void, Reset, (DecoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x01939E80, int32_t, InternalFallback, (DecoderReplacementFallbackBuffer * __this, Byte__Array * bytes, uint8_t * pBytes));
}
