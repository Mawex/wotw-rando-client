#include <interception_macros.h>

namespace app::methods::GetPickupOnCondition {
IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpointOnPickup, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E11F60, void, OnEnable, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E12210, void, OnDisable, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E123F0, void, FixedUpdate, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E12450, bool, IsConditionMet, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E124B0, void, OnEventStart, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DBE8, GetPickupOnCondition_OnEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E125A0, void, GivePickup, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E12750, void, OnSkipCutscene, (GetPickupOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (GetPickupOnCondition * __this));
}
