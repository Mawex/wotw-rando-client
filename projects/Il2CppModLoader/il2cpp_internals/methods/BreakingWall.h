#include <interception_macros.h>

namespace app::methods::BreakingWall {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (BreakingWall * __this));
IL2CPP_REGISTER_METHOD(0x00D50D30, void, Start, (BreakingWall * __this));
IL2CPP_REGISTER_METHOD(0x00D50F60, void, OnRecieveDamage, (BreakingWall * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00D50FE0, void, BreakWall, (BreakingWall * __this));
IL2CPP_REGISTER_METHODINFO(0x0470EEE0, BreakingWall_BreakWall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BreakingWall * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (BreakingWall * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (BreakingWall * __this));
}
