#include <interception_macros.h>

namespace app::methods::PoisonousWaterDrip {
IL2CPP_REGISTER_METHOD(0x01431F70, void, Launch, (PoisonousWaterDrip * __this, float speed, Vector3 direction, float gravity, GameObject * owner, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x01431FD0, void, OnBeforeExplodeOnWater, (PoisonousWaterDrip * __this));
IL2CPP_REGISTER_METHOD(0x01431FE0, void, FixedUpdate, (PoisonousWaterDrip * __this));
IL2CPP_REGISTER_METHOD(0x01432190, void, AddPoisonWaterBlob, (PoisonousWaterDrip * __this, bool forced));
IL2CPP_REGISTER_METHOD(0x014324B0, void, __ctor, (PoisonousWaterDrip * __this));
}
