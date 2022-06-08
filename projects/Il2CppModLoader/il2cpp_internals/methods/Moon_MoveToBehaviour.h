#include <interception_macros.h>

namespace app::methods::Moon::MoveToBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (MoveToBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (MoveToBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_TraversalSpeed, (MoveToBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_TraversalSpeed, (MoveToBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0111BFD0, void, OnExecute, (MoveToBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x0111C0A0, void, OnUpdateBehaviour, (MoveToBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0111C150, void, OnEndBehaviour, (MoveToBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x0111C180, Locomotion *, get_Locomotion, (MoveToBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (MoveToBehaviour * __this));
}
