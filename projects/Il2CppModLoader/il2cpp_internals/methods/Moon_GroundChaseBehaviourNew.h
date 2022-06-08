#include <interception_macros.h>

namespace app::methods::Moon::GroundChaseBehaviourNew {
IL2CPP_REGISTER_METHOD(0x0148C470, float, get_EffectiveTraversalSpeed, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0070BAF0, float, get_ChasingTime, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148C690, void, set_ChasingTime, (GroundChaseBehaviourNew * __this, float value));
IL2CPP_REGISTER_METHOD(0x0148C6A0, Vector3, get_m_targetPos, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148CB50, void, OnEnter, (GroundChaseBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0148CD10, void, AssignLocomotionData, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148CDA0, BehaviourStatus__Enum, OnExecute, (GroundChaseBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0148D100, bool, CheckMovementBehaviourEndCondition, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01334270, bool, CheckArriveTargetEndCondition, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148D260, void, UpdateNearbyBounds, (GroundChaseBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148D400, void, OnExit, (GroundChaseBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01105890, bool, IsBlockingInterruption, (GroundChaseBehaviourNew * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x0148D410, void, __ctor, (GroundChaseBehaviourNew * __this));
}
