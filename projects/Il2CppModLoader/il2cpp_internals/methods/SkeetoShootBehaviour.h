#include <interception_macros.h>

namespace app::methods::SkeetoShootBehaviour {
IL2CPP_REGISTER_METHOD(0x006B0760, SkeetoLocomotion *, get_Locomotion, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B0840, Entity *, get_Owner, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B08C0, Vector3, get_AimPosition, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B0A20, void, OnEnter, (SkeetoShootBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B0E70, BehaviourStatus__Enum, OnExecute, (SkeetoShootBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B1200, void, OnExit, (SkeetoShootBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B1620, void, EndBehaviour, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E618, SkeetoShootBehaviour_EndBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B1670, void, ChangeState, (SkeetoShootBehaviour * __this, SkeetoShootBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x006B1960, void, OnEnterFlipTowardsTarget, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B1970, void, UpdateFlipTowardsTarget, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitFlipTowardsTarget, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B19D0, void, EnterPreShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B1D60, void, UpdatePreShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B2210, void, ExitPreShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B23F0, void, EnterPostShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B2540, void, UpdatePostShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B26C0, void, ExitPostShootState, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B2770, void, ShootProjectile, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04763DD8, SkeetoShootBehaviour_ShootProjectile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B2FD0, void, PlayTimeline, (SkeetoShootBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnInterrupted, (SkeetoShootBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04770E68, SkeetoShootBehaviour_OnInterrupted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B33D0, void, __ctor, (SkeetoShootBehaviour * __this));
}
