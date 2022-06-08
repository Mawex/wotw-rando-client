#include <interception_macros.h>

namespace app::methods::GenericAttackable {
IL2CPP_REGISTER_METHOD(0x00E05AB0, void, Awake, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00E05C90, Vector3, get_Position, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00E05D20, bool, IsDead, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IDamageReciever__Array *, get_AffectedReceivers, (GenericAttackable * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (GenericAttackable * __this));
}
