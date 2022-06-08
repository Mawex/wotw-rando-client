#include <interception_macros.h>

namespace app::methods::WaterInteraction {
IL2CPP_REGISTER_METHOD(0x008D6C00, void, add_OnWaterZoneEnterAction, (WaterInteraction * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x008D6CF0, void, remove_OnWaterZoneEnterAction, (WaterInteraction * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x008D6DE0, void, add_OnWaterZoneExitAction, (WaterInteraction * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x008D6ED0, void, remove_OnWaterZoneExitAction, (WaterInteraction * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x008D6FC0, bool, get_IsInWater, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D7050, void, OnEnable, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D7200, void, OnDisable, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D73E0, void, OnWaterZoneEnter, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D7460, void, OnWaterZoneExit, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D74E0, void, OnTriggerEnter, (WaterInteraction * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x008D77E0, void, OnTriggerExit, (WaterInteraction * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x008D7AC0, void, OnRestoreCheckpoint, (WaterInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E6D8, WaterInteraction_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008D7AD0, void, InitialTriggerCheck, (WaterInteraction * __this));
IL2CPP_REGISTER_METHOD(0x008D7E20, void, SetUnderwaterRtpc, (WaterInteraction * __this, bool underwater));
IL2CPP_REGISTER_METHOD(0x008D7EB0, void, __ctor, (WaterInteraction * __this));
}
