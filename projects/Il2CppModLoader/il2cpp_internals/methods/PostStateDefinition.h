using namespace app;

namespace app::methods::PostStateDefinition {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C69930, void, OnDestroy, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C69940, void, UpdateSceneRoot, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C69B00, void, ApplyKnownState, (PostStateDefinition * __this, int32_t stateGUID, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00C69BD0, void, RemoveAllInfluences, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C69CE0, Int32__Array *, GetAllStateGUIDs, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C69E10, String *, GetStateName, (PostStateDefinition * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x00C69EC0, bool, HasStateGUID, (PostStateDefinition * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x00C69EE0, PostStateDefinition_PostState *, GetStateByGuid, (PostStateDefinition * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x00C69FE0, void, AddState, (PostStateDefinition * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00C6A170, void, RemoveStateByIndex, (PostStateDefinition * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00C6A210, int32_t, GetNewGuid, (PostStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00C6A500, void, __ctor, (PostStateDefinition * __this));
}
