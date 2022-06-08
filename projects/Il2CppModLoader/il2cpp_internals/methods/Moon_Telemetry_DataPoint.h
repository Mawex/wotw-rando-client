#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::DataPoint {
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Level, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00654950, DataPointType__Enum, get_Type, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00DC0720, Vector3, get_Position, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00E32560, Texture2D *, get_Icon, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00E326B0, void, __ctor, (DataPoint * __this, String * playerKey, String * sessionKey, String * time, String * level, DataPointType__Enum type, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00E326F0, String *, ToString, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00E32980, int32_t, GetHashCode, (DataPoint * __this));
IL2CPP_REGISTER_METHOD(0x00E32A20, bool, Equals, (DataPoint * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00E32B30, bool, Equals, (DataPoint * __this, DataPoint * point));
}
