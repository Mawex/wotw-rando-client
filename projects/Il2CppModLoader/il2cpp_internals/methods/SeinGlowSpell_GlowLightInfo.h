using namespace app;

namespace app::methods::SeinGlowSpell_GlowLightInfo {
IL2CPP_REGISTER_METHOD(0x003FC830, SeinGlowSpell_GlowType__Enum, get_GlowType, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_Radius, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Intensity, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x00AEDAD0, void, __ctor, (SeinGlowSpell_GlowLightInfo * __this, float minRadius, float maxRadius, float onDuration, AnimationCurve * turnOnCurve, AnimationCurve * turnOffCurve, SeinGlowSpell_GlowType__Enum glowType, Transform * effect));
IL2CPP_REGISTER_METHOD(0x00AEDB10, void, Update, (SeinGlowSpell_GlowLightInfo * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, IsTurningOn, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE20, bool, IsOn, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE30, bool, IsTurningOff, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE40, bool, IsOff, (SeinGlowSpell_GlowLightInfo * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE50, void, TurnOff, (SeinGlowSpell_GlowLightInfo * __this, bool cancel));
IL2CPP_REGISTER_METHOD(0x00AEDFC0, void, ChangeState, (SeinGlowSpell_GlowLightInfo * __this, SeinGlowSpell_GlowLightState__Enum newState));
IL2CPP_REGISTER_METHOD(0x00AEDFD0, void, Destroy, (SeinGlowSpell_GlowLightInfo * __this));
}
