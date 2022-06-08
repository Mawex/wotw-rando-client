#include <interception_macros.h>

namespace app::methods::SpiritShotProjectile {
IL2CPP_REGISTER_METHOD(0x00D7BD70, void, Awake, (SpiritShotProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00D7BD90, void, FixedUpdate, (SpiritShotProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00D7BDA0, void, SetExplosionParams, (SpiritShotProjectile * __this, float scale, float cameraShake));
IL2CPP_REGISTER_METHOD(0x00D7BDC0, void, __ctor, (SpiritShotProjectile * __this));
}
