using namespace app;

namespace app::methods::TurbulenceStateDefinition {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00B1B720, void, OnDestroy, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00B1B730, void, ApplyKnownState, (TurbulenceStateDefinition * __this, int32_t stateGUID, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00B1B800, void, RemoveAllInfluences, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00B1B910, Int32__Array *, GetAllStateGUIDs, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00B1BA40, String *, GetStateName, (TurbulenceStateDefinition * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x00B1BAF0, bool, HasStateGUID, (TurbulenceStateDefinition * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x00B1BB10, TurbulenceStateDefinition_TurbulenceState *, GetStateByGuid, (TurbulenceStateDefinition * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x00B1BC10, void, AddState, (TurbulenceStateDefinition * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00B1BDB0, void, RemoveStateByIndex, (TurbulenceStateDefinition * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00B1BE50, int32_t, GetNewGuid, (TurbulenceStateDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00B1C150, void, __ctor, (TurbulenceStateDefinition * __this));
}
