#include <interception_macros.h>

namespace app::methods::FlyMovement {
IL2CPP_REGISTER_METHOD(0x0127A650, float, get_Speed, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127A660, void, set_Speed, (FlyMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x0127A750, float, get_Angle, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127A770, void, set_Angle, (FlyMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x0127A850, Vector2, get_VelocityAsDelta, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127A960, void, set_VelocityAsDelta, (FlyMovement * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Rigidbody *, get_Rigidbody, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127AB10, void, Awake, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127ACC0, void, OnDestroy, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127AD60, void, FixedUpdate, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127AFC0, void, OnRecieveDamage, (FlyMovement * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_VelocityX, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00724050, void, set_VelocityX, (FlyMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_VelocityY, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_VelocityY, (FlyMovement * __this, float value));
IL2CPP_REGISTER_METHOD(0x0127B080, void, Serialize, (FlyMovement * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (FlyMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x0127B470, void, set_Mask, (FlyMovement * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0127B520, void, __ctor, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (FlyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (FlyMovement * __this));
}
