using namespace app;

namespace app::methods::Moon::GroundPatrolBehaviourNew {
IL2CPP_REGISTER_METHOD(0x01492620, Vector3, get_EffectivePatrollOrigin, (GroundPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, SetPatrolPointPredicate, (GroundPatrolBehaviourNew * __this, Predicate_1_UnityEngine_Vector3_ * predicate));
IL2CPP_REGISTER_METHOD(0x01492660, void, OnEntityInitialized, (GroundPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01492830, void, OnEnter, (GroundPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01492E40, BehaviourStatus__Enum, OnExecute, (GroundPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01493110, void, OnExit, (GroundPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x014931C0, bool, KeepMoving, (GroundPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01493450, void, SetNextPoint, (GroundPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x014939E0, BehaviourStatus__Enum, OnChangePatrolPoint, (GroundPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01493AD0, bool, PointInsideSphere, (GroundPatrolBehaviourNew * __this, Vector3 point, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x01493BC0, Vector3, ClampToAllowedArea, (GroundPatrolBehaviourNew * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01493D80, Vector3, CastPositionToGround, (GroundPatrolBehaviourNew * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x014940E0, void, __ctor, (GroundPatrolBehaviourNew * __this));
}
