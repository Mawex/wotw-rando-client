using namespace app;

namespace app::methods::KickupDeathBehaviour {
IL2CPP_REGISTER_METHOD(0x00E736D0, void, OnInitializeTask, (KickupDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E737A0, void, OnEnterTask, (KickupDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E737B0, BehaviourStatus__Enum, OnExecuteTask, (KickupDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E73C50, void, ChangeState, (KickupDeathBehaviour * __this, KickupDeathBehaviour_KickupState__Enum state));
IL2CPP_REGISTER_METHOD(0x00E740C0, void, OnExitTask, (KickupDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00672040, bool, KeepPlayingFallingLoop, (KickupDeathBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FE28, KickupDeathBehaviour_KeepPlayingFallingLoop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KickupDeathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (KickupDeathBehaviour * __this));
}
