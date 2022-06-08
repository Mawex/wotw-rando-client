using namespace app;

namespace app::methods::SpiderBossLocomotion {
IL2CPP_REGISTER_METHOD(0x0049F2B0, Transform *, get_FeetTransform, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B46D0, Vector3, get_FeetPosition, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasArrivedAtTarget, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4760, bool, get_IsMovingToTarget, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Gravity, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Gravity, (SpiderBossLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E5BF60, EntityWeightData_EntityWeight__Enum, get_Weight, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B47F0, void, set_Weight, (SpiderBossLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x011B4800, Vector2, get_GravityDirection, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4890, Vector3, get_AdditiveLocalVelocity, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B48B0, void, set_AdditiveLocalVelocity, (SpiderBossLocomotion * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x011B48D0, void, Awake, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4910, void, OnEntityInitialization, (SpiderBossLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x011B4AC0, void, ConfigureStateMachine, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04732210, SpiderBossLocomotion_ConfigureStateMachine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B0220, EntityLocomotionTask *, get_DefaultFSMState, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4B10, void, ResetLocomotion, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4B40, void, OnFixedUpdate, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B4E00, EntityLocomotionTask *, GetNextBehaviour, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B5160, void, SetLookDirection, (SpiderBossLocomotion * __this, Vector2 lookDirection, EntityBehaviourNode * beh, bool instant));
IL2CPP_REGISTER_METHOD(0x011B52B0, void, SetLookDirectionX, (SpiderBossLocomotion * __this, float xLookDirection, EntityBehaviourNode * beh, bool instant));
IL2CPP_REGISTER_METHOD(0x011B53B0, void, SetLookDirectionTowardsPoint, (SpiderBossLocomotion * __this, Vector2 point, bool instant));
IL2CPP_REGISTER_METHOD(0x011B54D0, void, SetLookDirectionTowardsPoint, (SpiderBossLocomotion * __this, Vector2 point, EntityBehaviourNode * source, bool instant));
IL2CPP_REGISTER_METHOD(0x007832C0, void, InstantFlip, (SpiderBossLocomotion * __this, float directionSign));
IL2CPP_REGISTER_METHOD(0x011B55F0, Vector2, get_LookDirection, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B5610, void, set_LookDirection, (SpiderBossLocomotion * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x011B5640, bool, get_IsFacingLeft, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B5650, bool, get_IsTurning, (SpiderBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011B5660, void, __ctor, (SpiderBossLocomotion * __this));
}
