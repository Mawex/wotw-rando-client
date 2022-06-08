#include <interception_macros.h>

namespace app::methods::ChargeFlameWall {
IL2CPP_REGISTER_METHOD(0x01319670, void, Awake, (ChargeFlameWall * __this));
IL2CPP_REGISTER_METHOD(0x01319930, void, OnDestroy, (ChargeFlameWall * __this));
IL2CPP_REGISTER_METHOD(0x01319C10, void, OnModifyDamage, (ChargeFlameWall * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04776448, ChargeFlameWall_OnModifyDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0090CE60, void, OnDeathCallback, (ChargeFlameWall * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04782FD8, ChargeFlameWall_OnDeathCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00443680, void, __ctor, (ChargeFlameWall * __this));
}
