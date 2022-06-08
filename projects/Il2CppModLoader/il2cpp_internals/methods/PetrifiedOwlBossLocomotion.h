#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossLocomotion {
IL2CPP_REGISTER_METHOD(0x005B0220, Transform *, get_FeetTransform, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x012E28E0, Vector3, get_FeetPosition, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_HasArrivedAtTarget, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_Gravity, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x012E2900, void, set_Gravity, (PetrifiedOwlBossLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x00974AE0, EntityWeightData_EntityWeight__Enum, get_Weight, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, (PetrifiedOwlBossLocomotion * __this, EntityWeightData_EntityWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x01777F30, void, ConfigureStateMachine, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHODINFO(0x04799C70, PetrifiedOwlBossLocomotion_ConfigureStateMachine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065FBA0, EntityLocomotionTask *, get_DefaultFSMState, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityLocomotionTask *, GetNextBehaviour, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0083E8C0, PetrifiedOwlBossLocomotion_Stance__Enum, get_CurrentStance, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_CurrentStance, (PetrifiedOwlBossLocomotion * __this, PetrifiedOwlBossLocomotion_Stance__Enum value));
IL2CPP_REGISTER_METHOD(0x01777F80, void, OnEntityInitialization, (PetrifiedOwlBossLocomotion * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x01778200, void, OnDestroy, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01778230, void, OnFixedUpdate, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x017782B0, void, PlayIdle, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01778320, Vector3, OnProcessRootMotion, (PetrifiedOwlBossLocomotion * __this, Vector3 velocity));
IL2CPP_REGISTER_METHODINFO(0x04753138, PetrifiedOwlBossLocomotion_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01778790, bool, ShouldClampPositionX, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGUI, (PetrifiedOwlBossLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x004F1990, void, __ctor, (PetrifiedOwlBossLocomotion * __this));
}
