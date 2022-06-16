#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SkeetoDiveAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x0074F800, app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum, get_State, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074F810, app::Entity *, get_Owner, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074F890, bool, get_IsAttacking, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074F8B0, app::Vector3, get_OffsetToTarget, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074F9F0, app::Vector3, get_InitialTargetPosition, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074FA10, void, set_InitialTargetPosition, (app::SkeetoDiveAttackBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0074FA30, app::Vector3, get_CurrentTargetPosition, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074FB90, void, OnEntityInitialized, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074FFB0, void, OnEnter, (app::SkeetoDiveAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0074FFE0, void, ScheduleClearanceSpherecast, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00750410, bool, HasClearanceToAttack, (app::SkeetoDiveAttackBehaviour * this_ptr, app::Vector3 offset_to_target))
    IL2CPP_REGISTER_METHOD(0x007504F0, app::BehaviourStatus__Enum, UpdateJobScheduledState, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751050, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoDiveAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x007511A0, void, ChangeState, (app::SkeetoDiveAttackBehaviour * this_ptr, app::SkeetoDiveAttackBehaviour_DiveAttackState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00751430, app::SkeetoLocomotion *, get_Locomotion, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751510, bool, IsFacingTarget, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751690, void, OnEnterFlipTowardsTarget, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, UpdateFlipTowardsTarget, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751910, void, OnExitFlipTowardsTarget, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751940, void, OnEnterAttackAnticipation, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751AE0, app::BehaviourStatus__Enum, UpdateAttackAnticipation, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751ED0, void, OnExitAttackAnticipation, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751EE0, void, OnEnterAttackLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007521D0, app::BehaviourStatus__Enum, UpdateAttackLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007525D0, void, OnExitAttackLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007527D0, void, OnEnterAttackResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007529C0, app::BehaviourStatus__Enum, UpdateAttackResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00752F40, void, OnExitAttackResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007531B0, void, OnEnterHitWallStunnedLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007531E0, app::BehaviourStatus__Enum, UpdateHitWallStunnedLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00753430, void, OnExitHitWallStunnedLoop, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00753470, void, OnEnterHitWallHit, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, UpdateHitWallHit, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751ED0, void, OnExitHitWallHit, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007536C0, void, OnEnterHitWallResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, UpdateHitWallResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00753860, void, OnExitHitWallResolve, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007538C0, void, OnEnterHitWallBackward, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, UpdateHitWallBackward, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00751ED0, void, OnExitHitWallBackward, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00753A60, void, OnExit, (app::SkeetoDiveAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00754000, void, OnCollision, (app::SkeetoDiveAttackBehaviour * this_ptr, app::GameObject * go, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x00754570, void, OnNativeCollision, (app::SkeetoDiveAttackBehaviour * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHODINFO(0x0478E960, SkeetoDiveAttackBehaviour_OnNativeCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754610, void, PlayTimeline, (app::SkeetoDiveAttackBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x00754680, void, ResetCurrentTimeline, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnInterrupted, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475ECA0, SkeetoDiveAttackBehaviour_OnInterrupted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754770, app::Vector3, OnRootMotion, (app::SkeetoDiveAttackBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0470A338, SkeetoDiveAttackBehaviour_OnRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754860, void, OnDestroy, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754A10, void, ctor, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754B20, void, _OnEnterFlipTowardsTarget_b__71_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750D08, SkeetoDiveAttackBehaviour__OnEnterFlipTowardsTarget_b__71_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B60, void, _OnEnterFlipTowardsTarget_b__71_1, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718678, SkeetoDiveAttackBehaviour__OnEnterFlipTowardsTarget_b__71_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B70, void, _OnEnterAttackAnticipation_b__74_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A320, SkeetoDiveAttackBehaviour__OnEnterAttackAnticipation_b__74_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnEnterAttackResolve_b__80_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788298, SkeetoDiveAttackBehaviour__OnEnterAttackResolve_b__80_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B90, void, _OnEnterHitWallHit_b__86_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A438, SkeetoDiveAttackBehaviour__OnEnterHitWallHit_b__86_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnEnterHitWallResolve_b__89_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706560, SkeetoDiveAttackBehaviour__OnEnterHitWallResolve_b__89_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnEnterHitWallBackward_b__92_0, (app::SkeetoDiveAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047631E0, SkeetoDiveAttackBehaviour__OnEnterHitWallBackward_b__92_0__MethodInfo)
}
