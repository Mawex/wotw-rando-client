#include <interception_macros.h>

namespace app::methods::MeleeWeaponHammer {
IL2CPP_REGISTER_METHOD(0x009CD4A0, float, get_MoveDurationDept, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD4B0, void, set_MoveDurationDept, (MeleeWeaponHammer * __this, float value));
IL2CPP_REGISTER_METHOD(0x009CD4C0, bool, get_IsDisolving, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x006ECDC0, bool, get_DetectGroundCollision, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD4D0, void, set_DetectGroundCollision, (MeleeWeaponHammer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD4E0, bool, get_IsAllowed, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD600, bool, get_IsAttackButtonUsed, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD6D0, bool, get_IsAttackButtonDown, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CD830, bool, get_OnAttackButtonPressed, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CDA70, bool, get_OnAttackButtonReleased, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CDBD0, bool, get_CollisionDetectionEnabled, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CDC00, void, set_CollisionDetectionEnabled, (MeleeWeaponHammer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009CDC30, void, OnEnable, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CDEA0, void, OnDisable, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CE130, void, OnDestroy, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CE230, void, Awake, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CE2F0, void, PlayVanishEffect, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CE4E0, void, PlayIdle, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CE760, void, Initialize, (MeleeWeaponHammer * __this, SeinComboHandler * handler));
IL2CPP_REGISTER_METHOD(0x009CE950, void, OnBeginCombo, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CEB90, void, OnEndCombo, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CECC0, void, OnEquip, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CECD0, void, OnUnequip, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CECE0, void, PlayAttackRegistrationSound, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CEE80, void, Update, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CF130, void, ShowHammer, (MeleeWeaponHammer * __this, bool forceFadeIn));
IL2CPP_REGISTER_METHOD(0x009CF5B0, void, HideHammer, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CF7D0, void, OnWeaponCollision, (MeleeWeaponHammer * __this, Collider * collider, Vector3 checkCenter, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHODINFO(0x04713958, MeleeWeaponHammer_OnWeaponCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009CF980, void, OnGroundCollision, (MeleeWeaponHammer * __this, Vector3 hitPosition, Vector3 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHODINFO(0x04748A28, MeleeWeaponHammer_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009CFB70, void, UpdateHammer, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009CFCD0, void, OnFixedUpdate, (MeleeWeaponHammer * __this, float delta));
IL2CPP_REGISTER_METHOD(0x009CFDD0, bool, DetectHammerTipGroundCollision, (MeleeWeaponHammer * __this, bool force));
IL2CPP_REGISTER_METHOD(0x009D0630, void, SetHammerAnimationSpeedMultiplier, (MeleeWeaponHammer * __this, float value));
IL2CPP_REGISTER_METHOD(0x009D06D0, void, DebugWeapon, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009D0700, void, OnDrawGizmos, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009D0AE0, bool, get_IsSuspended, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009D0AF0, void, set_IsSuspended, (MeleeWeaponHammer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009D0B00, SuspendableMask__Enum, get_Mask, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009D0B10, void, set_Mask, (MeleeWeaponHammer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x009D0BD0, TrackingExclusions, get_TrackingExclusions, (MeleeWeaponHammer * __this));
IL2CPP_REGISTER_METHOD(0x009D0BE0, void, __ctor, (MeleeWeaponHammer * __this));
}
