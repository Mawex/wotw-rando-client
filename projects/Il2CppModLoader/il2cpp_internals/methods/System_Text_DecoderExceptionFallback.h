#include <interception_macros.h>

namespace app::methods::System::Text::DecoderExceptionFallback {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DecoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x02448D80, DecoderFallbackBuffer *, CreateFallbackBuffer, (DecoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_MaxCharCount, (DecoderExceptionFallback * __this));
IL2CPP_REGISTER_METHOD(0x02448EC0, bool, Equals, (DecoderExceptionFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02448F60, int32_t, GetHashCode, (DecoderExceptionFallback * __this));
}
