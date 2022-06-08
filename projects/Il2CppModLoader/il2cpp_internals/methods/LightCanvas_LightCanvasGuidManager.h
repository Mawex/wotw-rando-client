using namespace app;

namespace app::methods::LightCanvas_LightCanvasGuidManager {
IL2CPP_REGISTER_METHOD(0x01144960, Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ *, get_UsedGuidsPerScene, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01144B60, void, RegisterGuid, (SceneMetaData * sceneMeta, int32_t guid, bool * success));
IL2CPP_REGISTER_METHOD(0x01144F50, int32_t, GetNewGuid, (SceneMetaData * sceneMeta));
IL2CPP_REGISTER_METHOD(0x011452C0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01145490, void, StartObservingSceneChangedEvent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01145530, void, StopObservingSceneChangedEvent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneChanged, (Scene oldScene, Scene newScene));
IL2CPP_REGISTER_METHOD(0x011455D0, void, EnsureRegistration, (SceneMetaData * sceneMeta, int32_t guid));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
