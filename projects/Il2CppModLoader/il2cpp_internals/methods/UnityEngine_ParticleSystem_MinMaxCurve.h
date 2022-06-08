#include <interception_macros.h>

namespace app::methods::UnityEngine::ParticleSystem_MinMaxCurve {
IL2CPP_REGISTER_METHOD(0x00248700, void, __ctor, (ParticleSystem_MinMaxCurve__Boxed * __this, float constant));
IL2CPP_REGISTER_METHOD(0x00248720, void, __ctor, (ParticleSystem_MinMaxCurve__Boxed * __this, float multiplier, AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x00248740, void, __ctor, (ParticleSystem_MinMaxCurve__Boxed * __this, float min, float max));
IL2CPP_REGISTER_METHOD(0x001EB410, float, get_curveMultiplier, (ParticleSystem_MinMaxCurve__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155C0, void, set_curveMultiplier, (ParticleSystem_MinMaxCurve__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x002446A0, float, get_constantMax, (ParticleSystem_MinMaxCurve__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00122E20, void, set_constantMax, (ParticleSystem_MinMaxCurve__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001F2880, float, get_constantMin, (ParticleSystem_MinMaxCurve__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_constantMin, (ParticleSystem_MinMaxCurve__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x002446A0, float, get_constant, (ParticleSystem_MinMaxCurve__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x031353E0, ParticleSystem_MinMaxCurve, operator_, (float constant));
}
