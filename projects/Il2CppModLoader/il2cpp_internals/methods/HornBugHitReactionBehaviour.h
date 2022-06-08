using namespace app;

namespace app::methods::HornBugHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x0065FBE0, EntityDamageEvent *, get_DamageEvent, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_DamageEvent, (HornBugHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x00B6B7A0, void, OnInitializeTask, (HornBugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6BAC0, void, OnEnterTask, (HornBugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6BBE0, void, OnHit, (HornBugHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (HornBugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6C1D0, void, OnExitTask, (HornBugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6C1E0, void, StartTimeline, (HornBugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00B6C370, void, ResetTimeline, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B6C5D0, void, HandleReasonToNotInterrupt, (HornBugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00B6C6D0, void, ProcessKickback, (HornBugHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A640A0, bool, PlayedAdditiveAnim, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B6C890, void, TimelineFinished, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DFB0, HornBugHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B6C8B0, bool, CanInterrupt, (HornBugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00B6CB50, void, FlipEventStart, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047185A8, HornBugHitReactionBehaviour_FlipEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B6CBA0, bool, IsHeavyAttack, (HornBugHitReactionBehaviour * __this, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x00B6CBB0, void, PlayShake, (HornBugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B6CCB0, void, __ctor, (HornBugHitReactionBehaviour * __this));
}
