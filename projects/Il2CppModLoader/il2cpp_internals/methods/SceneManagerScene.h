#include <interception_macros.h>

namespace app::methods::SceneManagerScene {
IL2CPP_REGISTER_METHOD(0x00BA9A60, void, __ctor, (SceneManagerScene * __this, SceneRoot * sceneRoot, RuntimeSceneMetaData * sceneMetaData, SceneState__Enum initalState));
IL2CPP_REGISTER_METHOD(0x00BA9BC0, void, __ctor, (SceneManagerScene * __this, SceneRoot * sceneRoot, RuntimeSceneMetaData * sceneMetaData));
IL2CPP_REGISTER_METHOD(0x00BA9D10, void, __ctor, (SceneManagerScene * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x00BA9E70, bool, get_IsLoadingComplete, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BA9ED0, SceneState__Enum, get_CurrentState, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_ShouldBeReady, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_ShouldBeReady, (SceneManagerScene * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_ShouldBeVisible, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BA9F00, void, set_ShouldBeVisible, (SceneManagerScene * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_ShouldBeEnabled, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00B11430, void, set_ShouldBeEnabled, (SceneManagerScene * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_DistanceToPositionOnLastEnable, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_DistanceToPositionOnLastEnable, (SceneManagerScene * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B1EA60, Vector3, get_CameraTargetOnLastEnabled, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00B1EA50, void, set_CameraTargetOnLastEnabled, (SceneManagerScene * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_DistanceToPositionOnLastLoad, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00724130, void, set_DistanceToPositionOnLastLoad, (SceneManagerScene * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetSceneRoot, (SceneManagerScene * __this, SceneRoot * root));
IL2CPP_REGISTER_METHOD(0x00BA9F10, void, ForceChangeState, (SceneManagerScene * __this, SceneState__Enum state));
IL2CPP_REGISTER_METHOD(0x00BAA000, void, ChangeState, (SceneManagerScene * __this, SceneState__Enum state));
IL2CPP_REGISTER_METHOD(0x00BA9E70, bool, get_IsLoaded, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA2E0, bool, get_IsLoading, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA340, bool, get_IsVisible, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA3A0, bool, get_IsEnabled, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA3D0, bool, get_IsTitleScreen, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA4D0, bool, get_DebugOutput, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA570, void, DebugLog, (SceneManagerScene * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA610, void, EnableScene, (SceneManagerScene * __this, bool async));
IL2CPP_REGISTER_METHOD(0x00BAA7F0, void, DisableScene, (SceneManagerScene * __this, bool async));
IL2CPP_REGISTER_METHOD(0x00BAA9B0, void, StartLoading, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA9C0, void, LoadingCompleted, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAA9F0, void, CancelLoading, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAAA50, void, PrepareToDisable, (SceneManagerScene * __this, float unloadTime));
IL2CPP_REGISTER_METHOD(0x00BAAA80, void, EnableDisabledSceneTimesliced, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAAC70, void, EnableDisabledScene, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAAD50, void, PreEnableScene, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAAEB0, void, PostEnableScene, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAB060, void, PostDisableScene, (SceneManagerScene * __this));
IL2CPP_REGISTER_METHOD(0x00BAB230, void, _DisableScene_b__65_0, (SceneManagerScene * __this, bool result));
IL2CPP_REGISTER_METHODINFO(0x04787D18, SceneManagerScene__DisableScene_b__65_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BAB240, void, _EnableDisabledSceneTimesliced_b__70_0, (SceneManagerScene * __this, bool result));
IL2CPP_REGISTER_METHODINFO(0x04705980, SceneManagerScene__EnableDisabledSceneTimesliced_b__70_0__MethodInfo);
}
