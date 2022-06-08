using namespace app;

namespace app::methods::MinerHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x0049F2B0, EntityDamageEvent *, get_DamageEvent, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006A6390, void, set_DamageEvent, (MinerHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x01449F60, void, ResetTimeline, (MinerHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0144A180, void, StartTimeline, (MinerHitReactionBehaviour * __this, MoonTimeline * timeline, EventTriggerAnimator * stopEventOverride));
IL2CPP_REGISTER_METHOD(0x0144A440, void, StartSecondaryTimeline, (MinerHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0144A490, void, PlayAdditiveHit, (MinerHitReactionBehaviour * __this, bool hitFromFront, float damageAmount));
IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FF58, MinerHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144A610, bool, PlayedAdditiveAnim, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144A720, void, Awake, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144A900, void, OnDestroy, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144AAE0, bool, CanInterrupt, (MinerHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x0144AB90, void, OnHit, (MinerHitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x0144AFD0, void, ProcessKickback, (MinerHitReactionBehaviour * __this, Damage * damage, float forceMultiplier));
IL2CPP_REGISTER_METHOD(0x0144B250, float, ApplyModifier, (MinerHitReactionBehaviour * __this, float value, float multiplier, float min, float max));
IL2CPP_REGISTER_METHOD(0x0144B440, void, HandleReasonToNotInterrupt, (MinerHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0144B520, void, OnInitializeTask, (MinerHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144B660, void, OnEnterTask, (MinerHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (MinerHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144B770, void, OnExitTask, (MinerHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144B7B0, void, OnShieldDestroyed, (MinerHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04725648, MinerHitReactionBehaviour_OnShieldDestroyed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144B870, void, __ctor, (MinerHitReactionBehaviour * __this));
}
