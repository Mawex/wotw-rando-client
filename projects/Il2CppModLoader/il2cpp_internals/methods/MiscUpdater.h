#include <interception_macros.h>

namespace app::methods::MiscUpdater {
IL2CPP_REGISTER_METHOD(0x01459880, MiscUpdater *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01459920, void, set_Instance, (MiscUpdater * value));
IL2CPP_REGISTER_METHOD(0x014599D0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01459BA0, void, Awake, (MiscUpdater * __this));
IL2CPP_REGISTER_METHOD(0x01459C40, void, OnDestroy, (MiscUpdater * __this));
IL2CPP_REGISTER_METHOD(0x01459CD0, void, Register, (CollisionSoundSource * collisionSoundSource));
IL2CPP_REGISTER_METHOD(0x01459D90, void, Unregister, (CollisionSoundSource * collisionSoundSource));
IL2CPP_REGISTER_METHOD(0x01459E50, void, Register, (LimitedLifetime * limitedLifetime));
IL2CPP_REGISTER_METHOD(0x01459F10, void, Unregister, (LimitedLifetime * limitedLifetime));
IL2CPP_REGISTER_METHOD(0x01459FD0, void, Register, (ParticleSystemEmissionRateOverDistance * particleSystemEmissionRateOverDistance));
IL2CPP_REGISTER_METHOD(0x0145A090, void, Unregister, (ParticleSystemEmissionRateOverDistance * particleSystemEmissionRateOverDistance));
IL2CPP_REGISTER_METHOD(0x0145A150, void, Register, (ProtectiveLightRadial * protectiveLightRadial));
IL2CPP_REGISTER_METHOD(0x0145A210, void, Unregister, (ProtectiveLightRadial * protectiveLightRadial));
IL2CPP_REGISTER_METHOD(0x0145A2D0, void, Register, (UnparentTrailRenderer * unparentTrailRenderer));
IL2CPP_REGISTER_METHOD(0x0145A390, void, Unregister, (UnparentTrailRenderer * unparentTrailRenderer));
IL2CPP_REGISTER_METHOD(0x0145A450, void, Update, (MiscUpdater * __this));
IL2CPP_REGISTER_METHOD(0x0145A930, void, FixedUpdate, (MiscUpdater * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MiscUpdater * __this));
IL2CPP_REGISTER_METHOD(0x0145AC70, void, __cctor, ());
}
