#include <interception_macros.h>

namespace app::methods::GroundChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (GroundChaseBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_UsePredictedOriPosition, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_UsePredictedOriPosition, (GroundChaseBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, get_ClampPredictedPosition, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108CEC0, void, set_ClampPredictedPosition, (GroundChaseBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_TraversalSpeed, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_TraversalSpeed, (GroundChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00623240, float, get_NearTargetTraversalSpeed, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00623250, void, set_NearTargetTraversalSpeed, (GroundChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_LookAtTargetAfterArrive, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_LookAtTargetAfterArrive, (GroundChaseBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0108CED0, float, get_EffectiveTraversalSpeed, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FDD60, float, get_ChasingTime, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108D0E0, void, set_ChasingTime, (GroundChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0108D0F0, Vector3, get_m_targetPos, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108D4B0, void, OnExecute, (GroundChaseBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x0108D610, void, AssignLocomotionData, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108D6C0, void, OnUpdateBehaviour, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108D9C0, void, CheckMovementBehaviourEndCondition, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108DAA0, void, CheckArriveTargetEndCondition, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108DB50, void, UpdateNearbyBounds, (GroundChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0108DCF0, void, OnEndBehaviour, (GroundChaseBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (GroundChaseBehaviour * __this));
}
