using namespace app;

namespace app::methods::TriggerByString {
IL2CPP_REGISTER_METHOD(0x00B12B40, void, Register, (String * s));
IL2CPP_REGISTER_METHOD(0x00B12C00, void, Deregister, (String * s));
IL2CPP_REGISTER_METHOD(0x00B12CC0, void, Awake, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B12EF0, void, Start, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B12FF0, void, OnGameReset, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B130D0, void, FixedUpdate, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B131D0, void, DoTrigger, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B13370, void, SerializeStringTriggers, (Archive * ar));
IL2CPP_REGISTER_METHOD(0x00B137D0, void, OnDestroy, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B13990, void, OnSceneRootEnabledAfterSerialize, (TriggerByString * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x047734E0, TriggerByString_OnSceneRootEnabledAfterSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00611C70, void, __ctor, (TriggerByString * __this));
IL2CPP_REGISTER_METHOD(0x00B13BC0, void, __cctor, (MethodInfo * method));
}
