#include <interception_macros.h>

namespace app::methods::WindupSwitch {
IL2CPP_REGISTER_METHOD(0x0057BBF0, bool, CanBeSpiritSlashed, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x0057BC00, void, OnRecieveDamage, (WindupSwitch * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x0057BEE0, void, Update, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x0057BFC0, void, HandleRotation, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x0057C470, void, HandleSwitchLogic, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x0057C6B0, void, RegisterAnimator, (WindupSwitch * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0057C750, void, UnregisterAnimator, (WindupSwitch * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0057C7F0, void, DriverFixedUpdate, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x0057C8F0, void, Serialize, (WindupSwitch * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0057CAB0, float, GetDamageMultiplier, (WindupSwitch * __this, DamageType__Enum damageType));
IL2CPP_REGISTER_METHOD(0x0057CB50, void, __ctor, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (WindupSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (WindupSwitch * __this));
}
