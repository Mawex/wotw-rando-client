using namespace app;

namespace app::methods::MeleeComboMoveHammerBase {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138F9E0, float, get_BlastDamage, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138FA50, Vector2, get_EffectiveRootMotionMultiplier, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138FB60, void, EnterMove, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x009C11E0, bool, CanExecute, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_NormalizedAttackTime, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138FB80, String *, get_AnimationSpeedMultiplierParameterName, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x00CC7710, AbilityType__Enum, get_ComboAbilityType, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_DetectGroundCollision, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138FC00, bool, get_MoveHasFinished, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x0138FC10, void, Initialize, (MeleeComboMoveHammerBase * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x0138FE70, void, OnDestroyMove, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x01390050, void, OnCollision, (MeleeComboMoveHammerBase * __this, Collider * collider, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x01390120, void, UpdateCollisionDetection, (MeleeComboMoveHammerBase * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01390160, void, ApplyOnHitReactions, (MeleeComboMoveHammerBase * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x01390540, bool, CanDealDamage, (MeleeComboMoveHammerBase * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x01390830, void, StopTimeline, (MeleeComboMoveHammerBase * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x013908F0, void, InterruptMove, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHOD(0x01390940, void, OnBlastStartEvent, (MeleeComboMoveHammerBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04780C80, MeleeComboMoveHammerBase_OnBlastStartEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01390A50, void, DoBlastRadius, (MeleeComboMoveHammerBase * __this, Vector3 origin, float blastRadius, float blastDamage, float kickbackStrength, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x01391240, bool, CanApplyBlastToAttackable, (MeleeComboMoveHammerBase * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x01391360, void, __ctor, (MeleeComboMoveHammerBase * __this));
}
