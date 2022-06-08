using namespace app;

namespace app::methods::Moon::Timeline::DesiredStateTransition {
IL2CPP_REGISTER_METHOD(0x00107C30, IGenericUberState *, get_GenericUberState, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3C0, void, set_GenericUberState, (DesiredStateTransition__Boxed * __this, IGenericUberState * value));
IL2CPP_REGISTER_METHOD(0x001C0A80, void, Perform, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C0B70, void, WriteDesiredStates, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0476AA48, DesiredStateTransition_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C0B80, void, Revert, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C30, IUberState *, get_UberState, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C0CC0, String *, get_NiceName, (DesiredStateTransition__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C0CD0, bool, IsFulfilled, (DesiredStateTransition__Boxed * __this));
}
