using namespace app;

namespace app::methods::RaceLeaderboardState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceLeaderboardState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00EA3910, void, OnEnter, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x00EA40F0, void, OnSelected, (RaceLeaderboardState * __this, String * playerName, bool spectate));
IL2CPP_REGISTER_METHODINFO(0x04754CC0, RaceLeaderboardState_OnSelected__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA43E0, void, OnCancelDownload, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHODINFO(0x0475FB50, RaceLeaderboardState_OnCancelDownload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA4560, void, OnBackPressed, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B2E8, RaceLeaderboardState_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA4670, void, UpdateState, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x00EA5180, bool, IsValidReplay, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x00EA5520, void, OnExit, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceLeaderboardState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (RaceLeaderboardState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceLeaderboardState * __this));
}
