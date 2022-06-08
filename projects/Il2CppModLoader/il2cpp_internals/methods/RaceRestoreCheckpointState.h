#include <interception_macros.h>

namespace app::methods::RaceRestoreCheckpointState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceRestoreCheckpointState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x007154D0, void, OnEnter, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x00715690, void, ScheduleRestore, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x00715930, void, UpdateState, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceRestoreCheckpointState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHOD(0x00715980, void, OnCheckpointRestored, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHODINFO(0x04736C50, RaceRestoreCheckpointState_OnCheckpointRestored__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00716780, void, ExitToMenu, (RaceRestoreCheckpointState * __this));
IL2CPP_REGISTER_METHODINFO(0x04721030, RaceRestoreCheckpointState_ExitToMenu__MethodInfo);
}
