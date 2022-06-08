#include <interception_macros.h>

namespace app::methods::SpiritGrenadeDamageDealer {
IL2CPP_REGISTER_METHOD(0x00D58E60, void, Awake, (SpiritGrenadeDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x00D58F90, void, DealDamage, (SpiritGrenadeDamageDealer * __this, GameObject * target, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x00D596A0, void, OnRecieveDamage, (SpiritGrenadeDamageDealer * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00D597F0, void, __ctor, (SpiritGrenadeDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (SpiritGrenadeDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (SpiritGrenadeDamageDealer * __this));
}
