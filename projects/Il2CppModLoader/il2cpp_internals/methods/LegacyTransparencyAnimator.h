using namespace app;

namespace app::methods::LegacyTransparencyAnimator {
IL2CPP_REGISTER_METHOD(0x011291F0, GameObject *, get_EffectiveRoot, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x011292C0, void, PrintOutRendererData, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x011294A0, UberShaderProperty_Color__Enum, get_PropertyToUse, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01129570, void, Awake, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01129640, bool, CanBeAnimated, (LegacyTransparencyAnimator * __this, Renderer * r));
IL2CPP_REGISTER_METHOD(0x011297C0, void, CacheOriginals, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01129B50, void, AddChild, (LegacyTransparencyAnimator * __this, Transform * child));
IL2CPP_REGISTER_METHOD(0x01129F50, void, AddChildren, (LegacyTransparencyAnimator * __this, Transform * childTransform));
IL2CPP_REGISTER_METHOD(0x0112A320, void, Register, (Transform * child));
IL2CPP_REGISTER_METHOD(0x0112A4B0, void, ManuallyRegister, (LegacyTransparencyAnimator * __this, Transform * child));
IL2CPP_REGISTER_METHOD(0x0112A760, void, SampleValue, (LegacyTransparencyAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x0112A830, void, ApplyTransparency, (LegacyTransparencyAnimator * __this, bool force));
IL2CPP_REGISTER_METHOD(0x0112ABE0, void, SetParentOpacity, (LegacyTransparencyAnimator * __this, float opacity, LegacyTransparencyAnimator_AnimateMode__Enum parentAnimateMode));
IL2CPP_REGISTER_METHOD(0x0112AD30, float, get_FinalOpacity, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0112AD80, void, RestoreToOriginalState, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0112B0C0, void, UpdateActiveStates, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0112B260, void, __ctor, (LegacyTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0112B730, void, __cctor, (MethodInfo * method));
}
