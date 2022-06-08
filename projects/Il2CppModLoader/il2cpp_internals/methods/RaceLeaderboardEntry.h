using namespace app;

namespace app::methods::RaceLeaderboardEntry {
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_PlayerName, (RaceLeaderboardEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_PlayerName, (RaceLeaderboardEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_UserID, (RaceLeaderboardEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_UserID, (RaceLeaderboardEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00E9F800, void, Configure, (RaceLeaderboardEntry * __this, int32_t rank, String * playerName, float time, bool isMe, bool addAccuracy, bool hideRank, bool isLiveEntry, String * userID));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RaceLeaderboardEntry * __this));
}
