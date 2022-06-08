#include <interception_macros.h>

namespace app::methods::SpikeSlugHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00A64240, EntityDamageEvent *, get_DamageEvent, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00D72E70, void, set_DamageEvent, (SpikeSlugHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x011CD4F0, bool, get_HasShell, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011CD5D0, bool, get_CanInterruptSelf, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011CD5E0, bool, CanInterrupt, (SpikeSlugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x011CD790, void, OnCacheSerializedComponents, (SpikeSlugHitReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x011CD930, void, OnInitializeTask, (SpikeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CDB20, void, OnEnterTask, (SpikeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (SpikeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CDC40, void, OnExitTask, (SpikeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CDC50, void, OnHit, (SpikeSlugHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x011CEBD0, void, StartRotating, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011CECE0, MoonTimeline *, GetShelledHitTimeline, (SpikeSlugHitReactionBehaviour * __this, Vector3 normalizedDamageForce));
IL2CPP_REGISTER_METHOD(0x011CFCB0, void, StartTimeline, (SpikeSlugHitReactionBehaviour * __this, MoonTimeline * timeline, EventTriggerAnimator * stopEventOverride));
IL2CPP_REGISTER_METHOD(0x011CFF80, void, StartSecondaryTimeline, (SpikeSlugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011CFFD0, void, PlayAdditiveHit, (SpikeSlugHitReactionBehaviour * __this, bool hitFromFront, float damageAmount));
IL2CPP_REGISTER_METHOD(0x011D0150, void, ResetTimeline, (SpikeSlugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011D0370, void, HandleReasonToNotInterrupt, (SpikeSlugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x011D04D0, void, ProcessKickback, (SpikeSlugHitReactionBehaviour * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011D05B0, void, TimelineFinished, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047181D8, SpikeSlugHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011D07E0, void, PlayShake, (SpikeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011D08E0, void, __ctor, (SpikeSlugHitReactionBehaviour * __this));
}
