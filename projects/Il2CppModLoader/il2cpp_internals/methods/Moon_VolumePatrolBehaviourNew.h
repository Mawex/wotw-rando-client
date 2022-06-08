#include <interception_macros.h>

namespace app::methods::Moon::VolumePatrolBehaviourNew {
IL2CPP_REGISTER_METHOD(0x002FBD30, void, SetPatrolPointPredicate, (VolumePatrolBehaviourNew * __this, Predicate_1_UnityEngine_Vector3_ * predicate));
IL2CPP_REGISTER_METHOD(0x011A20E0, void, OnEnter, (VolumePatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011A2300, BehaviourStatus__Enum, OnExecute, (VolumePatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011A25E0, bool, KeepMoving, (VolumePatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011A2830, bool, PickNextPoint, (VolumePatrolBehaviourNew * __this, Vector2 * target));
IL2CPP_REGISTER_METHOD(0x011A2AB0, void, SetNextPoint, (VolumePatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011A2BC0, BehaviourStatus__Enum, OnChangePatrolPoint, (VolumePatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011A2CD0, void, OnExit, (VolumePatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011A2D80, bool, PointInsideSphere, (VolumePatrolBehaviourNew * __this, Vector3 point, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x011A2E70, void, __ctor, (VolumePatrolBehaviourNew * __this));
}
