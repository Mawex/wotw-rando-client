#include <interception_macros.h>

namespace app::methods::System::Text::UTF32Encoding {
IL2CPP_REGISTER_METHOD(0x027C77C0, void, __ctor, (UTF32Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027C7800, void, __ctor, (UTF32Encoding * __this, bool bigEndian, bool byteOrderMark));
IL2CPP_REGISTER_METHOD(0x027C7860, void, __ctor, (UTF32Encoding * __this, bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters));
IL2CPP_REGISTER_METHOD(0x027C78E0, void, SetDefaultFallbacks, (UTF32Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027C7B30, int32_t, GetByteCount, (UTF32Encoding * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04707E88, UTF32Encoding_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C7D00, int32_t, GetByteCount, (UTF32Encoding * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04722280, UTF32Encoding_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C7DE0, int32_t, GetByteCount, (UTF32Encoding * __this, uint16_t * chars, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477EA98, UTF32Encoding_GetByteCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C7F20, int32_t, GetBytes, (UTF32Encoding * __this, String * s, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04748148, UTF32Encoding_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C81B0, int32_t, GetBytes, (UTF32Encoding * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x0477B6E8, UTF32Encoding_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C8450, int32_t, GetBytes, (UTF32Encoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x0471D128, UTF32Encoding_GetBytes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C85D0, int32_t, GetCharCount, (UTF32Encoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047626E0, UTF32Encoding_GetCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C87A0, int32_t, GetCharCount, (UTF32Encoding * __this, uint8_t * bytes, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04737FA0, UTF32Encoding_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C88E0, int32_t, GetChars, (UTF32Encoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHODINFO(0x04742DF0, UTF32Encoding_GetChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C8B80, int32_t, GetChars, (UTF32Encoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04714B00, UTF32Encoding_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C8D00, String *, GetString, (UTF32Encoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04776BC8, UTF32Encoding_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C8ED0, int32_t, GetByteCount, (UTF32Encoding * __this, uint16_t * chars, int32_t count, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x04710290, UTF32Encoding_GetByteCount_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C92C0, int32_t, GetBytes, (UTF32Encoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x0473F310, UTF32Encoding_GetBytes_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C98C0, int32_t, GetCharCount, (UTF32Encoding * __this, uint8_t * bytes, int32_t count, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHODINFO(0x04707348, UTF32Encoding_GetCharCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C9D30, int32_t, GetChars, (UTF32Encoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHOD(0x027CA360, uint32_t, GetSurrogate, (UTF32Encoding * __this, uint16_t cHigh, uint16_t cLow));
IL2CPP_REGISTER_METHOD(0x027CA380, uint16_t, GetHighSurrogate, (UTF32Encoding * __this, uint32_t iChar));
IL2CPP_REGISTER_METHOD(0x027CA3A0, uint16_t, GetLowSurrogate, (UTF32Encoding * __this, uint32_t iChar));
IL2CPP_REGISTER_METHOD(0x027CA3C0, Decoder *, GetDecoder, (UTF32Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CA530, Encoder *, GetEncoder, (UTF32Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CA6A0, int32_t, GetMaxByteCount, (UTF32Encoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04707AE0, UTF32Encoding_GetMaxByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CA820, int32_t, GetMaxCharCount, (UTF32Encoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x047239F8, UTF32Encoding_GetMaxCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CA940, Byte__Array *, GetPreamble, (UTF32Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CAAA0, bool, Equals, (UTF32Encoding * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x027CABB0, int32_t, GetHashCode, (UTF32Encoding * __this));
}
