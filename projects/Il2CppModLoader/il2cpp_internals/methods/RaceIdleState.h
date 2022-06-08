using namespace app;

namespace app::methods::RaceIdleState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceIdleState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00E9F3D0, void, StartRaceRequested, (RaceIdleState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x00E9F570, void, OnEnter, (RaceIdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceIdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceIdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceIdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (RaceIdleState * __this));
}
