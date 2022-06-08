using namespace app;

namespace app::methods::GasballHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBCC0, EntityDamageEvent *, get_DamageEvent, (GasballHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_DamageEvent, (GasballHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x0041FE40, void, OnInitializeTask, (GasballHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041FF10, void, OnEnterTask, (GasballHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420020, void, OnHit, (GasballHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (GasballHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420240, void, OnExitTask, (GasballHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420250, void, StartTimeline, (GasballHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x004203E0, void, ResetTimeline, (GasballHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00420640, void, HandleReasonToNotInterrupt, (GasballHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00420740, Vector3, ProcessKickback, (GasballHitReactionBehaviour * __this, Damage * damage, float multiplier));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (GasballHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00420970, void, TimelineFinished, (GasballHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04750190, GasballHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420990, bool, CanInterrupt, (GasballHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x004209B0, void, __ctor, (GasballHitReactionBehaviour * __this));
}
