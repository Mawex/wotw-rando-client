using namespace app;

namespace app::methods::System::Xml::BinHexDecoder {
IL2CPP_REGISTER_METHOD(0x021E17F0, bool, get_IsFull, (BinHexDecoder * __this));
IL2CPP_REGISTER_METHOD(0x021E1800, int32_t, Decode, (BinHexDecoder * __this, Char__Array * chars, int32_t startPos, int32_t len));
IL2CPP_REGISTER_METHODINFO(0x0470DC68, BinHexDecoder_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E1A50, Byte__Array *, Decode, (Char__Array * chars, bool allowOddChars));
IL2CPP_REGISTER_METHODINFO(0x04733B68, BinHexDecoder_Decode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E1C90, void, Decode, (uint16_t * pChars, uint16_t * pCharsEndPos, uint8_t * pBytes, uint8_t * pBytesEndPos, bool * hasHalfByteCached, uint8_t * cachedHalfByte, int32_t * charsDecoded, int32_t * bytesDecoded));
IL2CPP_REGISTER_METHODINFO(0x0470A708, BinHexDecoder_Decode_2__MethodInfo);
}
