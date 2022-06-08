#include <interception_macros.h>

namespace app::methods::System::Text::ASCIIEncoding {
IL2CPP_REGISTER_METHOD(0x02445830, void, __ctor, (ASCIIEncoding * __this));
IL2CPP_REGISTER_METHOD(0x024458C0, void, SetDefaultFallbacks, (ASCIIEncoding * __this));
IL2CPP_REGISTER_METHOD(0x024458F0, int32_t, GetByteCount, (ASCIIEncoding * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047438D0, ASCIIEncoding_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02445AC0, int32_t, GetByteCount, (ASCIIEncoding * __this, String * chars));
IL2CPP_REGISTER_METHODINFO(0x0476ACF0, ASCIIEncoding_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02445BA0, int32_t, GetByteCount, (ASCIIEncoding * __this, uint16_t * chars, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04781FA8, ASCIIEncoding_GetByteCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02445CE0, int32_t, GetBytes, (ASCIIEncoding * __this, String * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x047376B0, ASCIIEncoding_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02445F70, int32_t, GetBytes, (ASCIIEncoding * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04769F38, ASCIIEncoding_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446210, int32_t, GetBytes, (ASCIIEncoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x04748BA0, ASCIIEncoding_GetBytes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446390, int32_t, GetCharCount, (ASCIIEncoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047528C0, ASCIIEncoding_GetCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446560, int32_t, GetCharCount, (ASCIIEncoding * __this, uint8_t * bytes, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04705098, ASCIIEncoding_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024466A0, int32_t, GetChars, (ASCIIEncoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHODINFO(0x04796798, ASCIIEncoding_GetChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446940, int32_t, GetChars, (ASCIIEncoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04725170, ASCIIEncoding_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446AC0, String *, GetString, (ASCIIEncoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x04758BB0, ASCIIEncoding_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02446C90, int32_t, GetByteCount, (ASCIIEncoding * __this, uint16_t * chars, int32_t charCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x0471B7A8, ASCIIEncoding_GetByteCount_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02447050, int32_t, GetBytes, (ASCIIEncoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x04711EC8, ASCIIEncoding_GetBytes_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024475F0, int32_t, GetCharCount, (ASCIIEncoding * __this, uint8_t * bytes, int32_t count, DecoderNLS * decoder));
IL2CPP_REGISTER_METHOD(0x024477C0, int32_t, GetChars, (ASCIIEncoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, DecoderNLS * decoder));
IL2CPP_REGISTER_METHOD(0x02447B40, int32_t, GetMaxByteCount, (ASCIIEncoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x047095A8, ASCIIEncoding_GetMaxByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02447CB0, int32_t, GetMaxCharCount, (ASCIIEncoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x04722140, ASCIIEncoding_GetMaxCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02447E20, Decoder *, GetDecoder, (ASCIIEncoding * __this));
IL2CPP_REGISTER_METHOD(0x02447F90, Encoder *, GetEncoder, (ASCIIEncoding * __this));
}
