using namespace app;

namespace app::methods::Moon::Telemetry::DamageDataPoint {
IL2CPP_REGISTER_METHOD(0x00E32500, void, __ctor, (DamageDataPoint * __this, String * playerKey, String * sessionKey, String * time, String * level, DataPointType__Enum type, Vector3 position, float damageTaken, String * damagerName));
IL2CPP_REGISTER_METHOD(0x00E32550, String *, ToString, (DamageDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetFloatValue, (DamageDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetSecondaryFloatValue, (DamageDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetStringValue, (DamageDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSecondaryStringValue, (DamageDataPoint * __this));
}
