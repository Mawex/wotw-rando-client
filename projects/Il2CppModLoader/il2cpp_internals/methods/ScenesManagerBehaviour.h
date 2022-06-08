using namespace app;

namespace app::methods::ScenesManagerBehaviour {
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_SceneOperation_ *, get_SceneOperationsEnable, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, List_1_SceneOperation_ *, get_SceneOperationsLoad, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_SceneOperation_ *, get_SceneOperationsUnload, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_CurrentCameraTargetPosition, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052DC0, SceneLoadingQueue *, get_Queue, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052DF0, ScenesManager *, get_Manager, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ScenesManagerContext *, get_Context, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052E10, List_1_SceneManagerScene_ *, get_ActiveScenes, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052E40, ScenesManagerSettings *, get_Settings, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, Initialize, (ScenesManagerBehaviour * __this, ScenesManagerContext * context));
IL2CPP_REGISTER_METHOD(0x01052E70, bool, CanUnload, (ScenesManagerBehaviour * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x01052EA0, bool, CanDisable, (ScenesManagerBehaviour * __this, RuntimeSceneMetaData * metaData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01052ED0, void, UpdatePosition, (ScenesManagerBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01053140, void, SetTargetPosition, (ScenesManagerBehaviour * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x010531F0, void, __ctor, (ScenesManagerBehaviour * __this));
}
