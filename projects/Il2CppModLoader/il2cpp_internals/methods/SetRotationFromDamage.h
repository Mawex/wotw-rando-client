#include <interception_macros.h>

namespace app::methods::SetRotationFromDamage {
IL2CPP_REGISTER_METHOD(0x005A3CA0, void, OnEnable, (SetRotationFromDamage * __this));
IL2CPP_REGISTER_METHOD(0x005A3EA0, void, OnDisable, (SetRotationFromDamage * __this));
IL2CPP_REGISTER_METHOD(0x005A40A0, void, DamageReceived, (SetRotationFromDamage * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0473F008, SetRotationFromDamage_DamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SetRotationFromDamage * __this));
}
