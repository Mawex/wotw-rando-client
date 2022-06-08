#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::PlayerData {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayerData * __this, String * key));
IL2CPP_REGISTER_METHOD(0x010A83C0, void, AddSessions, (PlayerData * __this, DataPointType__Enum pointType, Dictionary_2_System_String_Moon_Telemetry_GameSession_ * newSessions, int32_t insertIndex));
IL2CPP_REGISTER_METHOD(0x010A8C70, List_1_Moon_Telemetry_DataPoint_ *, GetPoints, (PlayerData * __this, DataPointType__Enum pointType));
IL2CPP_REGISTER_METHOD(0x010A9160, List_1_Moon_Telemetry_DataPoint_ *, GetPoints, (PlayerData * __this, DataPointType__Enum pointType, String * levelName));
IL2CPP_REGISTER_METHOD(0x010A9550, List_1_Moon_Telemetry_GameSession_ *, GetSessions, (PlayerData * __this, DataPointType__Enum pointType));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession_ *, GetSessions, (PlayerData * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Key, (PlayerData * __this));
IL2CPP_REGISTER_METHOD(0x010A9840, int32_t, get_SessionsCount, (PlayerData * __this));
IL2CPP_REGISTER_METHOD(0x010A99F0, void, UpdateGameSessionOrder, (PlayerData * __this));
}
