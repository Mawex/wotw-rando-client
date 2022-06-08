#include <interception_macros.h>

namespace app::methods::Moon::PatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_PatrolOrigin, (PatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_PatrolOrigin, (PatrolBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00C33350, void, OnExecute, (PatrolBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (PatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C33480, Locomotion *, get_Locomotion, (PatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (PatrolBehaviour * __this));
}
