#include <interception_macros.h>

namespace app::methods::SandstormZone {
IL2CPP_REGISTER_METHOD(0x008D4DF0, Vector2, get_NormalizedStormDirection, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29620, Vector2, get_ActualStormSpeed, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29750, float, get_WindCycleFactor, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29840, float, get_ZonePositionFactor, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29920, float, GetZonePositionFactor, (SandstormZone * __this, Vector3 charPos));
IL2CPP_REGISTER_METHOD(0x00C29CD0, void, AwakeInternal, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29DC0, void, OnEnableRuntime, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29E90, void, OnDisableRuntime, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C29F50, bool, InnerBoundContainsPoint, (SandstormZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00C2A060, void, OnZoneChange, (SandstormZone * __this));
IL2CPP_REGISTER_METHOD(0x00C2A350, void, OnZoneUpdate, (SandstormZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00C2A4F0, float, GetRtpcValue, (SandstormZone * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x00C2A6E0, void, __ctor, (SandstormZone * __this));
}
