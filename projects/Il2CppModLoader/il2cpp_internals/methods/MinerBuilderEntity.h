#include <interception_macros.h>

namespace app::methods::MinerBuilderEntity {
IL2CPP_REGISTER_METHOD(0x01447310, void, OnAwake, (MinerBuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x014473B0, void, OnFixedUpdate, (MinerBuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x014475E0, void, ResolveDamage, (MinerBuilderEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x01447600, void, OnDamageReceived, (MinerBuilderEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x01447720, void, StartDialog, (MinerBuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x01447730, void, StopDialog, (MinerBuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x01447740, void, __ctor, (MinerBuilderEntity * __this));
}
