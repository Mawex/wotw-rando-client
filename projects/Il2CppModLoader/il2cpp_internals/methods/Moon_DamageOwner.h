#include <interception_macros.h>

namespace app::methods::Moon::DamageOwner {
IL2CPP_REGISTER_METHOD(0x002FB990, Entity *, get_Entity, (DamageOwner * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Entity, (DamageOwner * __this, Entity * value));
IL2CPP_REGISTER_METHOD(0x00CD0C50, void, ProcessDamage, (DamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00CD0C50, void, HandleFocusShard, (DamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamageOwner * __this));
}
