#include <interception_macros.h>

namespace app::methods::WaterCurrentZone {
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSerialize, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D4DF0, Vector2, get_NormalizedCurrentDirection, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D4E20, Vector2, get_ActualCurrentSpeed, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D4F80, float, get_CurrentCycleFactor, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D5070, float, get_ZonePositionFactor, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D5150, Vector2, ActualCurrentSpeedForPoint, (WaterCurrentZone * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x008D52B0, float, GetZonePositionFactor, (WaterCurrentZone * __this, Vector3 charPos));
IL2CPP_REGISTER_METHOD(0x008D5660, void, AwakeInternal, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D5750, void, OnEnableRuntime, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D5820, void, OnDisableRuntime, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D58E0, bool, InnerBoundContainsPoint, (WaterCurrentZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x008D59F0, void, OnZoneChange, (WaterCurrentZone * __this));
IL2CPP_REGISTER_METHOD(0x008D5CE0, void, OnZoneUpdate, (WaterCurrentZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x008D5E30, float, GetRtpcValue, (WaterCurrentZone * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x008D6020, void, __ctor, (WaterCurrentZone * __this));
}
