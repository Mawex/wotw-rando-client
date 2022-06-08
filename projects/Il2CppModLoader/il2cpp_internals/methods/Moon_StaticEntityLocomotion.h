using namespace app;

namespace app::methods::Moon::StaticEntityLocomotion {
IL2CPP_REGISTER_METHOD(0x005B0220, Transform *, get_FeetTransform, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E301D0, bool, get_SnapToTheGround, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00A17790, bool, IsLookDirectionLocked, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30290, Vector3, get_FeetPosition, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasArrivedAtTarget, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30320, float, get_Gravity, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00510F80, void, set_Gravity, (StaticEntityLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x0061E5E0, EntityWeightData_EntityWeight__Enum, get_Weight, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30330, void, set_Weight, (StaticEntityLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x00E30340, void, OnEntityInitialization, (StaticEntityLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00E304F0, void, ConfigureStateMachine, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0049F2B0, EntityLocomotionTask *, get_DefaultFSMState, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E308D0, bool, ShouldTriggerTurn, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04713490, StaticEntityLocomotion_ShouldTriggerTurn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E30CA0, void, OnEntityReset, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30CF0, void, OnFixedUpdate, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30DC0, void, SnapToGround, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30F70, EntityLocomotionTask *, GetNextBehaviour, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30FA0, void, ResetLocomotion, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E30FD0, void, SetLookDirectionX, (StaticEntityLocomotion * __this, float xLookDirection, bool instant));
IL2CPP_REGISTER_METHOD(0x00E310E0, void, SetLookDirectionX, (StaticEntityLocomotion * __this, float xLookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x00E311F0, void, SetLookDirection, (StaticEntityLocomotion * __this, Vector2 lookDirection, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x00E31380, void, SetLookDirectionTowardsPoint, (StaticEntityLocomotion * __this, Vector2 point, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E315C0, void, InstantFlip, (StaticEntityLocomotion * __this, float directionSign));
IL2CPP_REGISTER_METHOD(0x00E317D0, void, LockLookDirection, (StaticEntityLocomotion * __this, float directionX, EntityBehaviour * source));
IL2CPP_REGISTER_METHOD(0x00E318B0, void, UnlockLookDirection, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E318D0, Vector2, get_LookDirection, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E31B60, bool, get_IsFacingLeft, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E31B90, bool, get_IsTurning, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E31C60, void, OnDrawGizmosSelected, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E31E80, void, __ctor, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00E31EA0, bool, _ConfigureStateMachine_b__29_0, (StaticEntityLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04755F78, StaticEntityLocomotion__ConfigureStateMachine_b__29_0__MethodInfo);
}
