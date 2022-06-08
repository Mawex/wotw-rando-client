#include <interception_macros.h>

namespace app::methods::System::Text::EncoderReplacementFallback {
IL2CPP_REGISTER_METHOD(0x0244E990, void, __ctor, (EncoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244EA20, void, __ctor, (EncoderReplacementFallback * __this, String * replacement));
IL2CPP_REGISTER_METHODINFO(0x047211E0, EncoderReplacementFallback__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DefaultString, (EncoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244EC00, EncoderFallbackBuffer *, CreateFallbackBuffer, (EncoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_MaxCharCount, (EncoderReplacementFallback * __this));
IL2CPP_REGISTER_METHOD(0x0244ED70, bool, Equals, (EncoderReplacementFallback * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (EncoderReplacementFallback * __this));
}
