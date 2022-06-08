#include <interception_macros.h>

namespace app::methods::UberTextureSettingsAnimator {
IL2CPP_REGISTER_METHOD(0x012902E0, Vector2, get_OriginalOffset, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01290300, Vector2, get_OriginalScale, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0074B530, float, get_OriginalRotation, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01290320, void, CacheOriginals, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x012905F0, Vector2, get_CurrentTextureOffset, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x012906B0, void, set_CurrentTextureOffset, (UberTextureSettingsAnimator * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x012907C0, Vector2, get_CurrentTextureScale, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01290880, void, set_CurrentTextureScale, (UberTextureSettingsAnimator * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01290960, float, get_CurrentTextureRotation, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01290A40, void, set_CurrentTextureRotation, (UberTextureSettingsAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x01290B60, UberShaderProperty_Texture__Enum, GetTexturePropertyFromTextureName, (UberTextureSettingsAnimator * __this, UberTextureSettingsAnimator_TextureName__Enum textureName));
IL2CPP_REGISTER_METHOD(0x01290C30, UberShaderTextureBase *, UberShaderTextureBaseFromTextureName, (UberTextureSettingsAnimator * __this, UberTextureSettingsAnimator_TextureName__Enum textureName, UberShaderComponent * uberShaderComponent));
IL2CPP_REGISTER_METHOD(0x01291410, void, SampleValue, (UberTextureSettingsAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01291780, float, get_Duration, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x012918A0, void, RestoreToOriginalState, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291910, bool, get_IsLooping, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291C90, void, __ctor, (UberTextureSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291D60, void, __cctor, ());
}
