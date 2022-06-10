#pragma once
#include <interception_macros.h>

namespace app::methods::GasballHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::EntityDamageEvent *, get_DamageEvent, (app::GasballHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_DamageEvent, (app::GasballHitReactionBehaviour * this_ptr, app::EntityDamageEvent * value))
    IL2CPP_REGISTER_METHOD(0x0041FE40, void, OnInitializeTask, (app::GasballHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0041FF10, void, OnEnterTask, (app::GasballHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420020, void, OnHit, (app::GasballHitReactionBehaviour * this_ptr, app::EntityDamageEvent * damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::GasballHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420240, void, OnExitTask, (app::GasballHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420250, void, StartTimeline, (app::GasballHitReactionBehaviour * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x004203E0, void, ResetTimeline, (app::GasballHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420640, void, HandleReasonToNotInterrupt, (app::GasballHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent * reaction_event))
    IL2CPP_REGISTER_METHOD(0x00420740, app::Vector3, ProcessKickback, (app::GasballHitReactionBehaviour * this_ptr, app::Damage * damage, float multiplier))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::GasballHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420970, void, TimelineFinished, (app::GasballHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750190, GasballHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420990, bool, CanInterrupt, (app::GasballHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x004209B0, void, ctor, (app::GasballHitReactionBehaviour * this_ptr))
}
