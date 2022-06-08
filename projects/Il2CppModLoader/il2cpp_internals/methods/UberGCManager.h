using namespace app;

namespace app::methods::UberGCManager {
IL2CPP_REGISTER_METHOD(0x013E9690, float, get_AvailableMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E9730, float, get_LastPanicCompletionTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E97D0, float, get_SimplePanicTimegate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E9870, void, set_SimplePanicTimegate, (float value));
IL2CPP_REGISTER_METHOD(0x013E9960, bool, get_EnableAutomaticGC, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E99B0, void, set_EnableAutomaticGC, (bool value));
IL2CPP_REGISTER_METHOD(0x013E99C0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E9DB0, void, UpdateReservedHeapSize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013E9EE0, void, PreallocateHeap, (bool preallocateMaxHeap, bool fixBlockCount));
IL2CPP_REGISTER_METHOD(0x013EA000, void, OnGameStart, (bool automaticGC));
IL2CPP_REGISTER_METHOD(0x013EA2C0, void, ForceResourceCollectDebugOnly, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EA3D0, float, get_TimeSinceUnload, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EA4C0, void, RunGCDuringLoadingPrewarm, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EA560, void, RunGCDebugOnly, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EA5F0, void, RunGC, (bool isDebug));
IL2CPP_REGISTER_METHOD(0x013EAE90, void, CollectResourcesIfNeeded, (bool force, bool async));
IL2CPP_REGISTER_METHOD(0x013EB320, void, RefreshAvailableNvnMemoryExpensive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EB4E0, void, UpdateAvailableMemoryForFrameCapture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EB570, void, RefreshAvailableMemory, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EB910, void, OnPanicCleanup, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EBA60, String *, DebugConsumeLastCleanOpportunity, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EBB10, void, OnHintPanic, (String * reason));
IL2CPP_REGISTER_METHOD(0x013EBD50, void, OnStartTitlescreen, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EBE10, void, OnCloseDebugMenu, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EBF50, void, OnCleanupOutsideOfGameplayTeleporter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EC0C0, void, OnCleanupOutsideOfGameplay, (UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger));
IL2CPP_REGISTER_METHOD(0x013EC240, void, OnCleanupOutsideOfGameplayInternal, (UberGCLogic_CleanupTrigger__Enum trigger, UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum proactiveTrigger));
IL2CPP_REGISTER_METHOD(0x013EC6A0, bool, CollectResourcesIfOutOfMem, (bool allowIgnoreTimeout, float overrideThreshold, UberGCLogic_CleanupTrigger__Enum trigger));
IL2CPP_REGISTER_METHOD(0x013EC7B0, bool, RunGcIfHeapUsageIsBig, (UberGCLogic_CleanupTrigger__Enum trigger));
IL2CPP_REGISTER_METHOD(0x013EC8C0, void, Update, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04726048, UberGCManager_Update__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013ED9C0, float, get_LastPanicTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EDA70, void, set_LastPanicTime, (float value));
IL2CPP_REGISTER_METHOD(0x013EDB20, void, UpdateLastPanicTime, (MethodInfo * method));
}
