using namespace app;

namespace app::methods::System::Text::Latin1Encoding {
IL2CPP_REGISTER_METHOD(0x024594F0, void, __ctor, (Latin1Encoding * __this));
IL2CPP_REGISTER_METHOD(0x02459500, void, __ctor, (Latin1Encoding * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02459550, void, ISerializable_GetObjectData, (Latin1Encoding * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02459750, int32_t, GetByteCount, (Latin1Encoding * __this, uint16_t * chars, int32_t charCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHOD(0x024599A0, int32_t, GetBytes, (Latin1Encoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHOD(0x02459E20, int32_t, GetCharCount, (Latin1Encoding * __this, uint8_t * bytes, int32_t count, DecoderNLS * decoder));
IL2CPP_REGISTER_METHOD(0x02459E30, int32_t, GetChars, (Latin1Encoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, DecoderNLS * decoder));
IL2CPP_REGISTER_METHOD(0x02459ED0, int32_t, GetMaxByteCount, (Latin1Encoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x04767B40, Latin1Encoding_GetMaxByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0245A040, int32_t, GetMaxCharCount, (Latin1Encoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x04700FA0, Latin1Encoding_GetMaxCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0245A1B0, Char__Array *, GetBestFitUnicodeToBytesData, (Latin1Encoding * __this));
IL2CPP_REGISTER_METHOD(0x0245A250, void, __cctor, (MethodInfo * method));
}
