using namespace app;

namespace app::methods::System::Text::Encoding_EncodingCharBuffer {
IL2CPP_REGISTER_METHOD(0x02454ED0, void, __ctor, (Encoding_EncodingCharBuffer * __this, Encoding * enc, DecoderNLS * decoder, uint16_t * charStart, int32_t charCount, uint8_t * byteStart, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x02454F80, bool, AddChar, (Encoding_EncodingCharBuffer * __this, uint16_t ch, int32_t numBytes));
IL2CPP_REGISTER_METHOD(0x02454FF0, bool, AddChar, (Encoding_EncodingCharBuffer * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x02455060, void, AdjustBytes, (Encoding_EncodingCharBuffer * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02455070, bool, get_MoreData, (Encoding_EncodingCharBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02455080, uint8_t, GetNextByte, (Encoding_EncodingCharBuffer * __this));
IL2CPP_REGISTER_METHOD(0x024550A0, int32_t, get_BytesUsed, (Encoding_EncodingCharBuffer * __this));
IL2CPP_REGISTER_METHOD(0x024550B0, bool, Fallback, (Encoding_EncodingCharBuffer * __this, uint8_t fallbackByte));
IL2CPP_REGISTER_METHOD(0x02455270, bool, Fallback, (Encoding_EncodingCharBuffer * __this, Byte__Array * byteBuffer));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Count, (Encoding_EncodingCharBuffer * __this));
}
