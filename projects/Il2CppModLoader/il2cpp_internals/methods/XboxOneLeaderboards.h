using namespace app;

namespace app::methods::XboxOneLeaderboards {
IL2CPP_REGISTER_METHOD(0x01C58D80, bool, get_EnableLeaderboards, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C58E00, void, set_EnableLeaderboards, (bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, LeaderboardData *, get_LeaderboardData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, UpdateLeaderboard, (LeaderboardB__Enum leaderboard, LeaderboardFilter__Enum filter, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x01C58E90, bool, SendLeaderboardData, (LeaderboardB__Enum leaderboard, int64_t data));
IL2CPP_REGISTER_METHOD(0x01C58F30, String *, GetLeaderboardEventName, (LeaderboardB__Enum leaderboard));
IL2CPP_REGISTER_METHODINFO(0x0476BD48, XboxOneLeaderboards_GetLeaderboardEventName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneLeaderboards * __this));
}
