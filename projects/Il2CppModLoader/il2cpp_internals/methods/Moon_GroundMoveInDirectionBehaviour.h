#include <interception_macros.h>

namespace app::methods::Moon::GroundMoveInDirectionBehaviour {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_MoveLeft, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_MoveLeft, (GroundMoveInDirectionBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_TraversalSpeed, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_TraversalSpeed, (GroundMoveInDirectionBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x008693A0, float, get_MinDuration, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_MinDuration, (GroundMoveInDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_MaxDuration, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_MaxDuration, (GroundMoveInDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x014916B0, void, OnExecute, (GroundMoveInDirectionBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x014917F0, void, OnUpdateBehaviour, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014918E0, void, OnEndBehaviour, (GroundMoveInDirectionBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x01491910, Locomotion *, get_Locomotion, (GroundMoveInDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (GroundMoveInDirectionBehaviour * __this));
}
