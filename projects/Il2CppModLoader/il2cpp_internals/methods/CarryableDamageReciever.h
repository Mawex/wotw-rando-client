#include <interception_macros.h>

namespace app::methods::CarryableDamageReciever {
IL2CPP_REGISTER_METHOD(0x00B25A10, void, Awake, (CarryableDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00B25C50, void, OnRecieveDamage, (CarryableDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00B25D30, void, __ctor, (CarryableDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (CarryableDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (CarryableDamageReciever * __this));
}
