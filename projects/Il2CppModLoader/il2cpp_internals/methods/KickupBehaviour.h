using namespace app;

namespace app::methods::KickupBehaviour {
IL2CPP_REGISTER_METHOD(0x00E72A70, void, OnInitializeTask, (KickupBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E72B50, void, OnEnterTask, (KickupBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E72B60, BehaviourStatus__Enum, OnExecuteTask, (KickupBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E72DD0, void, ChangeState, (KickupBehaviour * __this, KickupBehaviour_KickupState__Enum state));
IL2CPP_REGISTER_METHOD(0x00E732C0, void, OnExitTask, (KickupBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E73680, void, KickupAnimEnd, (KickupBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04724310, KickupBehaviour_KickupAnimEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E73690, void, LandingAnimEnd, (KickupBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047053E8, KickupBehaviour_LandingAnimEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KickupBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (KickupBehaviour * __this));
}
