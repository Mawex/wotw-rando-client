using namespace app;

namespace app::methods::MeleeWeaponSwordstaff {
IL2CPP_REGISTER_METHOD(0x009D2BA0, bool, get_IsAllowed, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D2DD0, bool, get_IsAttackButtonUsed, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D2EA0, bool, get_IsAttackButtonDown, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3000, bool, get_OnAttackButtonPressed, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3160, bool, get_OnAttackButtonReleased, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D32C0, bool, get_CollisionDetectionEnabled, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D32F0, void, set_CollisionDetectionEnabled, (MeleeWeaponSwordstaff * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009D3360, void, OnDestroy, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3430, void, Awake, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3540, void, Start, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3630, void, OnBeginCombo, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3930, void, OnEndCombo, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3C50, bool, CanDeactivateRoot, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D3CB0, void, OnWeaponCollision, (MeleeWeaponSwordstaff * __this, Collider * collider, Vector3 handleCenter, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHODINFO(0x04700A18, MeleeWeaponSwordstaff_OnWeaponCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D3E00, void, OnGroundCollision, (MeleeWeaponSwordstaff * __this, Vector3 hitPosition, Vector3 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHODINFO(0x04714120, MeleeWeaponSwordstaff_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D3FF0, void, ShowSwordstaff, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D44D0, void, HideSword, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D4520, void, OnUnequip, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D4600, void, DebugWeapon, (MeleeWeaponSwordstaff * __this));
IL2CPP_REGISTER_METHOD(0x009D4630, void, __ctor, (MeleeWeaponSwordstaff * __this));
}
