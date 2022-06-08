using namespace app;

namespace app::methods::Moon::TimeSlicer::TimesliceSceneUnloadTask {
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SceneName, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (TimesliceSceneUnloadTask * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010C5C10, void, __ctor, (TimesliceSceneUnloadTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, GameObject * sceneRoot, bool reversedOrder, GameObject * owner, Action_1_Boolean_ * onJobCompleted, String * sceneName));
IL2CPP_REGISTER_METHOD(0x010C5CB0, void, Config, (TimesliceSceneUnloadTask * __this, List_1_UnityEngine_GameObject_ * targetObjects, GameObject * sceneRoot, bool reversedOrder, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5CD0, void, ProcessAllObjects, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5DB0, IEnumerator *, TimeslicedUnload, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C5F00, void, ProcessObject, (TimesliceSceneUnloadTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x010C6060, void, Reset, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C60A0, String *, get_JobName, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimesliceSceneUnloadTask * __this));
IL2CPP_REGISTER_METHOD(0x010C6170, void, __cctor, (MethodInfo * method));
}
