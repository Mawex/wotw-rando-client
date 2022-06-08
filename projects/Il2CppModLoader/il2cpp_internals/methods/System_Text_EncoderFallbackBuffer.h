using namespace app;

namespace app::methods::System::Text::EncoderFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x0244D220, void, Reset, (EncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244D250, void, InternalReset, (EncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244D270, void, InternalInitialize, (EncoderFallbackBuffer * __this, uint16_t * charStart, uint16_t * charEnd, EncoderNLS * encoder, bool setEncoder));
IL2CPP_REGISTER_METHOD(0x0244D2A0, uint16_t, InternalGetNextChar, (EncoderFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244D2E0, bool, InternalFallback, (EncoderFallbackBuffer * __this, uint16_t ch, uint16_t * * chars));
IL2CPP_REGISTER_METHOD(0x0244D4F0, void, ThrowLastCharRecursive, (EncoderFallbackBuffer * __this, int32_t charRecursive));
IL2CPP_REGISTER_METHODINFO(0x04796818, EncoderFallbackBuffer_ThrowLastCharRecursive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EncoderFallbackBuffer * __this));
}
