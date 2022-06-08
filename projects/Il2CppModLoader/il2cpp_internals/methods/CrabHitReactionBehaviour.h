using namespace app;

namespace app::methods::CrabHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00A64230, EntityDamageEvent *, get_DamageEvent, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00DB4A50, void, set_DamageEvent, (CrabHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x00DB4A60, void, OnInitializeTask, (CrabHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB4DA0, void, OnEnterTask, (CrabHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB4EC0, void, OnHit, (CrabHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (CrabHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB5480, void, OnExitTask, (CrabHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB5490, void, StartTimeline, (CrabHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00DB5620, void, ResetTimeline, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00DB5880, void, HandleReasonToNotInterrupt, (CrabHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00DB5980, void, ProcessKickback, (CrabHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, PlayedAdditiveAnim, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00DB59F0, void, TimelineFinished, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04750BB8, CrabHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DB5A10, bool, CanInterrupt, (CrabHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00DB5BB0, void, FlipEventStart, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04768A98, CrabHitReactionBehaviour_FlipEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DB5C00, void, PlayShake, (CrabHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00DB5CF0, void, __ctor, (CrabHitReactionBehaviour * __this));
}
