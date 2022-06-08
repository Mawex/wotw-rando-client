using namespace app;

namespace app::methods::WandererIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (WandererIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C79D0, void, OnInitializeTask, (WandererIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C7AD0, void, PlayBaseIdle, (WandererIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008C7D50, void, OnEnterTask, (WandererIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C7E10, void, FinishBreakup, (WandererIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04709948, WandererIdleBehaviour_FinishBreakup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008C8010, void, PlayBreakup, (WandererIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008C8400, BehaviourStatus__Enum, OnExecuteTask, (WandererIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C8490, void, OnExitTask, (WandererIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (WandererIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (WandererIdleBehaviour * __this));
}
