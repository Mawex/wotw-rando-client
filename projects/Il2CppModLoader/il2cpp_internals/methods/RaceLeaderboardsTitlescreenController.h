#include <interception_macros.h>

namespace app::methods::RaceLeaderboardsTitlescreenController {
IL2CPP_REGISTER_METHOD(0x00EA5A70, LeaderBoardService *, get_m_leaderBoardService, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA5B10, LeaderboardFilter__Enum, get_m_currentFilter, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA5BF0, void, OnEnable, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA5FA0, void, FixedUpdate, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA6370, void, UpdateStatus, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA6610, void, SetState, (RaceLeaderboardsTitlescreenController * __this, RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum state));
IL2CPP_REGISTER_METHOD(0x00EA6780, void, HandleInput, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA6AB0, void, ShowRaceLeaderboard, (RaceLeaderboardsTitlescreenController * __this, RaceSettings * raceSettings));
IL2CPP_REGISTER_METHOD(0x00EA6CB0, void, UpdateNotification, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA6E50, void, HideTable, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA6F40, void, ShowTable, (RaceLeaderboardsTitlescreenController * __this));
IL2CPP_REGISTER_METHOD(0x00EA7000, void, __ctor, (RaceLeaderboardsTitlescreenController * __this));
}
