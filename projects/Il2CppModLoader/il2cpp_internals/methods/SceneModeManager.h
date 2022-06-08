#include <interception_macros.h>

namespace app::methods::SceneModeManager {
IL2CPP_REGISTER_METHOD(0x00BB0B90, SceneModeManager_SceneModeOverride__Enum, get_Mode, ());
IL2CPP_REGISTER_METHOD(0x00BB0C30, void, set_Mode, (SceneModeManager_SceneModeOverride__Enum value));
IL2CPP_REGISTER_METHOD(0x00420EE0, SceneModeManager_SceneModeOverride__Enum, get_EditorPrefMode, ());
IL2CPP_REGISTER_METHOD(0x00BB0CF0, void, UpdateMode, (SceneModeManager_SceneModeOverride__Enum mode, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x0474DAA8, SceneModeManager_UpdateMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BB0ED0, void, SetActiveGroupInAllScenesActive, (String * relativePathToSet, bool active, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00BB1190, void, HandleScene, (SceneRoot * sceneRoot, String * relativePathToSet, bool active));
IL2CPP_REGISTER_METHOD(0x00BB1300, List_1_SceneManagerScene_ *, GetAllSceneRoots, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SceneModeManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
