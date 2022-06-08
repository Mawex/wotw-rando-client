using namespace app;

namespace app::methods::Moon::Race::MatchmakingExtensions {
IL2CPP_REGISTER_METHOD(0x00C44530, List_1_Moon_Race_LeaderBoardEntry_ *, GetEntriesInRange, (List_1_Moon_Race_LeaderBoardEntry_ * leaderboard, int32_t amount, int32_t pivotSlot, int32_t * startedRangeIndex));
IL2CPP_REGISTER_METHOD(0x00C44BE0, IEnumerable_1_Moon_Race_LeaderBoardEntry_ *, GetRaceEntries, (List_1_Moon_Race_LeaderBoardEntry_ * leaderboard));
IL2CPP_REGISTER_METHOD(0x00C45170, IEnumerable_1_Moon_Race_LeaderBoardEntry_ *, GetSpectatorEntries, (List_1_Moon_Race_LeaderBoardEntry_ * leaderboard));
IL2CPP_REGISTER_METHOD(0x00C451A0, IEnumerable_1_Moon_Race_LeaderBoardEntry_ *, GetEntries, (List_1_Moon_Race_LeaderBoardEntry_ * entries, int32_t startIndex, int32_t maxCount));
}
