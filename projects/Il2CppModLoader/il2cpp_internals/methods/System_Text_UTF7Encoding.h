using namespace app;

namespace app::methods::System::Text::UTF7Encoding {
IL2CPP_REGISTER_METHOD(0x027CAC80, void, __ctor, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CAD20, void, __ctor, (UTF7Encoding * __this, bool allowOptionals));
IL2CPP_REGISTER_METHOD(0x027CADD0, void, MakeTables, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CB0C0, void, SetDefaultFallbacks, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x0244F700, void, OnDeserializing, (UTF7Encoding * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x027CB2E0, void, OnDeserialized, (UTF7Encoding * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x027CB3F0, bool, Equals, (UTF7Encoding * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x027CB520, int32_t, GetHashCode, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CB5A0, int32_t, GetByteCount, (UTF7Encoding * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047178A8, UTF7Encoding_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CB770, int32_t, GetByteCount, (UTF7Encoding * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04716E18, UTF7Encoding_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CB850, int32_t, GetByteCount, (UTF7Encoding * __this, uint16_t * chars, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04799DF0, UTF7Encoding_GetByteCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CB990, int32_t, GetBytes, (UTF7Encoding * __this, String * s, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04772BF0, UTF7Encoding_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CBC20, int32_t, GetBytes, (UTF7Encoding * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04782A28, UTF7Encoding_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CBEC0, int32_t, GetBytes, (UTF7Encoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x04762C60, UTF7Encoding_GetBytes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC040, int32_t, GetCharCount, (UTF7Encoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04707340, UTF7Encoding_GetCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC210, int32_t, GetCharCount, (UTF7Encoding * __this, uint8_t * bytes, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04766CD8, UTF7Encoding_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC350, int32_t, GetChars, (UTF7Encoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHODINFO(0x0478EE30, UTF7Encoding_GetChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC5F0, int32_t, GetChars, (UTF7Encoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x0477C638, UTF7Encoding_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC770, String *, GetString, (UTF7Encoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0472B388, UTF7Encoding_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CC940, int32_t, GetByteCount, (UTF7Encoding * __this, uint16_t * chars, int32_t count, EncoderNLS * baseEncoder));
IL2CPP_REGISTER_METHOD(0x027CC970, int32_t, GetBytes, (UTF7Encoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, EncoderNLS * baseEncoder));
IL2CPP_REGISTER_METHOD(0x027CCF60, int32_t, GetCharCount, (UTF7Encoding * __this, uint8_t * bytes, int32_t count, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHOD(0x027CCF90, int32_t, GetChars, (UTF7Encoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHOD(0x027CD360, Decoder *, GetDecoder, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CD4D0, Encoder *, GetEncoder, (UTF7Encoding * __this));
IL2CPP_REGISTER_METHOD(0x027CD640, int32_t, GetMaxByteCount, (UTF7Encoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04791FF8, UTF7Encoding_GetMaxByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027CD760, int32_t, GetMaxCharCount, (UTF7Encoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x0470EEF0, UTF7Encoding_GetMaxCharCount__MethodInfo);
}
