#include <interception_macros.h>

namespace app::methods::RaceStateMachineContext {
IL2CPP_REGISTER_METHOD(0x00719D50, String *, get_RaceName, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x00719DF0, RaceStateMachineContext_Waiter *, Wait, (RaceStateMachineContext * __this, float time));
IL2CPP_REGISTER_METHOD(0x00719F50, String__Array *, GetFilesAtPath, (String * path));
IL2CPP_REGISTER_METHOD(0x00719F60, void, UploadReplay, (RaceStateMachineContext * __this, RaceTimer * timer, ITrialData * data));
IL2CPP_REGISTER_METHOD(0x0071A1F0, void, UploadOfflineRaceFiles, ());
IL2CPP_REGISTER_METHOD(0x0071A9A0, void, LockScenes, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071AB70, void, UnlockScenes, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071AD10, void, LogError, (RaceStateMachineContext * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0071ADB0, void, ReportAndClearTechnicalFailure, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071AE80, void, SaveDevGhost, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071B080, void, SelectDefaultReplays, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071B200, DifficultyMode__Enum, get_CurrentDifficulty, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x0071B380, void, __ctor, (RaceStateMachineContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
