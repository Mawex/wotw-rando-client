#include <interception_macros.h>

namespace app::methods::RaceRunState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceRunState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00716B50, void, OnEnter, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00716F70, void, UpdateState, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00717B30, void, OnEnteredRaceArea, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00717B80, void, OnLeftRaceArea, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00717BE0, void, OnExit, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00717F20, void, FinishRaceRequested, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00718180, void, RestartRaceRequested, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x007182F0, void, CancelRaceRequested, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceRunState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00718350, void, SetupGhosts, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00718480, void, HandleDeath, (RaceRunState * __this));
IL2CPP_REGISTER_METHODINFO(0x04780AB8, RaceRunState_HandleDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00718560, void, StartRaceSyncables, (RaceRunState * __this));
IL2CPP_REGISTER_METHOD(0x00718880, void, SyncRaceSyncables, (RaceRunState * __this, float time));
}
