#include <interception_macros.h>

namespace app::methods::FloatingRockTurretEnemy {
IL2CPP_REGISTER_METHOD(0x01277550, void, PlayAnimationOnce, (FloatingRockTurretEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01277660, void, RestartAnimationLoop, (FloatingRockTurretEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01277770, void, PlayAnimationLoop, (FloatingRockTurretEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01277880, void, OnEnterIdle, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04741348, FloatingRockTurretEnemy_OnEnterIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01277940, void, OnEnterCharge, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0474EA10, FloatingRockTurretEnemy_OnEnterCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01277A30, void, OnExitCharge, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ECC0, FloatingRockTurretEnemy_OnExitCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01277A60, void, UpdateCharge, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04767878, FloatingRockTurretEnemy_UpdateCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01277C20, void, OnEnterShooting, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AB88, FloatingRockTurretEnemy_OnEnterShooting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01277F40, void, OnEnterRespawn, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E478, FloatingRockTurretEnemy_OnEnterRespawn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01278110, void, Start, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x011B8AA0, void, OnTimedRespawn, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01279520, bool, ShouldCharge, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E410, FloatingRockTurretEnemy_ShouldCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012795A0, bool, ShouldDisolve, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04769930, FloatingRockTurretEnemy_ShouldDisolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01279600, void, Awake, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x012797C0, void, OnDestroy, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01273BD0, void, OnModifyDamage, (FloatingRockTurretEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01279980, void, FixedUpdate, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01279A20, void, __ctor, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01276B10, bool, _Start_b__27_0, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0475CBD0, FloatingRockTurretEnemy__Start_b__27_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276BB0, bool, _Start_b__27_1, (FloatingRockTurretEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04755D78, FloatingRockTurretEnemy__Start_b__27_1__MethodInfo);
}
