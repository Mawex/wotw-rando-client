#include <interception_macros.h>

namespace app::methods::System::Text::InternalEncoderBestFitFallback {
IL2CPP_REGISTER_METHOD(0x02458940, void, __ctor, (InternalEncoderBestFitFallback * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02458950, EncoderFallbackBuffer *, CreateFallbackBuffer, (InternalEncoderBestFitFallback * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_MaxCharCount, (InternalEncoderBestFitFallback * __this));
IL2CPP_REGISTER_METHOD(0x02458AA0, bool, Equals, (InternalEncoderBestFitFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01F3F1A0, int32_t, GetHashCode, (InternalEncoderBestFitFallback * __this));
}
