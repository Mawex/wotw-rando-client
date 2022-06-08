using namespace app;

namespace app::methods::DialogGraph {
IL2CPP_REGISTER_METHOD(0x00B8E940, IDialogNode *, get_ResolvedRootNode, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8EA00, IDialogNode *, get_CurrentActiveNode, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsSuspended, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsSuspended, (DialogGraph * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00653FB0, SuspendableMask__Enum, get_Mask, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8EA90, void, set_Mask, (DialogGraph * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B8EB50, IDialogNode__Array *, get_Nodes, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8EBE0, void, OnEnable, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8ECA0, void, OnDisable, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8ED60, void, Awake, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8ED70, void, OnUpdate, (DialogGraph * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00B8F000, void, StartDialogTree, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8F340, void, StopDialogTree, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8F650, void, OnStateChanged, (DialogGraph * __this, StateMachine_2 * sm));
IL2CPP_REGISTER_METHODINFO(0x04714A50, DialogGraph_OnStateChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B8F7E0, void, BuildStateMachine, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8FC00, void, ShowNCPScreen, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8FCF0, void, HideNPCScreen, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (DialogGraph * __this));
IL2CPP_REGISTER_METHOD(0x00B8FE10, void, __ctor, (DialogGraph * __this));
}
