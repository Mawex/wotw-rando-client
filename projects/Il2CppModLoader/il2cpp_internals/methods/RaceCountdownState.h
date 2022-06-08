using namespace app;

namespace app::methods::RaceCountdownState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceCountdownState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00E97820, void, OnEnter, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E97D20, void, OnCountdownFinished, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHODINFO(0x04740400, RaceCountdownState_OnCountdownFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E97E10, void, UpdateState, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E97F70, void, EnterRace, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E98050, void, OnExit, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E98190, void, RestartRaceRequested, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E98200, void, CancelRaceRequested, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceCountdownState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceCountdownState * __this));
IL2CPP_REGISTER_METHOD(0x00E98250, void, SyncRaceSyncables, (RaceCountdownState * __this, float time));
}
