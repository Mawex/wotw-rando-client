#include <interception_macros.h>

namespace app::methods::GoToSceneController {
IL2CPP_REGISTER_METHOD(0x007FE740, ScenesManager *, get_ScenesManager, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FE7C0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x007FE840, bool, CheckStartInScene, (MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x007FEA10, void, Awake, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FEAA0, void, OnDestroy, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FEB80, void, GoToScene, (GoToSceneController * __this, MoonGuid * sceneGuid, Vector3 position, String * sceneName, Action * onComplete, bool createCheckpoint, bool async));
IL2CPP_REGISTER_METHOD(0x007FECF0, void, FinishGoingToPositionImmediately, (GoToSceneController * __this));
IL2CPP_REGISTER_METHODINFO(0x04783E48, GoToSceneController_FinishGoingToPositionImmediately__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007FEEB0, void, OnScenesEnabled, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FEED0, void, CompleteGoingToAScene, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FF220, void, OnInstantLoadScenesControllerCompletedLoading, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FF390, void, OnScenesManagerFixedUpdate, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x007FF5C0, void, GoToScene, (GoToSceneController * __this, SceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint));
IL2CPP_REGISTER_METHOD(0x007FF670, void, GoToScene, (GoToSceneController * __this, RuntimeSceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint));
IL2CPP_REGISTER_METHOD(0x007FF7B0, void, GoToSceneAsync, (GoToSceneController * __this, SceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint));
IL2CPP_REGISTER_METHOD(0x007FF860, void, GoToSceneAsync, (GoToSceneController * __this, RuntimeSceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint));
IL2CPP_REGISTER_METHOD(0x007FF9A0, void, GoToReplayScene, (GoToSceneController * __this, RuntimeSceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint, Vector3 position));
IL2CPP_REGISTER_METHOD(0x007FFA00, void, GoToExitReplayScene, (GoToSceneController * __this, RuntimeSceneMetaData * sceneMetaData, Action * onComplete, bool createCheckpoint));
IL2CPP_REGISTER_METHOD(0x007FFB90, void, GoToSceneImmediately, (GoToSceneController * __this, SceneMetaData * scene, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x007FFBD0, void, GoToSceneImmediately, (GoToSceneController * __this, MoonGuid * sceneGuid, Action * onComplete, Vector3 position));
IL2CPP_REGISTER_METHOD(0x007FFBF0, void, GoToSceneImmediately, (GoToSceneController * __this, RuntimeSceneMetaData * scene, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x007FFD00, void, GoToScene, (GoToSceneController * __this, String * path));
IL2CPP_REGISTER_METHOD(0x007FFE70, bool, get_ShouldOpenSaveSlot, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x003FF2B0, int32_t, get_LastSelectedSaveSlot, (GoToSceneController * __this));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_LastSelectedSaveSlot, (GoToSceneController * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x007FFE80, void, __ctor, (GoToSceneController * __this));
}
