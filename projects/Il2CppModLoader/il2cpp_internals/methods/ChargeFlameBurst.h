#include <interception_macros.h>

namespace app::methods::ChargeFlameBurst {
IL2CPP_REGISTER_METHOD(0x01318620, void, OnPoolSpawned, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x01318630, void, IgnoreOnLastInstance, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x01318740, void, Awake, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x013187E0, void, OnDestroy, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x01318880, void, OnEnable, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x01318910, void, OnDisable, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x01318A40, void, Start, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x01318A60, void, DealDamage, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x013193E0, void, FixedUpdate, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (ChargeFlameBurst * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (ChargeFlameBurst * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (ChargeFlameBurst * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x013194C0, void, __ctor, (ChargeFlameBurst * __this));
}
