#include <interception_macros.h>

namespace app::methods::DamagerAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCA8A0, void, OnStartPlay, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCA8C0, void, OnStopPlay, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCA8E0, void, SampleValue, (DamagerAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00DCAEB0, void, OnCollision, (DamagerAnimator * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00DCB630, EffectSpawn, ProvideDamageEffect, (DamagerAnimator * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0472FCE0, DamagerAnimator_ProvideDamageEffect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCB6C0, float, get_Duration, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, TimelineActiveEditor, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCB6D0, void, __ctor, (DamagerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00DCB9B0, void, __cctor, ());
}
