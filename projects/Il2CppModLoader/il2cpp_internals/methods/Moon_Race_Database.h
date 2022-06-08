#include <interception_macros.h>

namespace app::methods::Moon::Race::Database {
IL2CPP_REGISTER_METHOD(0x00C3F180, String *, get_RacesFolder, ());
IL2CPP_REGISTER_METHOD(0x00C3F270, String *, get_PresetsFolder, ());
IL2CPP_REGISTER_METHOD(0x00C3F380, List_1_Moon_Race_LeaderBoardEntry_ *, GetLeaderBoard, (Database * __this, String * raceName));
IL2CPP_REGISTER_METHOD(0x00C3F560, List_1_Moon_Race_LeaderBoardEntry_ *, GetLeaderBoardWithLocalPlayerTime, (Database * __this, String * raceName));
IL2CPP_REGISTER_METHOD(0x00C3FA40, bool, IsSyncing, (Database * __this, String * raceId));
IL2CPP_REGISTER_METHOD(0x00C3FB50, void, TryGet, (Database * __this, String * raceId, LeaderboardFilter__Enum filter, ITrialData * trialData, RaceSettings * raceSettings));
IL2CPP_REGISTER_METHOD(0x00C40190, bool, TryGetDev, (Database * __this, String * raceId, LeaderBoardEntry * * entry));
IL2CPP_REGISTER_METHOD(0x00C40300, void, Add, (Database * __this, String * raceId, String * displayName, int32_t time, String * data));
IL2CPP_REGISTER_METHOD(0x00C40A70, void, Delete, (Database * __this));
IL2CPP_REGISTER_METHOD(0x00C40B50, void, __ctor, (Database * __this));
}
