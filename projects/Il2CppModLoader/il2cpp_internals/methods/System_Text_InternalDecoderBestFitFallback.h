#include <interception_macros.h>

namespace app::methods::System::Text::InternalDecoderBestFitFallback {
IL2CPP_REGISTER_METHOD(0x02457F90, void, __ctor, (InternalDecoderBestFitFallback * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02457FB0, DecoderFallbackBuffer *, CreateFallbackBuffer, (InternalDecoderBestFitFallback * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_MaxCharCount, (InternalDecoderBestFitFallback * __this));
IL2CPP_REGISTER_METHOD(0x02458100, bool, Equals, (InternalDecoderBestFitFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01F3F1A0, int32_t, GetHashCode, (InternalDecoderBestFitFallback * __this));
}
