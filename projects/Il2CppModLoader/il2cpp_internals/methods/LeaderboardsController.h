using namespace app;

namespace app::methods::LeaderboardsController {
IL2CPP_REGISTER_METHOD(0x015BF630, LeaderboardsController *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015BF790, bool, get_Available, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015BF850, bool, get_Visible, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015BF920, void, set_Visible, (bool value));
IL2CPP_REGISTER_METHOD(0x015BFBA0, LeaderboardData *, GetLeaderboard, (Leaderboard__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015BFD00, bool, Clear, (Leaderboard__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015BFDF0, bool, UpdateLeaderboard, (Leaderboard__Enum leaderboard, LeaderboardFilter__Enum filter, DifficultyMode__Enum difficulty, LeaderboardsController_UpdateCallback * callback));
IL2CPP_REGISTER_METHOD(0x015BFE90, LeaderboardFilter__Enum, get_m_currentFilter, (LeaderboardsController * __this));
IL2CPP_REGISTER_METHOD(0x015BFF30, void, set_m_currentFilter, (LeaderboardsController * __this, LeaderboardFilter__Enum value));
IL2CPP_REGISTER_METHOD(0x015BFFD0, void, Update, (LeaderboardsController * __this));
IL2CPP_REGISTER_METHOD(0x015C0610, void, UploadScores, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015C09D0, void, UploadEndGameScores, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015C0FC0, void, UploadScore, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015C1160, void, FixedUpdate, (LeaderboardsController * __this));
IL2CPP_REGISTER_METHOD(0x015C13D0, IEnumerator *, UploadScoresRoutine, (LeaderboardsController * __this, int32_t time, int32_t deathCount, int32_t completionPercentage, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x015C1540, void, SendExplorerLeaderboardData, (LeaderboardEntryData * data, DifficultyMode__Enum difficultyMode));
IL2CPP_REGISTER_METHOD(0x015C1670, void, SendSpeedRunnersLeaderboardData, (LeaderboardEntryData * data, DifficultyMode__Enum difficultyMode));
IL2CPP_REGISTER_METHOD(0x015C17A0, void, SendSurvivorLeaderboardData, (LeaderboardEntryData * data, DifficultyMode__Enum difficultyMode));
IL2CPP_REGISTER_METHOD(0x015C18D0, String *, GetStatisticName, (LeaderboardB__Enum leaderboard));
IL2CPP_REGISTER_METHOD(0x015C1A10, void, SendLeaderboardData, (Leaderboard__Enum leaderboard, int32_t data, DifficultyMode__Enum difficultyMode));
IL2CPP_REGISTER_METHOD(0x015C1B20, int32_t, EncodedDataFrom, (LeaderboardEntryData * data, LeaderboardB__Enum leaderBoard));
IL2CPP_REGISTER_METHODINFO(0x04736490, LeaderboardsController_EncodedDataFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004BE040, Rect, PushDown, (Rect * rect, float offset));
IL2CPP_REGISTER_METHOD(0x015C1C70, void, __ctor, (LeaderboardsController * __this));
IL2CPP_REGISTER_METHOD(0x015C1E00, void, __cctor, (MethodInfo * method));
}
