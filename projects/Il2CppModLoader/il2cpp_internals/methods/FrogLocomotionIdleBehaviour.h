#include <interception_macros.h>

namespace app::methods::FrogLocomotionIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x01649A20, void, OnEnterTask, (FrogLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (FrogLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01649BD0, void, OnExitTask, (FrogLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (FrogLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (FrogLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01649CA0, void, PlayTimeline, (FrogLocomotionIdleBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x01649DC0, void, OnIdleEnd, (FrogLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ECB8, FrogLocomotionIdleBehaviour_OnIdleEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0164A0D0, void, OnEyeCandyEnd, (FrogLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047052F0, FrogLocomotionIdleBehaviour_OnEyeCandyEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0164A2A0, void, __ctor, (FrogLocomotionIdleBehaviour * __this));
}
