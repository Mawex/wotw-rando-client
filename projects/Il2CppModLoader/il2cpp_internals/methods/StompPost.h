#include <interception_macros.h>

namespace app::methods::StompPost {
IL2CPP_REGISTER_METHOD(0x00653A60, Vector3, get_Position, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00653AF0, void, OnRecieveDamage, (StompPost * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_IsSuspended, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00653FA0, void, set_IsSuspended, (StompPost * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00653FB0, SuspendableMask__Enum, get_Mask, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00653FC0, void, set_Mask, (StompPost * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00654080, void, Awake, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x006542F0, void, OnDestroy, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00654390, void, Start, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00654480, void, FixedUpdate, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x006547F0, void, Serialize, (StompPost * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FBC20, IDamageReciever__Array *, get_AffectedReceivers, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00654860, void, __ctor, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (StompPost * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (StompPost * __this));
}
