#include <interception_macros.h>

namespace app::methods::Moon::SandWormDashBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00EC1200, Vector3, get_DashTargetPosition, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC1370, void, OnEntityInitialized, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC1420, void, OnEnter, (SandWormDashBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EC1B30, void, CalculateDashTime, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC1D20, BehaviourStatus__Enum, OnExecute, (SandWormDashBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EC1E20, void, OnExit, (SandWormDashBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EC2240, void, OnCollision, (SandWormDashBehaviourNew * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x00EC2390, void, OnMoonControllerCollision, (SandWormDashBehaviourNew * __this, MoonControllerColliderHit moonControllerColliderHit));
IL2CPP_REGISTER_METHODINFO(0x047776C8, SandWormDashBehaviourNew_OnMoonControllerCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC2420, void, OnNativeCollision, (SandWormDashBehaviourNew * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04703EA0, SandWormDashBehaviourNew_OnNativeCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC2460, void, HitWall, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC24A0, SandWormSandDigLocomotionBehaviour_SpeedEntry, GetSpeedSetting, (SandWormDashBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x047134D8, SandWormDashBehaviourNew_GetSpeedSetting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC2510, void, ChangeState, (SandWormDashBehaviourNew * __this, SandWormDashBehaviourNew_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00EC26B0, BehaviourStatus__Enum, OnAnticUpdate, (SandWormDashBehaviourNew * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00EC2960, BehaviourStatus__Enum, OnDashUpdate, (SandWormDashBehaviourNew * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00EC2BB0, BehaviourStatus__Enum, OnResolveUpdate, (SandWormDashBehaviourNew * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00EC2C10, void, __ctor, (SandWormDashBehaviourNew * __this));
}
