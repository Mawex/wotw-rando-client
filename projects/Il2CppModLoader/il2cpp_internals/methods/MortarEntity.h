#include <interception_macros.h>

namespace app::methods::MortarEntity {
IL2CPP_REGISTER_METHOD(0x01476150, bool, get_ShouldCharge, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01476160, bool, get_ShouldHide, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01476170, bool, get_CouldHitTarget, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x005E8390, bool, get_IsMortarHidden, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01476180, bool, get_IsAggroed, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x014762D0, bool, get_SpawnCreep, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x014762E0, void, set_SpawnCreep, (MortarEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014762F0, void, OnAwake, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01476370, void, DetectGroundSurface, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01476810, bool, CalcLaunchVelocityWouldHitTarget, (MortarEntity * __this, Vector3 velocity, float airtime, Vector3 sphereCastOrigin));
IL2CPP_REGISTER_METHOD(0x01476D90, void, OnFixedUpdate, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01477CB0, void, GenerateAimVeloCache, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TestVeloPacking, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01477F40, void, ResolveDamage, (MortarEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x01478020, void, AssignRegularIdle, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01478050, void, AssignHiddenIdle, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01478080, void, __ctor, (MortarEntity * __this));
IL2CPP_REGISTER_METHOD(0x01478130, void, __cctor, ());
}
