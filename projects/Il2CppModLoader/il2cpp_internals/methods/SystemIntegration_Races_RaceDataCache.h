#include <interception_macros.h>

namespace app::methods::SystemIntegration::Races::RaceDataCache {
IL2CPP_REGISTER_METHOD(0x002FB950, Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_ *, get_Entries, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x00528570, void, __ctor, (RaceDataCache * __this, String * raceId, String * ownerId));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ *, get_LastMasterLeaderBoardSync, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LastMasterLeaderBoardSync, (RaceDataCache * __this, List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * value));
IL2CPP_REGISTER_METHOD(0x005287F0, bool, TryGet, (RaceDataCache * __this, String * userId, int32_t score, int32_t position, Byte__Array * * data));
IL2CPP_REGISTER_METHOD(0x00528930, void, RemoveOwnEntries, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x00528B90, void, Set, (RaceDataCache * __this, String * userId, String * displayName, int32_t score, Byte__Array * data, bool isMe, int32_t position));
IL2CPP_REGISTER_METHOD(0x005293F0, void, Serialize, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x005294B0, void, Deserialize, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x005297B0, void, Clear, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x00529850, bool, Any, (RaceDataCache * __this));
IL2CPP_REGISTER_METHOD(0x005298E0, bool, _Set_b__15_1, (RaceDataCache * __this, RaceEntry * o));
IL2CPP_REGISTER_METHODINFO(0x0470FE18, RaceDataCache__Set_b__15_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529940, void, _Deserialize_b__17_0, (RaceDataCache * __this, Task_1_System_Byte_ * t));
IL2CPP_REGISTER_METHODINFO(0x04701B00, RaceDataCache__Deserialize_b__17_0__MethodInfo);
}
