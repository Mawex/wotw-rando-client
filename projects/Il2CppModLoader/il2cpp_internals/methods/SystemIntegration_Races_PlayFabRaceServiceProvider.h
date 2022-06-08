#include <interception_macros.h>

namespace app::methods::SystemIntegration::Races::PlayFabRaceServiceProvider {
IL2CPP_REGISTER_METHOD(0x005245D0, void, __ctor, (PlayFabRaceServiceProvider * __this, IDataProvider * statisticsProviderProvider, PlayFabSignInProvider * playFabSignInProvider));
IL2CPP_REGISTER_METHOD(0x00524950, void, LoadRaceCacheFor, (PlayFabRaceServiceProvider * __this, IEnumerable_1_System_String_ * raceIds, RaceDataLeaderBoardType__Enum type, LeaderboardFilter__Enum filter));
IL2CPP_REGISTER_METHOD(0x00524BC0, void, PostNewRaceData, (PlayFabRaceServiceProvider * __this, String * raceId, String * displayName, int32_t score, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00525120, Task_1_SystemIntegration_Races_RaceRequestResult_ *, GetRaceData, (PlayFabRaceServiceProvider * __this, String * raceId, RaceDataLeaderBoardType__Enum type, LeaderboardFilter__Enum filter));
IL2CPP_REGISTER_METHOD(0x00525270, String *, ToRaceString, (String * raceId, RaceDataLeaderBoardType__Enum type, LeaderboardFilter__Enum filter));
IL2CPP_REGISTER_METHOD(0x00525390, RaceRequestResult *, ProcessCachedLeaderBoardList, (PlayFabRaceServiceProvider * __this, RaceDataCache * dataCache));
IL2CPP_REGISTER_METHOD(0x00525730, Task_1_SystemIntegration_Races_RaceRequestResult_ *, ProcessLeaderBoardList, (PlayFabRaceServiceProvider * __this, List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * list, String * raceId, RaceDataLeaderBoardType__Enum type, LeaderboardFilter__Enum filter, RaceDataCache * dataCache));
IL2CPP_REGISTER_METHOD(0x00525870, RaceDataCache *, TryAndGetCacheFor, (PlayFabRaceServiceProvider * __this, String * cacheId));
IL2CPP_REGISTER_METHOD(0x00525AE0, Task_1_SystemIntegration_Races_RaceRequestResultEntry_ *, GetRaceResultEntry, (PlayFabRaceServiceProvider * __this, String * raceId, String * userId, int32_t score, int32_t position, String * displayName, RaceDataLeaderBoardType__Enum type, LeaderboardFilter__Enum filter, PlayerProfileModel * profile));
IL2CPP_REGISTER_METHOD(0x00525C30, void, ClearCache, (PlayFabRaceServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x00525E30, void, PostCachedData, (PlayFabRaceServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x00525EC0, bool, TryGetDeveloperGhostDataForRace, (PlayFabRaceServiceProvider * __this, String * raceId, LeaderBoardEntry * * entry));
IL2CPP_REGISTER_METHOD(0x00526060, void, SaveDeveloperGhostDataForRace, (PlayFabRaceServiceProvider * __this, String * raceId, int32_t score, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x005262A0, void, Update, (PlayFabRaceServiceProvider * __this));
}
