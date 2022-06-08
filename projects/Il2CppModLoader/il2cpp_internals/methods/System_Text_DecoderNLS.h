#include <interception_macros.h>

namespace app::methods::System::Text::DecoderNLS {
IL2CPP_REGISTER_METHOD(0x0244A220, void, __ctor, (DecoderNLS * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0478D268, DecoderNLS__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244A320, void, ISerializable_GetObjectData, (DecoderNLS * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0244A470, void, __ctor, (DecoderNLS * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x0244A4A0, void, __ctor, (DecoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0244A4C0, void, Reset, (DecoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount, (DecoderNLS * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0244A4E0, int32_t, GetCharCount, (DecoderNLS * __this, Byte__Array * bytes, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04751670, DecoderNLS_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244A6D0, int32_t, GetCharCount, (DecoderNLS * __this, uint8_t * bytes, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x047832B8, DecoderNLS_GetCharCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244A840, int32_t, GetChars, (DecoderNLS * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x0244A880, int32_t, GetChars, (DecoderNLS * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04778390, DecoderNLS_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244AB40, int32_t, GetChars, (DecoderNLS * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, bool flush));
IL2CPP_REGISTER_METHODINFO(0x0475A0E0, DecoderNLS_GetChars_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244ACE0, void, Convert, (DecoderNLS * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x0474A010, DecoderNLS_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244B030, void, Convert, (DecoderNLS * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x047666A0, DecoderNLS_Convert_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_MustFlush, (DecoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasState, (DecoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0244B240, void, ClearMustFlush, (DecoderNLS * __this));
}
