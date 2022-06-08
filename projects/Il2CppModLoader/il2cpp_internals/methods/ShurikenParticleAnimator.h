#include <interception_macros.h>

namespace app::methods::ShurikenParticleAnimator {
IL2CPP_REGISTER_METHOD(0x0073E1F0, ParticleSystem *, get_ParticleSystem, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073E2C0, void, OnPoolSpawned, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073E310, void, CacheOriginals, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073E3F0, void, CacheAnimators, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073E5D0, void, SampleValue, (ShurikenParticleAnimator * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x0073E750, void, SampleAnimators, (ShurikenParticleAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x0073E870, void, RestoreToOriginalState, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073E990, void, RestoreAnimatorsToOriginalState, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073EAA0, float, get_Duration, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073EB10, bool, get_IsLooping, (ShurikenParticleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0073EB80, void, __ctor, (ShurikenParticleAnimator * __this));
}
