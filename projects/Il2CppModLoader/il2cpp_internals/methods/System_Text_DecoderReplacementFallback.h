#include <interception_macros.h>

namespace app::methods::System::Text::DecoderReplacementFallback {
IL2CPP_REGISTER_METHOD(0x0244B250, void, __ctor, (DecoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244B2E0, void, __ctor, (DecoderReplacementFallback * __this, String * replacement));
IL2CPP_REGISTER_METHODINFO(0x04791A48, DecoderReplacementFallback__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DefaultString, (DecoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244B4C0, DecoderFallbackBuffer *, CreateFallbackBuffer, (DecoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_MaxCharCount, (DecoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244B640, bool, Equals, (DecoderReplacementFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (DecoderReplacementFallback * __this));
}
