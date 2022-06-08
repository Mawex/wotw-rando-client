#include <interception_macros.h>

namespace app::methods::SwarmTargetingBehaviour {
IL2CPP_REGISTER_METHOD(0x01825920, void, Start, (SwarmTargetingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01825AC0, void, OnEnter, (SwarmTargetingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01825BB0, void, AssignLocomotionData, (SwarmTargetingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01825CB0, BehaviourStatus__Enum, OnExecute, (SwarmTargetingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01825F10, void, OnExit, (SwarmTargetingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01825FB0, Vector3, GetAtttackStartPositionSmart, (SwarmTargetingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (SwarmTargetingBehaviour * __this, Vector3 point, Color color));
IL2CPP_REGISTER_METHOD(0x018269C0, void, __ctor, (SwarmTargetingBehaviour * __this));
}
