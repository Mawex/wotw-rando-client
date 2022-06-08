#include <interception_macros.h>

namespace app::methods::LoremasterReplayController {
IL2CPP_REGISTER_METHOD(0x009ED850, bool, get_LoreMasterReplayActive, ());
IL2CPP_REGISTER_METHOD(0x009ED940, bool, get_PlayingMasterTimeline, ());
IL2CPP_REGISTER_METHOD(0x009EDA40, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x009EDAD0, void, ResetState, ());
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDC60, bool, ReplayActive, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDCB0, bool, AllowFallOutOfWorld, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanRestart, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDCC0, bool, get_WaitingToExit, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDCD0, bool, get_WaitingToApply, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDCE0, bool, ReplayMode, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDD00, void, OnEnable, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDDB0, void, OnDisable, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EDE50, void, ApplySetting, (ReplaySetting * setting));
IL2CPP_REGISTER_METHOD(0x009EE000, void, OnAppliedSettings, (ReplaySetting * setting));
IL2CPP_REGISTER_METHOD(0x009EE8C0, void, MasterTimelineFinished, ());
IL2CPP_REGISTER_METHODINFO(0x0471F4B0, LoremasterReplayController_MasterTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009EEA00, void, OnRevertedSettings, (ReplaySetting * setting));
IL2CPP_REGISTER_METHOD(0x009EECA0, void, ExitToMenu, ());
IL2CPP_REGISTER_METHODINFO(0x04794120, LoremasterReplayController_ExitToMenu__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009EEF50, void, LoadOnGameReset, ());
IL2CPP_REGISTER_METHODINFO(0x047988B0, LoremasterReplayController_LoadOnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009EF480, void, LoadGame, ());
IL2CPP_REGISTER_METHODINFO(0x0476F6D8, LoremasterReplayController_LoadGame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009EF760, void, ExitReplay, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EF960, void, RestartReplay, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EFA10, void, ResetData, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EFA30, void, RevertState, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EFB00, void, ApplyState, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009EFE80, void, ApplyCharacters, (LoremasterReplayController * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x009F0520, void, OnAfterTandemSpawn, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x04743320, LoremasterReplayController_OnAfterTandemSpawn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F0980, void, Exit, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475CBB0, LoremasterReplayController_Exit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F0B60, void, Enter, (LoremasterReplayController * __this, bool shouldCacheUberstates));
IL2CPP_REGISTER_METHOD(0x009F0DC0, bool, get_FadedIn, (LoremasterReplayController * __this));
IL2CPP_REGISTER_METHOD(0x009F0EC0, void, OnFixedUpdate, (LoremasterReplayController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x009F18E0, void, __ctor, (LoremasterReplayController * __this));
}
