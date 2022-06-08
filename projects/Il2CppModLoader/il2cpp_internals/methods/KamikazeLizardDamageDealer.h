#include <interception_macros.h>

namespace app::methods::KamikazeLizardDamageDealer {
IL2CPP_REGISTER_METHOD(0x00E5B6C0, void, OnEnable, (KamikazeLizardDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x00E5B860, void, OnDisable, (KamikazeLizardDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x00E5BA00, void, CheckForExplosion, (KamikazeLizardDamageDealer * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04707C50, KamikazeLizardDamageDealer_CheckForExplosion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E5BA60, void, __ctor, (KamikazeLizardDamageDealer * __this));
}
