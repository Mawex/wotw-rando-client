#include <interception_macros.h>

namespace app::methods::System::Text::EncoderExceptionFallback {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EncoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244C480, EncoderFallbackBuffer *, CreateFallbackBuffer, (EncoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_MaxCharCount, (EncoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244C5C0, bool, Equals, (EncoderExceptionFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0244C660, int32_t, GetHashCode, (EncoderExceptionFallback * __this));
}
