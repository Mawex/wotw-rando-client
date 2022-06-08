#include <interception_macros.h>

namespace app::methods::TeleportBeaconDamageReceiver {
IL2CPP_REGISTER_METHOD(0x00CE7970, void, Awake, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00CE7B80, void, OnDestroy, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00CE7C20, Vector3, get_Position, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x006514B0, bool, IsDead, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00CE7C60, bool, CanBeBashed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_BashPriority, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00CE7C80, void, OnRecieveDamage, (TeleportBeaconDamageReceiver * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IDamageReciever__Array *, get_AffectedReceivers, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (TeleportBeaconDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (TeleportBeaconDamageReceiver * __this));
}
