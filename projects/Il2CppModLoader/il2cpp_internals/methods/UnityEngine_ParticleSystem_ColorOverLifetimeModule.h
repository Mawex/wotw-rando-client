#include <interception_macros.h>

namespace app::methods::UnityEngine::ParticleSystem_ColorOverLifetimeModule {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (ParticleSystem_ColorOverLifetimeModule__Boxed * __this, ParticleSystem * particleSystem));
IL2CPP_REGISTER_METHOD(0x002471C0, void, set_color, (ParticleSystem_ColorOverLifetimeModule__Boxed * __this, ParticleSystem_MinMaxGradient value));
IL2CPP_REGISTER_METHOD(0x00247240, ParticleSystem_MinMaxGradient, get_color, (ParticleSystem_ColorOverLifetimeModule__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x03133AA0, void, SetColor, (ParticleSystem * system, ParticleSystem_MinMaxGradient * gradient));
IL2CPP_REGISTER_METHOD(0x03133B00, void, GetColor, (ParticleSystem * system, ParticleSystem_MinMaxGradient * gradient));
}
