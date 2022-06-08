using namespace app;

namespace app::methods::System::Text::EncodingNLS {
IL2CPP_REGISTER_METHOD(0x02455F00, void, __ctor, (EncodingNLS * __this, int32_t codePage));
IL2CPP_REGISTER_METHOD(0x02455F10, int32_t, GetByteCount, (EncodingNLS * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477E590, EncodingNLS_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024560E0, int32_t, GetByteCount, (EncodingNLS * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04764CA0, EncodingNLS_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024561C0, int32_t, GetByteCount, (EncodingNLS * __this, uint16_t * chars, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047655A0, EncodingNLS_GetByteCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456300, int32_t, GetBytes, (EncodingNLS * __this, String * s, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x0471E4B0, EncodingNLS_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456590, int32_t, GetBytes, (EncodingNLS * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04795518, EncodingNLS_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456830, int32_t, GetBytes, (EncodingNLS * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x0474BA78, EncodingNLS_GetBytes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024569B0, int32_t, GetCharCount, (EncodingNLS * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04770BE0, EncodingNLS_GetCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456B80, int32_t, GetCharCount, (EncodingNLS * __this, uint8_t * bytes, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047861B0, EncodingNLS_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456CC0, int32_t, GetChars, (EncodingNLS * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHODINFO(0x04762160, EncodingNLS_GetChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02456F60, int32_t, GetChars, (EncodingNLS * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04725180, EncodingNLS_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024570E0, String *, GetString, (EncodingNLS * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04731F70, EncodingNLS_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024572B0, Decoder *, GetDecoder, (EncodingNLS * __this));
IL2CPP_REGISTER_METHOD(0x02457420, Encoder *, GetEncoder, (EncodingNLS * __this));
}
