using namespace app;

namespace app::methods::LeaderboardData_Entry {
IL2CPP_REGISTER_METHOD(0x002FC6D0, uint32_t, get_Rank, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Rank, (LeaderboardData_Entry * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_UserID, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_UserID, (LeaderboardData_Entry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_UserHandle, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_UserHandle, (LeaderboardData_Entry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x015B7110, void, __ctor, (LeaderboardData_Entry * __this, Leaderboard__Enum leaderboard, uint32_t rank, int32_t score, String * userID, String * userHandle, bool isSteamEntry, bool isLiveEntry));
IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Time, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_DeathCount, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CompletionPercentage, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsSteamEntry, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsSteamEntry, (LeaderboardData_Entry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsLiveEntry, (LeaderboardData_Entry * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_IsLiveEntry, (LeaderboardData_Entry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x015B74D0, String *, ToString, (LeaderboardData_Entry * __this));
}
