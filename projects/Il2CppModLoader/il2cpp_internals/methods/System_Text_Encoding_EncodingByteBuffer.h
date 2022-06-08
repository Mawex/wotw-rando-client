using namespace app;

namespace app::methods::System::Text::Encoding_EncodingByteBuffer {
IL2CPP_REGISTER_METHOD(0x02454840, void, __ctor, (Encoding_EncodingByteBuffer * __this, Encoding * inEncoding, EncoderNLS * inEncoder, uint8_t * inByteStart, int32_t inByteCount, uint16_t * inCharStart, int32_t inCharCount));
IL2CPP_REGISTER_METHODINFO(0x0470B930, Encoding_EncodingByteBuffer__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02454B00, bool, AddByte, (Encoding_EncodingByteBuffer * __this, uint8_t b, int32_t moreBytesExpected));
IL2CPP_REGISTER_METHOD(0x02454BB0, bool, AddByte, (Encoding_EncodingByteBuffer * __this, uint8_t b1));
IL2CPP_REGISTER_METHOD(0x02454BC0, bool, AddByte, (Encoding_EncodingByteBuffer * __this, uint8_t b1, uint8_t b2));
IL2CPP_REGISTER_METHOD(0x02454C80, bool, AddByte, (Encoding_EncodingByteBuffer * __this, uint8_t b1, uint8_t b2, int32_t moreBytesExpected));
IL2CPP_REGISTER_METHOD(0x02454D60, void, MovePrevious, (Encoding_EncodingByteBuffer * __this, bool bThrow));
IL2CPP_REGISTER_METHOD(0x02454DF0, bool, get_MoreData, (Encoding_EncodingByteBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02454E40, uint16_t, GetNextChar, (Encoding_EncodingByteBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02454EB0, int32_t, get_CharsUsed, (Encoding_EncodingByteBuffer * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Count, (Encoding_EncodingByteBuffer * __this));
}
