#include <interception_macros.h>

namespace app::methods::LocomotionIdleTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (LocomotionIdleTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC7A10, void, OnEnterTask, (LocomotionIdleTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC7AE0, void, OnExitTask, (LocomotionIdleTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionIdleTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionIdleTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (LocomotionIdleTimelineBehaviour * __this));
}
