#include <interception_macros.h>

namespace app::methods::ChainLightningController {
IL2CPP_REGISTER_METHOD(0x0103BB20, void, Initialize, (ChainLightningController * __this, DamageReceiver * firstDamageReceiver, Damage * damage));
IL2CPP_REGISTER_METHOD(0x0103BF60, void, FindCandidate, (ChainLightningController * __this, Vector3 origin));
IL2CPP_REGISTER_METHOD(0x0103C930, void, DealChainLightningDamage, (ChainLightningController * __this, EnemyEntity * enemy, DamageReceiver * damageReceiver, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ChainLightningController * __this));
}
