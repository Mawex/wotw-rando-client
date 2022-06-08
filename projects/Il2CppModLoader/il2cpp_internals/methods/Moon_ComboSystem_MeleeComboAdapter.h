#include <interception_macros.h>

namespace app::methods::Moon::ComboSystem::MeleeComboAdapter {
IL2CPP_REGISTER_METHOD(0x00CC7730, void, OnInitialize, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC79B0, void, __ctor, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetWeapon, (MeleeComboAdapter * __this, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x00CC7BA0, void, OnCollision, (MeleeComboAdapter * __this, Collider * collider, Vector3 hitDirection));
IL2CPP_REGISTER_METHOD(0x00CC7CA0, bool, CanExecute, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7CD0, void, Interrupt, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7D10, void, EnterMove, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7DD0, void, UpdateMove, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7E60, void, ExitMove, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7EC0, bool, get_IsAttackButtonDown, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC7FA0, bool, get_OnAttackButtonPressed, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC8080, bool, get_OnAttackButtonReleased, (MeleeComboAdapter * __this));
IL2CPP_REGISTER_METHOD(0x00CC8160, void, ModifyGravityPlatformMovementSettings, (MeleeComboAdapter * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x00CC81A0, void, ModifyHorizontalPlatformMovementSettings, (MeleeComboAdapter * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x00CC81E0, void, OnAnimationEvent, (MeleeComboAdapter * __this, SeinController3D_EventId__Enum eventId));
}
