#include <interception_macros.h>

namespace app::methods::MeleeWeaponTorch {
IL2CPP_REGISTER_METHOD(0x009D4720, FireStick *, get_Torch, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAutoEquippable, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D47A0, bool, get_IsAttackButtonUsed, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D4870, bool, get_IsAttackButtonDown, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D49D0, bool, get_OnAttackButtonPressed, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D4C10, bool, get_OnAttackButtonReleased, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D4D70, bool, get_IsAllowed, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009CDBD0, bool, get_CollisionDetectionEnabled, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D4F00, void, set_CollisionDetectionEnabled, (MeleeWeaponTorch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009D4F70, void, Awake, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D51B0, void, OnDisable, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5210, void, Start, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5480, IComboMove *, GetComboMove, (MeleeWeaponTorch * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x009D5590, void, OnEquip, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D58B0, void, OnUnequip, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5A20, void, OnDestroy, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5D10, void, OnBeginCombo, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5E70, void, OnEndCombo, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D5F60, void, Update, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D6310, void, LateUpdate, (MeleeWeaponTorch * __this));
IL2CPP_REGISTER_METHOD(0x009D6420, void, OnWeaponCollision, (MeleeWeaponTorch * __this, Collider * collider, Vector3 checkCenter, Vector3 hitDirection, Vector3 damagePosition));
IL2CPP_REGISTER_METHODINFO(0x04777768, MeleeWeaponTorch_OnWeaponCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D6660, void, OnGroundCollision, (MeleeWeaponTorch * __this, Vector3 hitPosition, Vector3 hitNormal, Vector3 surfaceNormal, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHODINFO(0x04780AC0, MeleeWeaponTorch_OnGroundCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D6850, GameObject *, CreateTorch, (Vector2 position));
IL2CPP_REGISTER_METHOD(0x009D69C0, void, __ctor, (MeleeWeaponTorch * __this));
}
