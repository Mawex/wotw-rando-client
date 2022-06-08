using namespace app;

namespace app::methods::Moon::MeleeComboMoveChainsword {
IL2CPP_REGISTER_METHOD(0x01116570, float, get_EffectiveDamage, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116580, String *, get_AnimationSpeedMultiplierParameterName, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116600, void, OnCollision, (MeleeComboMoveChainsword * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x01116600, void, TryToDealDamage, (MeleeComboMoveChainsword * __this, Collider * collider, Vector3 hitDirection));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGroundCollision, (MeleeComboMoveChainsword * __this, Vector2 hitPoint, Vector2 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType, bool forceEffect, bool charged));
IL2CPP_REGISTER_METHOD(0x01116700, AbilityType__Enum, get_ComboAbilityType, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (MeleeComboMoveChainsword * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboMoveChainsword * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x01116710, void, Initialize, (MeleeComboMoveChainsword * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x01116810, void, EnterMove, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116A30, void, ExitMove, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116B20, bool, get_MoveHasFinished, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116B30, void, OnAnimationFinished, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHODINFO(0x04777758, MeleeComboMoveChainsword_OnAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01116B40, void, BeginAttackSegment, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116C10, void, EndAttackSegment, (MeleeComboMoveChainsword * __this));
IL2CPP_REGISTER_METHOD(0x01116CF0, void, OnMoveWindowOpen, (MeleeComboMoveChainsword * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01116DD0, void, OnMoveWindowClosed, (MeleeComboMoveChainsword * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01116E00, void, __ctor, (MeleeComboMoveChainsword * __this));
}
