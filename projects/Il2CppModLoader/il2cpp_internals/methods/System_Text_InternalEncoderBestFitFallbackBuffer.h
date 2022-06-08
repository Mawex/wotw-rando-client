#include <interception_macros.h>

namespace app::methods::System::Text::InternalEncoderBestFitFallbackBuffer {
IL2CPP_REGISTER_METHOD(0x02458BC0, Object *, get_InternalSyncObject, ());
IL2CPP_REGISTER_METHOD(0x02458D30, void, __ctor, (InternalEncoderBestFitFallbackBuffer * __this, InternalEncoderBestFitFallback * fallback));
IL2CPP_REGISTER_METHOD(0x02458FD0, bool, Fallback, (InternalEncoderBestFitFallbackBuffer * __this, uint16_t charUnknown, int32_t index));
IL2CPP_REGISTER_METHOD(0x02459010, bool, Fallback, (InternalEncoderBestFitFallbackBuffer * __this, uint16_t charUnknownHigh, uint16_t charUnknownLow, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04752098, InternalEncoderBestFitFallbackBuffer_Fallback_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024592D0, uint16_t, GetNextChar, (InternalEncoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02459300, bool, MovePrevious, (InternalEncoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02459320, int32_t, get_Remaining, (InternalEncoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02459330, void, Reset, (InternalEncoderBestFitFallbackBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02459350, uint16_t, TryBestFit, (InternalEncoderBestFitFallbackBuffer * __this, uint16_t cUnknown));
}
