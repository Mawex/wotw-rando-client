#include <interception_macros.h>

namespace app::methods::Moon::TentacleIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x010AD3F0, Vector2, get_EffectiveRandomTargetCenter, (TentacleIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010AD5A0, void, OnEnterTask, (TentacleIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010AD750, void, NextRandomTarget, (TentacleIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010AD930, BehaviourStatus__Enum, OnExecuteTask, (TentacleIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010ADBA0, void, OnExitTask, (TentacleIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (TentacleIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010ADBF0, void, OnDrawGizmos, (TentacleIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010ADCC0, void, __ctor, (TentacleIdleBehaviour * __this));
}
