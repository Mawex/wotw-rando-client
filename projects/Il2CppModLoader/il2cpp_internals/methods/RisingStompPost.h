#include <interception_macros.h>

namespace app::methods::RisingStompPost {
IL2CPP_REGISTER_METHOD(0x00FC1E90, Vector3, get_Position, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x013566B0, void, OnRecieveDamage, (RisingStompPost * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356A80, bool, get_IsSuspended, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356A90, void, set_IsSuspended, (RisingStompPost * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00989BF0, SuspendableMask__Enum, get_Mask, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356AA0, void, set_Mask, (RisingStompPost * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01356B60, void, Awake, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356DD0, void, OnDestroy, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356E70, void, Start, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01356F80, void, OnTwinRecievedDamage, (RisingStompPost * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01357280, void, FixedUpdate, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x01357890, void, Serialize, (RisingStompPost * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FBC40, IDamageReciever__Array *, get_AffectedReceivers, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x013578F0, void, __ctor, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (RisingStompPost * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (RisingStompPost * __this));
}
