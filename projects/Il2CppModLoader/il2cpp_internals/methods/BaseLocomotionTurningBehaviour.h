#include <interception_macros.h>

namespace app::methods::BaseLocomotionTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x00623260, float, get_TargetLookDirectionX, (BaseLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00623270, void, set_TargetLookDirectionX, (BaseLocomotionTurningBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00F86020, bool, get_IsPlaying, (BaseLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F86070, void, OnInitializeTask, (BaseLocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F86170, void, OnEnterTask, (BaseLocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanCancel, (BaseLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F863D0, BehaviourStatus__Enum, OnExecuteTask, (BaseLocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (BaseLocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (BaseLocomotionTurningBehaviour * __this));
}
