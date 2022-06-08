#include <interception_macros.h>

namespace app::methods::RaceSpectateState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceSpectateState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00718CD0, void, OnEnter, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x007190D0, void, UpdateState, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x007194C0, GhostPlayer *, get_TargetGhost, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x00719500, GhostPlayer *, get_TopGhost, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x00719540, void, UpdateGhostSpectating, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x007197A0, void, OnExit, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceSpectateState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x007151F0, void, CancelRaceRequested, (RaceSpectateState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceSpectateState * __this));
}
