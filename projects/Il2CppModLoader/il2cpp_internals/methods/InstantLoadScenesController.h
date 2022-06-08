using namespace app;

namespace app::methods::InstantLoadScenesController {
IL2CPP_REGISTER_METHOD(0x0062A7A0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0062A820, void, Awake, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062A8B0, void, OnDestroy, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062A990, ScenesManager *, get_ScenesManager, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsLoading, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062AA10, void, FreezeIfLoadingScenes, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062AB30, void, FreezeIfNotFrozen, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062AC10, void, UnfreezeIfFrozen, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062ACF0, void, LoadScenesAtPosition, (InstantLoadScenesController * __this, Action * action, bool async, bool pointSample));
IL2CPP_REGISTER_METHOD(0x0062B230, void, LogState, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062B3D0, void, OnScenesManagerFixedUpdate, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_LockFinishingLoading, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x0062B7C0, void, set_LockFinishingLoading, (InstantLoadScenesController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0062B8A0, void, CompleteLoading, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHODINFO(0x04795AC8, InstantLoadScenesController_CompleteLoading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0062BD30, void, OnGameReset, (InstantLoadScenesController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (InstantLoadScenesController * __this));
}
