using namespace app;

namespace app::methods::System::Text::DecoderFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x02449950, void, Reset, (DecoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02449980, void, InternalReset, (DecoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, InternalInitialize, (DecoderFallbackBuffer * __this, uint8_t * byteStart, uint16_t * charEnd));
IL2CPP_REGISTER_METHOD(0x024499A0, bool, InternalFallback, (DecoderFallbackBuffer * __this, Byte__Array * bytes, uint8_t * pBytes, uint16_t * * chars));
IL2CPP_REGISTER_METHODINFO(0x0474E960, DecoderFallbackBuffer_InternalFallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02449C10, int32_t, InternalFallback, (DecoderFallbackBuffer * __this, Byte__Array * bytes, uint8_t * pBytes));
IL2CPP_REGISTER_METHODINFO(0x04710858, DecoderFallbackBuffer_InternalFallback_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02449E70, void, ThrowLastBytesRecursive, (DecoderFallbackBuffer * __this, Byte__Array * bytesUnknown));
IL2CPP_REGISTER_METHODINFO(0x04747D38, DecoderFallbackBuffer_ThrowLastBytesRecursive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DecoderFallbackBuffer * __this));
}
