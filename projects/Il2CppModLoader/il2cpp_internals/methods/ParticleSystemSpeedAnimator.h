#include <interception_macros.h>

namespace app::methods::ParticleSystemSpeedAnimator {
IL2CPP_REGISTER_METHOD(0x00445E40, void, CacheOriginals, (ParticleSystemSpeedAnimator * __this, ParticleSystem * particleSystemToAnimate));
IL2CPP_REGISTER_METHOD(0x00445EB0, void, SampleValue, (ParticleSystemSpeedAnimator * __this, float value, ParticleSystem * particleSystemToAnimate));
IL2CPP_REGISTER_METHOD(0x00445F90, void, RestoreToOriginalState, (ParticleSystemSpeedAnimator * __this, ParticleSystem * particleSystemToAnimate));
IL2CPP_REGISTER_METHOD(0x00446000, void, __ctor, (ParticleSystemSpeedAnimator * __this));
}
