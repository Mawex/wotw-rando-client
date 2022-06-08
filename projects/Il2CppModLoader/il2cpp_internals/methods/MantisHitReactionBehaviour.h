using namespace app;

namespace app::methods::MantisHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x005FDE00, EntityDamageEvent *, get_DamageEvent, (MantisHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_DamageEvent, (MantisHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x009FD090, void, StartTimeline, (MantisHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x009FD2F0, void, StartSecondaryTimeline, (MantisHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x009FD420, void, ResetTimeline, (MantisHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (MantisHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047161C0, MantisHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FD680, void, OnHit, (MantisHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x005FEB60, void, ProcessKickback, (MantisHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x009FD9D0, void, HandleReasonToNotInterrupt, (MantisHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x009FDB50, bool, CanInterrupt, (MantisHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MantisHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FDDE0, void, OnInitializeTask, (MantisHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009FE020, void, OnEnterTask, (MantisHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009FE1C0, BehaviourStatus__Enum, OnExecuteTask, (MantisHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FE660, void, OnExitTask, (MantisHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009FE2F0, void, PlayAdditiveHit, (MantisHitReactionBehaviour * __this, bool hitFromFront, float damageAmount));
IL2CPP_REGISTER_METHOD(0x009FE4B0, void, __ctor, (MantisHitReactionBehaviour * __this));
}
