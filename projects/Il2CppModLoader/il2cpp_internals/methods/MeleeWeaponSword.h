using namespace app;

namespace app::methods::MeleeWeaponSword {
IL2CPP_REGISTER_METHOD(0x009D0E80, bool, get_IsAllowed, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D0FA0, bool, get_IsAttackButtonUsed, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1070, bool, get_IsAttackButtonDown, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D11D0, bool, get_OnAttackButtonPressed, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1410, bool, get_OnAttackButtonReleased, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1570, bool, get_CollisionDetectionEnabled, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D15A0, void, set_CollisionDetectionEnabled, (MeleeWeaponSword * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009D15D0, void, OnDisable, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1600, void, OnDestroy, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1650, void, Awake, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1760, void, Start, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1850, void, OnBeginCombo, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1C40, void, OnEndCombo, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1F30, bool, CanDeactivateRoot, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D1F80, void, OnWeaponCollision, (MeleeWeaponSword * __this, Collider * collider, Vector3 handleCenter, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHODINFO(0x0471BD58, MeleeWeaponSword_OnWeaponCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D20D0, void, OnGroundCollision, (MeleeWeaponSword * __this, Vector3 hitPosition, Vector3 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHODINFO(0x04788D68, MeleeWeaponSword_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D2310, void, ShowSword, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D2870, void, HideSword, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009C64E0, void, OnUnequip, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D2A50, void, DebugWeapon, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D2A80, TrackingExclusions, get_TrackingExclusions, (MeleeWeaponSword * __this));
IL2CPP_REGISTER_METHOD(0x009D2A90, void, __ctor, (MeleeWeaponSword * __this));
}
