#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::GameSession {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Key, (GameSession * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Time, (GameSession * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Number, (GameSession * __this));
IL2CPP_REGISTER_METHOD(0x00E33230, int32_t, get_PointsCount, (GameSession * __this));
IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor, (GameSession * __this, String * key, String * time, int32_t number));
IL2CPP_REGISTER_METHOD(0x00E332D0, void, __ctor, (GameSession * __this, String * key, String * time, int32_t number, List_1_Moon_Telemetry_DataPoint_ * points));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_Moon_Telemetry_DataPoint_ *, GetPoints, (GameSession * __this));
IL2CPP_REGISTER_METHOD(0x00E337B0, List_1_Moon_Telemetry_DataPoint_ *, GetPoints, (GameSession * __this, String * levelName));
}
