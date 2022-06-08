using namespace app;

namespace app::methods::LoadingBootstrap {
IL2CPP_REGISTER_METHOD(0x00FB6B00, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB6CA0, void, Awake, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB6DA0, void, OnDisable, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB6F00, void, CheckForContentPackage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB7030, PlayerLoopSystem, FilterLoopSubsytems, (PlayerLoopSystem root, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x00FB72B0, void, SetLoadingIntegrationTimeSlice, (ThreadPriority__Enum_1 priority, double value));
IL2CPP_REGISTER_METHOD(0x00FB73E0, void, InitializePlayerLoop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00FB7FA0, void, InitializeCommonTweaks, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB86A0, void, InitializeStandaloneTweaks, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB87C0, void, ParseNvnPoolSizes, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeXboxOneTweaks, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB89A0, void, InitializeSwitchTweaks, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB8E40, String *, ParseArgument, (String * flag));
IL2CPP_REGISTER_METHOD(0x00FB9260, bool, ToggleBoolBasedOnCommandline, (String * cmdlineArg, bool * boolToToggle));
IL2CPP_REGISTER_METHOD(0x00FB93A0, IEnumerator *, Start, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB94F0, void, OnIntroLogosComplete, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB9650, void, OnGameControllerInitialize, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FB98C0, void, FinishPrewarmingSlot, (LoadingBootstrap * __this, PrewarmOperationSlot__Enum slot));
IL2CPP_REGISTER_METHOD(0x00FBA1B0, bool, PrewarmStep, (LoadingBootstrap * __this, PrewarmOperationSlot__Enum slot));
IL2CPP_REGISTER_METHOD(0x00FBA5F0, void, CreateLineMaterial, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FBA790, IEnumerator *, OnEndOfFrame, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FBA8E0, void, DrawPreloadDebug, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FBBF40, void, InitializePrewarmOperations, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ActiveSceneChanged, (LoadingBootstrap * __this, Scene arg0, Scene arg1));
IL2CPP_REGISTER_METHODINFO(0x0472BFD0, LoadingBootstrap_ActiveSceneChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FBDC40, void, __ctor, (LoadingBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x00FBDC50, void, __cctor, (MethodInfo * method));
}
