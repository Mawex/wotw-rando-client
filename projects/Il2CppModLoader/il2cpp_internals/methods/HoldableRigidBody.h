#include <interception_macros.h>

namespace app::methods::HoldableRigidBody {
IL2CPP_REGISTER_METHOD(0x00B58CA0, bool, get_CanBeHeld, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanBeUsed, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B58CD0, MeleeWeapon *, get_Weapon, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (HoldableRigidBody * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B58D50, void, set_Mask, (HoldableRigidBody * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B58E00, bool, get_IsHeld, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x0084D3C0, bool, get_CanBeDropped, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x0084D3D0, void, set_CanBeDropped, (HoldableRigidBody * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B58E10, void, Awake, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B58F80, void, SafeDestroy, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B59120, void, OnEnable, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B591E0, void, OnDisable, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B592C0, void, FixedUpdate, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B59340, void, UpdateHint, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B595E0, void, OnPickedUp, (HoldableRigidBody * __this, bool serialization));
IL2CPP_REGISTER_METHOD(0x00B59AA0, void, OnDropped, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B59ED0, void, BeginUse, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B59FC0, void, EndUse, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B5A0B0, void, FixDropPosition, (HoldableRigidBody * __this));
IL2CPP_REGISTER_METHOD(0x00B5A580, void, OnCollisionEnter, (HoldableRigidBody * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00B5A710, void, __ctor, (HoldableRigidBody * __this));
}
