#include <interception_macros.h>

namespace app::methods::ElectricSlugEntity {
IL2CPP_REGISTER_METHOD(0x00BF8A10, void, ResolveDamage, (ElectricSlugEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00BF8C20, void, OnAwake, (ElectricSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00BF8DE0, void, OnDestroy, (ElectricSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00BF8FD0, void, ZapTarget, (ElectricSlugEntity * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0471A490, ElectricSlugEntity_ZapTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BF94E0, void, KnockoffFromRail, (ElectricSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00BF97B0, void, Explode, (ElectricSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00BF99B0, void, __ctor, (ElectricSlugEntity * __this));
}
