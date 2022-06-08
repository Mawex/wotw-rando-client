using namespace app;

namespace app::methods::GiantSlugHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x006A63A0, EntityDamageEvent *, get_DamageEvent, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_DamageEvent, (GiantSlugHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x007F3550, void, OnInitializeTask, (GiantSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F3670, void, OnEnterTask, (GiantSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHit, (GiantSlugHitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x007F3770, void, StartRotating, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (GiantSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F3820, void, OnExitTask, (GiantSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F3830, void, StartTimeline, (GiantSlugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x007F39C0, void, ResetTimeline, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007F3C20, void, HandleReasonToNotInterrupt, (GiantSlugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x007F3CF0, void, ProcessKickback, (GiantSlugHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007F3D50, bool, PlayedAdditiveAnim, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00757DD0, void, TimelineFinished, (GiantSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B750, GiantSlugHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007F3E60, void, __ctor, (GiantSlugHitReactionBehaviour * __this));
}
