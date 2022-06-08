using namespace app;

namespace app::methods::BatSwarmPlaceholder {
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (BatSwarmPlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00F961D0, void, set_Mask, (BatSwarmPlaceholder * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00F96280, void, Awake, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00F965B0, void, OnDestroy, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (BatSwarmPlaceholder * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00F96890, void, OnGameSerializeLoad, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B620, BatSwarmPlaceholder_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneRootDisabled, (BatSwarmPlaceholder * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x04767560, BatSwarmPlaceholder_OnSceneRootDisabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F96890, void, DestroyCurrentInstance, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00F96A00, void, FixedUpdate, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Spawn, (BatSwarmPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x008C5E20, void, __ctor, (BatSwarmPlaceholder * __this));
}
