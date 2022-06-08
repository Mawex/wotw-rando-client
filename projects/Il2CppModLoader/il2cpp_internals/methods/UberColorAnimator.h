using namespace app;

namespace app::methods::UberColorAnimator {
IL2CPP_REGISTER_METHOD(0x013E5540, GameObject *, get_CurrentTarget, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5610, UberShaderProperty_Color__Enum, ColorPropertyIDFromColorName, (UberColorAnimator * __this, UberColorAnimator_ColorName__Enum colorName));
IL2CPP_REGISTER_METHOD(0x013E5650, Color, get_CurrentColor, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5790, void, set_CurrentColor, (UberColorAnimator * __this, Color value));
IL2CPP_REGISTER_METHOD(0x013E58C0, UberShaderColor *, UberShaderColorFromColorName, (UberColorAnimator * __this, UberColorAnimator_ColorName__Enum colorName, UberShaderComponent * uberShaderComponent));
IL2CPP_REGISTER_METHOD(0x013E5B90, bool, get_IsLooping, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5BA0, void, CacheOriginals, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5C60, void, SampleValue, (UberColorAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x013E5E80, float, get_Duration, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5EB0, void, RestoreToOriginalState, (UberColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E5EE0, void, __ctor, (UberColorAnimator * __this));
}
