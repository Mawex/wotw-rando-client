#include <interception_macros.h>

namespace app::methods::MeleeComboMoveTorch {
IL2CPP_REGISTER_METHOD(0x009C0FE0, bool, get_MoveHasFinished, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C0FF0, String *, get_AnimationSpeedMultiplierParameterName, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C1070, CharacterPlatformMovement *, get_PlatformMovement, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C10B0, float, get_EffectiveDamage, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C10E0, DamageType__Enum, get_EffectiveDamageType, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C11E0, bool, CanExecute, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C1250, void, Initialize, (MeleeComboMoveTorch * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x009C15C0, void, OnAnimationFinished, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AC88, MeleeComboMoveTorch_OnAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C15D0, bool, KeepAnimationPlaying, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C15E0, AbilityType__Enum, get_ComboAbilityType, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C15F0, void, EnterMove, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C1B00, void, ChangeState, (MeleeComboMoveTorch * __this, MeleeComboMoveTorch_State__Enum newState));
IL2CPP_REGISTER_METHODINFO(0x0472CF58, MeleeComboMoveTorch_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C1C00, void, EnterInactiveState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C1C20, void, EnterPrepareState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C1C80, void, EnterNormalState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C21D0, void, EnterThrowingState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2250, void, UpdateMove, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E258, MeleeComboMoveTorch_UpdateMove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInactiveState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2370, void, UpdateNormalState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2770, void, InterruptMove, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2790, void, UpdateThrowingState, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2AB0, void, ExitMove, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2CC0, void, ApplySettings, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C2F50, void, ModifyGravityPlatformMovementSettings, (MeleeComboMoveTorch * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x009C2F80, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboMoveTorch * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x009C2FD0, void, OnMoveWindowOpen, (MeleeComboMoveTorch * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x009C3000, void, OnMoveWindowClosed, (MeleeComboMoveTorch * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x009C3030, void, SpawnEffects, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x04785030, MeleeComboMoveTorch_SpawnEffects__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C3360, void, OnCollision, (MeleeComboMoveTorch * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x009C33B0, void, OnGroundCollision, (MeleeComboMoveTorch * __this, Vector2 hitPoint, Vector2 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType, bool forceEffect, bool charged));
IL2CPP_REGISTER_METHOD(0x009C3820, Vector2, ComputeEffectiveKickback, (MeleeComboMoveTorch * __this, Vector3 enemyPosition));
IL2CPP_REGISTER_METHOD(0x009C3A40, void, TryToDealDamage, (MeleeComboMoveTorch * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x009C43A0, void, OnDamageTicked, (MeleeComboMoveTorch * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x0478DF58, MeleeComboMoveTorch_OnDamageTicked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C4520, EffectSpawn, DamageEffectProvider, (MeleeComboMoveTorch * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x009C4630, void, BeginAttackSegment, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C48D0, void, EndAttackSegment, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C4A00, int32_t, GetPrewarmAmount, (MeleeComboMoveTorch * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x009C4A10, void, __ctor, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHOD(0x009C15C0, void, _UpdateThrowingState_b__60_0, (MeleeComboMoveTorch * __this));
IL2CPP_REGISTER_METHODINFO(0x0478EC20, MeleeComboMoveTorch__UpdateThrowingState_b__60_0__MethodInfo);
}
