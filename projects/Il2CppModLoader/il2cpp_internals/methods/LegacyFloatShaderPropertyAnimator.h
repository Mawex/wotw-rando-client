#include <interception_macros.h>

namespace app::methods::LegacyFloatShaderPropertyAnimator {
IL2CPP_REGISTER_METHOD(0x00A24880, int32_t, get_PropertyID, (LegacyFloatShaderPropertyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24900, Renderer *, get_TargetRenderer, (LegacyFloatShaderPropertyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A249D0, Material *, get_TargetMaterial, (LegacyFloatShaderPropertyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24AA0, Material *, GetMaterial, (LegacyFloatShaderPropertyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A25040, void, AnimateIt, (LegacyFloatShaderPropertyAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A251B0, void, RestoreToOriginalState, (LegacyFloatShaderPropertyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A252F0, void, __ctor, (LegacyFloatShaderPropertyAnimator * __this));
}
