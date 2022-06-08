#include <interception_macros.h>

namespace app::methods::LocomotionTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x00FC9020, bool, get_IsPlaying, (LocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC9040, void, PlayAnimation, (LocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC9180, bool, ShouldEndBehaviour, (LocomotionTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC91E0, void, OnExitTask, (LocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC9390, BehaviourStatus__Enum, OnExecuteTask, (LocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D201A0, void, __ctor, (LocomotionTurningBehaviour * __this));
}
