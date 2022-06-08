using namespace app;

namespace app::methods::System::Text::InternalDecoderBestFitFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x02458200, Object *, get_InternalSyncObject, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02458370, void, __ctor, (InternalDecoderBestFitFallbackBuffer * __this, InternalDecoderBestFitFallback * fallback));
IL2CPP_REGISTER_METHOD(0x02458610, bool, Fallback, (InternalDecoderBestFitFallbackBuffer * __this, Byte__Array * bytesUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x02458660, uint16_t, GetNextChar, (InternalDecoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02458690, int32_t, get_Remaining, (InternalDecoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x024586A0, void, Reset, (InternalDecoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, InternalFallback, (InternalDecoderBestFitFallbackBuffer * __this, Byte__Array * bytes, uint8_t * pBytes));
IL2CPP_REGISTER_METHOD(0x024586B0, uint16_t, TryBestFit, (InternalDecoderBestFitFallbackBuffer * __this, Byte__Array * bytesCheck));
}
