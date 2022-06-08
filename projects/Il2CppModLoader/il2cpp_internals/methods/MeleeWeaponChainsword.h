using namespace app;

namespace app::methods::MeleeWeaponChainsword {
IL2CPP_REGISTER_METHOD(0x00720150, MoonAnimator *, get_LeftWeaponAnimator, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C7170, bool, get_IsAllowed, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C73A0, bool, get_IsAttackButtonUsed, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C7470, bool, get_IsAttackButtonDown, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C75D0, bool, get_OnAttackButtonPressed, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C7730, bool, get_OnAttackButtonReleased, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C7890, bool, get_CollisionDetectionEnabled, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C78C0, void, set_CollisionDetectionEnabled, (MeleeWeaponChainsword * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009C7970, void, InitializeColliderStartPosition, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C79B0, void, Awake, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C79F0, void, OnDestroy, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C7B90, void, OnBeginCombo, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C8070, void, OnEndCombo, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C8540, void, OnWeaponCollision, (MeleeWeaponChainsword * __this, Collider * collider, Vector3 handleCenter, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHODINFO(0x0471C568, MeleeWeaponChainsword_OnWeaponCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C8690, void, OnGroundCollision, (MeleeWeaponChainsword * __this, Vector3 hitPosition, Vector3 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHODINFO(0x0475C648, MeleeWeaponChainsword_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009C8880, void, DebugWeapon, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C88C0, void, SetAnimatorPosition, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C8C50, Transform__Array *, GetAnimatorTransforms, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C8DB0, void, Update, (MeleeWeaponChainsword * __this));
IL2CPP_REGISTER_METHOD(0x009C8E70, void, __ctor, (MeleeWeaponChainsword * __this));
}
