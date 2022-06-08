#include <interception_macros.h>

namespace app::methods::LaserShooterHommingMissle {
IL2CPP_REGISTER_METHOD(0x00F14000, void, MisslePrefabInstantiation, (LaserShooterHommingMissle * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x00F141E0, void, SetTarget, (LaserShooterHommingMissle * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x00F14200, void, FixedUpdate, (LaserShooterHommingMissle * __this));
IL2CPP_REGISTER_METHOD(0x00F14540, void, OnCollisionEnter, (LaserShooterHommingMissle * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00F14A00, void, __ctor, (LaserShooterHommingMissle * __this));
}
