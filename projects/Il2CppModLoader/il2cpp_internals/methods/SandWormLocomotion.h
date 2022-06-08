#include <interception_macros.h>

namespace app::methods::SandWormLocomotion {
IL2CPP_REGISTER_METHOD(0x00C1ECF0, float, get_LastAvoidancePower, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x006A63A0, Transform *, get_FeetTransform, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1ED20, Vector3, get_FeetPosition, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1EDB0, Vector3, get_UpDirection, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1EE70, void, set_UpDirection, (SandWormLocomotion * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x006D6510, SandWormLocomotion_SpeedSetting__Enum, get_CurrentSpeedSettings, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1EF30, void, set_CurrentSpeedSettings, (SandWormLocomotion * __this, SandWormLocomotion_SpeedSetting__Enum value));
IL2CPP_REGISTER_METHOD(0x00C1EF40, bool, get_IsFollowingTarget, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1EFF0, bool, get_HasArrivedAtTarget, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F000, float, get_Gravity, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F010, void, set_Gravity, (SandWormLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C1F020, EntityWeightData_EntityWeight__Enum, get_Weight, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F030, void, set_Weight, (SandWormLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x00C1F040, SuspendableMask__Enum, get_Mask, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F050, void, set_Mask, (SandWormLocomotion * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00C1F060, bool, get_IsSuspended, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F070, void, set_IsSuspended, (SandWormLocomotion * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C1F080, bool, get_IsAvoidingObstacles, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F090, void, set_IsAvoidingObstacles, (SandWormLocomotion * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B84400, bool, get_IsHeadInHabitat, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F0A0, void, MoveToPoint, (SandWormLocomotion * __this, Vector3 point, EntityBehaviourNode * source));
IL2CPP_REGISTER_METHOD(0x00C1F090, void, SetObstacleAvoidance, (SandWormLocomotion * __this, bool avoid));
IL2CPP_REGISTER_METHOD(0x00C1F180, void, StartFollowingTarget, (SandWormLocomotion * __this, Transform * followTarget));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetTargetVelocity, (SandWormLocomotion * __this, Vector2 targetVelocity));
IL2CPP_REGISTER_METHOD(0x00C1F220, void, SetVelocityDirectly, (SandWormLocomotion * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x00C1F250, Vector2, GetCurrentVelocity, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F280, void, SetSpeedSettings, (SandWormLocomotion * __this, SandWormLocomotion_SpeedSetting__Enum setting));
IL2CPP_REGISTER_METHOD(0x00C1F2B0, void, SetSpeedSettingsOverride, (SandWormLocomotion * __this, Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_ * sandDigSpeedSettingsOverride));
IL2CPP_REGISTER_METHOD(0x00C1F2E0, void, ConfigureStateMachine, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04738430, SandWormLocomotion_ConfigureStateMachine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0071F210, EntityLocomotionTask *, get_DefaultFSMState, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F330, void, OnEntityInitialization, (SandWormLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C1F430, void, OnEntityReset, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F4E0, EntityLocomotionTask *, GetNextBehaviour, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1F580, void, OnFixedUpdate, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandDigUpdate, (SandWormLocomotion * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00C1F870, void, OnEnterSand, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1FB00, void, OnExitSand, (SandWormLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00C1FD50, void, __ctor, (SandWormLocomotion * __this));
}
