#include <interception_macros.h>

namespace app::methods::System::Text::Decoder {
IL2CPP_REGISTER_METHOD(0x02448100, void, SerializeDecoder, (Decoder * __this, SerializationInfo * info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Decoder * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, DecoderFallback *, get_Fallback, (Decoder * __this));
IL2CPP_REGISTER_METHOD(0x024481A0, DecoderFallbackBuffer *, get_FallbackBuffer, (Decoder * __this));
IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_InternalHasFallbackBuffer, (Decoder * __this));
IL2CPP_REGISTER_METHOD(0x02448210, void, Reset, (Decoder * __this));
IL2CPP_REGISTER_METHOD(0x02448320, int32_t, GetCharCount, (Decoder * __this, Byte__Array * bytes, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHOD(0x02448340, int32_t, GetCharCount, (Decoder * __this, uint8_t * bytes, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04732FF8, Decoder_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024484E0, int32_t, GetChars, (Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, bool flush));
IL2CPP_REGISTER_METHOD(0x02448500, int32_t, GetChars, (Decoder * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, bool flush));
IL2CPP_REGISTER_METHODINFO(0x0478D798, Decoder_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02448770, void, Convert, (Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x04704A70, Decoder_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02448B00, void, Convert, (Decoder * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x047342A0, Decoder_Convert_1__MethodInfo);
}
