using namespace app;

namespace app::methods::Moon::Telemetry::PathDataPoint {
IL2CPP_REGISTER_METHOD(0x00E338A0, void, __ctor, (PathDataPoint * __this, String * playerKey, String * sessionKey, String * time, String * level, DataPointType__Enum type, Vector3 position, float health, float light));
IL2CPP_REGISTER_METHOD(0x00E32550, String *, ToString, (PathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, GetFloatValue, (PathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00724040, float, GetSecondaryFloatValue, (PathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetStringValue, (PathDataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSecondaryStringValue, (PathDataPoint * __this));
}
