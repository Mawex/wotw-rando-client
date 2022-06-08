#include <interception_macros.h>

namespace app::methods::Moon::Timeline::Systems::SceneManagementSystem {
IL2CPP_REGISTER_METHOD(0x00D094B0, void, IncreaseSceneEntityPlayCount, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D09510, void, SceneEntityPlaybackStarted, (SceneManagementSystem * __this, RuntimeSceneMetaData * masterScene, FixedDurationSceneEntity * fixedDurationSceneEntity));
IL2CPP_REGISTER_METHOD(0x004C4CE0, void, ResetSceneEntutyPlayCount, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D09520, void, SetSceneManagementMode, (SceneManagementSystem * __this, ScenesManager_SceneManagementMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x00D095D0, bool, get_IsPlayingMasterTimeline, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_IncreasedSceneEntityPlayCountTime, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_IncreasedSceneEntityPlayCountTime, (SceneManagementSystem * __this, float value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D09630, void, OnInit, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D097C0, void, IncreaseReferenceCount, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x00D09A30, void, OnUpdate, (SceneManagementSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D0A230, void, Enable, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData, Action * enabledCallback));
IL2CPP_REGISTER_METHODINFO(0x04710788, SceneManagementSystem_Enable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D0A520, void, Unsuspend, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x00D0A640, bool, IsLoaded, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHODINFO(0x04756CD8, SceneManagementSystem_IsLoaded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D0A760, bool, IsEnabled, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHODINFO(0x0476AAF8, SceneManagementSystem_IsEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D0A880, bool, IsSceneSuspended, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHODINFO(0x04743428, SceneManagementSystem_IsSceneSuspended__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D0A9A0, void, FlagEnabled, (SceneManagementSystem * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x00417920, SuspendableMask__Enum, get_Mask, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Mask, (SceneManagementSystem * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (SceneManagementSystem * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (SceneManagementSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D0AA90, void, __ctor, (SceneManagementSystem * __this));
}
