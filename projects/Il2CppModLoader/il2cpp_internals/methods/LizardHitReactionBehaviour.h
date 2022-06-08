#include <interception_macros.h>

namespace app::methods::LizardHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00FAE9A0, EntityDamageEvent *, get_DamageEvent, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FAE9B0, void, set_DamageEvent, (LizardHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x00FAE9C0, void, OnCacheSerializedComponents, (LizardHitReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00FAEB60, void, OnInitializeTask, (LizardHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAEF30, void, OnEnterTask, (LizardHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAF230, void, OnHit, (LizardHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00FAF760, bool, IsCounterAttackRunning, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FAF8D0, BehaviourStatus__Enum, OnExecuteTask, (LizardHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAF950, void, OnExitTask, (LizardHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FAF990, void, PlayAdditiveHit, (LizardHitReactionBehaviour * __this, bool hitFromFront, float damageAmount));
IL2CPP_REGISTER_METHOD(0x00FAFB70, void, StartSecondaryTimeline, (LizardHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00FAFBC0, void, StartTimeline, (LizardHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00FAFD60, void, ResetTimeline, (LizardHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00FAFF80, void, HandleReasonToNotInterrupt, (LizardHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00FB0080, void, ProcessKickback, (LizardHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, PlayedAdditiveAnim, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB00E0, void, TimelineFinished, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04755460, LizardHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FB0100, bool, CanInterrupt, (LizardHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00FB0310, void, FlipEventStart, (LizardHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047187C8, LizardHitReactionBehaviour_FlipEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionRollBackModifier, (LizardHitReactionBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x00FB0360, void, __ctor, (LizardHitReactionBehaviour * __this));
}
