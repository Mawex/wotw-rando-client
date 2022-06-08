using namespace app;

namespace app::methods::Moon::GroundPatrolWithDirectionBehaviourNew {
IL2CPP_REGISTER_METHOD(0x01494FE0, Vector3, get_PatrolOrigin, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495030, Vector3, get_TargetPosition, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495080, Vector2, get_MovingDirection, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x014952A0, Vector2, get_MovingDirectionRotated, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x014953E0, void, OnEntityInitialized, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495480, void, OnEnter, (GroundPatrolWithDirectionBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x014956F0, BehaviourStatus__Enum, OnExecute, (GroundPatrolWithDirectionBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01495890, void, OnExit, (GroundPatrolWithDirectionBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01495940, void, UpdateDirection, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495A80, void, StartIdle, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495C20, BehaviourStatus__Enum, UpdateIdle, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01495E60, void, StartMoving, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01496000, void, UpdateMoving, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x014962F0, bool, KeepMoving, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01496C30, BehaviourStatus__Enum, ChangePatrolDirection, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01496C60, bool, PointInsideSphere, (GroundPatrolWithDirectionBehaviourNew * __this, Vector3 point, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00A9AA40, bool, ShouldFollowTarget, (GroundPatrolWithDirectionBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01496D50, void, __ctor, (GroundPatrolWithDirectionBehaviourNew * __this));
}
