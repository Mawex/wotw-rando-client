using namespace app;

namespace app::methods::LocomotionIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x00FC7270, void, OnEnterTask, (LocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (LocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC7360, void, OnExitTask, (LocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC7430, void, SwapIdle, (LocomotionIdleBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (LocomotionIdleBehaviour * __this));
}
