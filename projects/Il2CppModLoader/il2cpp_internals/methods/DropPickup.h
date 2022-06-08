#include <interception_macros.h>

namespace app::methods::DropPickup {
IL2CPP_REGISTER_METHOD(0x00BDDC50, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FBBE0, Transform *, get_TransformSource, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDDCF0, void, set_TransformSource, (DropPickup * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x00BDDD00, Vector3, get_CurrentGravity, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDDD30, void, set_CurrentGravity, (DropPickup * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00BDDD60, void, OnValidate, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDDE50, void, Awake, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDE140, void, ResetState, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDE580, void, OnPoolSpawned, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDE590, void, OnEnable, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDE6E0, void, OnDisable, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDE830, void, ChangeState, (DropPickup * __this, DropPickup_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00BDE900, bool, get_PlayerInControl, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_CanFall, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x008496A0, void, set_CanFall, (DropPickup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BDEA50, void, UpdateCanFall, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDEC00, void, UpdateState, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDF680, void, OnDestroy, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDF720, void, OnUpdate, (DropPickup * __this, DropPickup_SharedUpdateData * updateData));
IL2CPP_REGISTER_METHOD(0x00BDFA60, void, UpdateWaterBehaviour, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BDFBE0, void, UpdateSuckTowardsPlayer, (DropPickup * __this, DropPickup_SharedUpdateData * updateData));
IL2CPP_REGISTER_METHOD(0x00BE0400, void, OnRecieveDamage, (DropPickup * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FBE70, bool, get_IsSuspended, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x003FBE80, void, set_IsSuspended, (DropPickup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FBE90, SuspendableMask__Enum, get_Mask, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BE0640, void, set_Mask, (DropPickup * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00BE0700, void, __ctor, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00BE0740, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DropPickup * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DropPickup * __this));
}
