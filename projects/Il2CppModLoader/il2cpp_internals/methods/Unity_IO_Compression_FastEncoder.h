using namespace app;

namespace app::methods::Unity::IO::Compression::FastEncoder {
IL2CPP_REGISTER_METHOD(0x02B76210, void, __ctor, (FastEncoder * __this));
IL2CPP_REGISTER_METHOD(0x02B76420, int32_t, get_BytesInHistory, (FastEncoder * __this));
IL2CPP_REGISTER_METHOD(0x02B76440, DeflateInput *, get_UnprocessedInput, (FastEncoder * __this));
IL2CPP_REGISTER_METHOD(0x02B765B0, void, FlushInput, (FastEncoder * __this));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_LastCompressionRatio, (FastEncoder * __this));
IL2CPP_REGISTER_METHOD(0x02B765D0, void, GetBlock, (FastEncoder * __this, DeflateInput * input, OutputBuffer * output, int32_t maxBytesToCopy));
IL2CPP_REGISTER_METHOD(0x02B76640, void, GetCompressedData, (FastEncoder * __this, DeflateInput * input, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76660, void, GetBlockHeader, (FastEncoder * __this, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76670, void, GetBlockFooter, (FastEncoder * __this, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76680, void, GetCompressedOutput, (FastEncoder * __this, DeflateInput * input, OutputBuffer * output, int32_t maxBytesToCopy));
IL2CPP_REGISTER_METHOD(0x02B769B0, void, GetCompressedOutput, (FastEncoder * __this, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76AD0, bool, InputAvailable, (FastEncoder * __this, DeflateInput * input));
IL2CPP_REGISTER_METHOD(0x02B76B10, bool, SafeToWriteTo, (FastEncoder * __this, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76B40, void, WriteEndOfBlock, (FastEncoder * __this, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76C30, void, WriteMatch, (int32_t matchLen, int32_t matchPos, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B76F40, void, WriteChar, (uint8_t b, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x02B77040, void, WriteDeflatePreamble, (OutputBuffer * output));
}
