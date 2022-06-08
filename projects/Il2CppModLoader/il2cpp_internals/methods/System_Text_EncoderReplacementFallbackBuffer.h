using namespace app;

namespace app::methods::System::Text::EncoderReplacementFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x0244EE60, void, __ctor, (EncoderReplacementFallbackBuffer * __this, EncoderReplacementFallback * fallback));
IL2CPP_REGISTER_METHOD(0x0244EEA0, bool, Fallback, (EncoderReplacementFallbackBuffer * __this, uint16_t charUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x0244F060, bool, Fallback, (EncoderReplacementFallbackBuffer * __this, uint16_t charUnknownHigh, uint16_t charUnknownLow, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04713E40, EncoderReplacementFallbackBuffer_Fallback_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244F370, uint16_t, GetNextChar, (EncoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244F3C0, bool, MovePrevious, (EncoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244F3E0, int32_t, get_Remaining, (EncoderReplacementFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x0244F3F0, void, Reset, (EncoderReplacementFallbackBuffer * __this));
}
