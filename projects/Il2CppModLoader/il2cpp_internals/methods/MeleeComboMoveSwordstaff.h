#include <interception_macros.h>

namespace app::methods::MeleeComboMoveSwordstaff {
IL2CPP_REGISTER_METHOD(0x013A5D20, float, get_EffectiveDamage, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A5D30, String *, get_AnimationSpeedMultiplierParameterName, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A5DB0, void, Initialize, (MeleeComboMoveSwordstaff * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x013A62E0, bool, CanExecute, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A6420, bool, get_MoveHasFinished, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A6430, AbilityType__Enum, get_ComboAbilityType, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A6440, void, ModifyGravityPlatformMovementSettings, (MeleeComboMoveSwordstaff * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x013A6470, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboMoveSwordstaff * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x013A64C0, void, OnMoveWindowOpen, (MeleeComboMoveSwordstaff * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x013A65B0, void, OnMoveWindowClosed, (MeleeComboMoveSwordstaff * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x013A65E0, bool, HitGroundSinceLastUse, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A66E0, void, Boost, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHODINFO(0x04776EC0, MeleeComboMoveSwordstaff_Boost__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A6900, void, SpawnEffects, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B510, MeleeComboMoveSwordstaff_SpawnEffects__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A6E50, void, OnAnimationEvent, (MeleeComboMoveSwordstaff * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHOD(0x013A6FF0, void, ApplySettings, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHODINFO(0x04799528, MeleeComboMoveSwordstaff_ApplySettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A7290, void, EnterMove, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A7650, void, UpdateCollisionDetection, (MeleeComboMoveSwordstaff * __this, bool value));
IL2CPP_REGISTER_METHOD(0x013A7690, void, UpdateMove, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A7E50, void, ExitMove, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A8000, void, InterruptMove, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A83A0, void, OnAnimationFinished, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHODINFO(0x04749840, MeleeComboMoveSwordstaff_OnAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A83B0, bool, KeepAnimationPlaying, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A83C0, void, OnCollision, (MeleeComboMoveSwordstaff * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x013A83F0, void, OnGroundCollision, (MeleeComboMoveSwordstaff * __this, Vector2 point, Vector2 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType, bool forceEffect, bool charged));
IL2CPP_REGISTER_METHOD(0x013A8670, Vector2, ComputeEffectiveKickback, (MeleeComboMoveSwordstaff * __this, Vector3 enemyPosition));
IL2CPP_REGISTER_METHOD(0x013A8830, void, TryToDealDamage, (MeleeComboMoveSwordstaff * __this, Collider * collider, Vector3 hitDirection));
IL2CPP_REGISTER_METHOD(0x013A9530, EffectSpawn, DamageEffectProvider, (MeleeComboMoveSwordstaff * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x0474D2C8, MeleeComboMoveSwordstaff_DamageEffectProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013A95A0, IEnumerator *, DummyHitStop, (MeleeComboMoveSwordstaff * __this, GameObject * toSuspend, float suspendTime));
IL2CPP_REGISTER_METHOD(0x013A9710, void, BeginAttackSegment, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A9820, void, EndAttackSegment, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A9940, void, __ctor, (MeleeComboMoveSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x013A9A60, void, _TryToDealDamage_b__84_0, (MeleeComboMoveSwordstaff * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04716F28, MeleeComboMoveSwordstaff__TryToDealDamage_b__84_0__MethodInfo);
}
