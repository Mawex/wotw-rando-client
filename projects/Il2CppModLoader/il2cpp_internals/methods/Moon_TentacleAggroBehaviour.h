#include <interception_macros.h>

namespace app::methods::Moon::TentacleAggroBehaviour {
IL2CPP_REGISTER_METHOD(0x010AB560, void, OnEnter, (TentacleAggroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010AB6A0, BehaviourStatus__Enum, OnExecute, (TentacleAggroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010AB8D0, void, OnExit, (TentacleAggroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TentacleAggroBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010AB9C0, void, __ctor, (TentacleAggroBehaviour * __this));
}
