#include <interception_macros.h>

namespace app::methods::Moon::ChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBBE0, GameObject *, get_ChaseTarget, (ChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_ChaseTarget, (ChaseBehaviour * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x00CC41B0, void, OnExecute, (ChaseBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x00CC4290, void, OnUpdateBehaviour, (ChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (ChaseBehaviour * __this));
}
