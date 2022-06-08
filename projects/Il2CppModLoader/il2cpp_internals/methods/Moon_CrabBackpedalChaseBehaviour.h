using namespace app;

namespace app::methods::Moon::CrabBackpedalChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x00CC95D0, float, get_EffectiveTraversalSpeed, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006F45C0, float, get_ChasingTime, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006F45D0, void, set_ChasingTime, (CrabBackpedalChaseBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00CC97F0, Vector3, get_m_targetPos, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC98E0, float, get_TargetMoveDirection, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC9A20, void, OnEnter, (CrabBackpedalChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CC9CC0, void, AssignLocomotionData, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC9DC0, BehaviourStatus__Enum, OnExecute, (CrabBackpedalChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCA170, bool, CheckMovementBehaviourEndCondition, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCA2D0, bool, CheckArriveTargetEndCondition, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCA380, void, UpdateNearbyBounds, (CrabBackpedalChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCA520, void, OnExit, (CrabBackpedalChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCA630, void, __ctor, (CrabBackpedalChaseBehaviour * __this));
}
