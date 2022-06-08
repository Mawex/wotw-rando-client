#include <interception_macros.h>

namespace app::methods::UnityEngine::SceneManagement::Scene {
IL2CPP_REGISTER_METHOD(0x02978E80, bool, IsValidInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02978ED0, String *, GetPathInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02978F20, String *, GetNameInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02978F70, bool, GetIsLoadedInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02978FC0, int32_t, GetBuildIndexInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02979010, int32_t, GetRootCountInternal, (int32_t sceneHandle));
IL2CPP_REGISTER_METHOD(0x02979060, void, GetRootGameObjectsInternal, (int32_t sceneHandle, Object * resultRootList));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_handle, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002185A0, bool, IsValid, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002185F0, String *, get_path, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218640, String *, get_name, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218690, bool, get_isLoaded, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002186E0, int32_t, get_buildIndex, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218730, int32_t, get_rootCount, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218780, GameObject__Array *, GetRootGameObjects, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218790, void, GetRootGameObjects, (Scene__Boxed * __this, List_1_UnityEngine_GameObject_ * rootGameObjects));
IL2CPP_REGISTER_METHODINFO(0x047558A0, Scene_GetRootGameObjects_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (Scene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002187A0, bool, Equals, (Scene__Boxed * __this, Object * other));
}
