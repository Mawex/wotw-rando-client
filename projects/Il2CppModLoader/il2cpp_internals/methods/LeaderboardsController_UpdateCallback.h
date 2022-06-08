using namespace app;

namespace app::methods::LeaderboardsController_UpdateCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (LeaderboardsController_UpdateCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (LeaderboardsController_UpdateCallback * __this, Leaderboard__Enum leaderboard, LeaderboardData * data));
IL2CPP_REGISTER_METHOD(0x015C2600, IAsyncResult *, BeginInvoke, (LeaderboardsController_UpdateCallback * __this, Leaderboard__Enum leaderboard, LeaderboardData * data, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (LeaderboardsController_UpdateCallback * __this, IAsyncResult * result));
}
