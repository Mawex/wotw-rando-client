using namespace app;

namespace app::methods::Moon::GroundPatrolWithDirectionBehaviour {
IL2CPP_REGISTER_METHOD(0x003FF610, GroundPatrolMode__Enum, get_PatrolMode, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_PatrolMode, (GroundPatrolWithDirectionBehaviour * __this, GroundPatrolMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00608710, GroundPatrolDirectionMode__Enum, get_PatrolDirectionMode, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_PatrolDirectionMode, (GroundPatrolWithDirectionBehaviour * __this, GroundPatrolDirectionMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01494130, Vector3, get_PatrolOrigin, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494150, void, set_PatrolOrigin, (GroundPatrolWithDirectionBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00623260, float, get_MaxPatrolRadius, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00623270, void, set_MaxPatrolRadius, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_MinIdleInterval, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007F58E0, void, set_MinIdleInterval, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0132F750, float, get_MaxIdleInterval, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01292100, void, set_MaxIdleInterval, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FC020, float, get_MinMovingInterval, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FC030, void, set_MinMovingInterval, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_MaxMovingInterval, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_MaxMovingInterval, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_StartWithMoving, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B11500, void, set_StartWithMoving, (GroundPatrolWithDirectionBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TraversalSpeed, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TraversalSpeed, (GroundPatrolWithDirectionBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x01494160, Vector2, get_MovingDirection, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014942E0, void, OnInitialize, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494380, void, OnExecute, (GroundPatrolWithDirectionBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x01494570, void, UpdateDirection, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014945A0, void, StartIdle, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494690, void, UpdateIdle, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494750, void, StartMoving, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494840, void, UpdateMoving, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014948E0, void, OnUpdateBehaviour, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494BA0, bool, KeepMoving, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494DF0, void, ChangePatrolDirection, (GroundPatrolWithDirectionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01494E30, void, OnEndBehaviour, (GroundPatrolWithDirectionBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x01494EE0, bool, PointInsideSphere, (GroundPatrolWithDirectionBehaviour * __this, Vector3 point, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x01494FD0, void, __ctor, (GroundPatrolWithDirectionBehaviour * __this));
}
