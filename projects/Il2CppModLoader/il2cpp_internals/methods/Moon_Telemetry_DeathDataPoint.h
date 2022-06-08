#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::DeathDataPoint {
IL2CPP_REGISTER_METHOD(0x00E32500, void, __ctor, (DeathDataPoint * __this, String * playerKey, String * sessionKey, String * time, String * level, DataPointType__Enum type, Vector3 position, float lastDamageTaken, String * killerName));
IL2CPP_REGISTER_METHOD(0x00E32550, String *, ToString, (DeathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetFloatValue, (DeathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetSecondaryFloatValue, (DeathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetStringValue, (DeathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSecondaryStringValue, (DeathDataPoint * __this));
}
