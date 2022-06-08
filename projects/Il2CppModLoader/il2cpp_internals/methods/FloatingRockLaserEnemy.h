#include <interception_macros.h>

namespace app::methods::FloatingRockLaserEnemy {
IL2CPP_REGISTER_METHOD(0x01273520, void, PlayAnimationOnce, (FloatingRockLaserEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01273630, void, RestartAnimationLoop, (FloatingRockLaserEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01273740, void, PlayAnimationLoop, (FloatingRockLaserEnemy * __this, CharacterAnimationSystem * animationSystem, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01273850, void, Awake, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01273A10, void, OnDestroy, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01273BD0, void, OnModifyDamage, (FloatingRockLaserEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01273C00, void, OnEnterIdle, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A3C8, FloatingRockLaserEnemy_OnEnterIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01273D60, void, OnExitIdle, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C898, FloatingRockLaserEnemy_OnExitIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01273E70, void, OnEnterCharge, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C4A0, FloatingRockLaserEnemy_OnEnterCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01273F40, void, OnEnterLaser, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04783B70, FloatingRockLaserEnemy_OnEnterLaser__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012740F0, void, OnExitLaser, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B608, FloatingRockLaserEnemy_OnExitLaser__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01274130, void, OnEnterShooting, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04788908, FloatingRockLaserEnemy_OnEnterShooting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01274420, void, UpdateLaserState, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04792608, FloatingRockLaserEnemy_UpdateLaserState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01274570, void, Start, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateLaser, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01275C90, float, get_DesiredLaserRotationDirection, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01275EB0, void, UpdateLaserDirection, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x012762F0, void, ActivateLaser, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x012740F0, void, DeactivateLaser, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01276400, void, AimLaserAtPlayer, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01276840, void, FixedUpdate, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x012768E0, bool, ShouldCharge, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04713148, FloatingRockLaserEnemy_ShouldCharge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276960, bool, InCloseDistance, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x012769C0, void, __ctor, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHOD(0x01276B10, bool, _Start_b__36_0, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04704718, FloatingRockLaserEnemy__Start_b__36_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276960, bool, _Start_b__36_1, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047785A8, FloatingRockLaserEnemy__Start_b__36_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276B60, bool, _Start_b__36_2, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04713F40, FloatingRockLaserEnemy__Start_b__36_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276BB0, bool, _Start_b__36_3, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E838, FloatingRockLaserEnemy__Start_b__36_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01276960, bool, _Start_b__36_4, (FloatingRockLaserEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04725730, FloatingRockLaserEnemy__Start_b__36_4__MethodInfo);
}
