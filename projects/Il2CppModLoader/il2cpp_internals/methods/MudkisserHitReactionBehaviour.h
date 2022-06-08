using namespace app;

namespace app::methods::MudkisserHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00418200, EntityDamageEvent *, get_DamageEvent, (MudkisserHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008760C0, void, set_DamageEvent, (MudkisserHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x008760D0, void, StartTimeline, (MudkisserHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x008762A0, void, ResetTimeline, (MudkisserHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (MudkisserHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BE68, MudkisserHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00876520, bool, PlayedAdditiveAnim, (MudkisserHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00876630, void, OnHit, (MudkisserHitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x00876960, Vector2, ProcessSpecialMultipliers, (MudkisserHitReactionBehaviour * __this, Damage * damage, Vector2 finalForce));
IL2CPP_REGISTER_METHOD(0x00876A70, void, OnHitProtected, (MudkisserHitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x00876D90, void, ProcessKickback, (MudkisserHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00876EA0, void, HandleReasonToNotInterrupt, (MudkisserHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MudkisserHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008770F0, void, OnInitializeTask, (MudkisserHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00877220, void, OnEnterTask, (MudkisserHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (MudkisserHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008775B0, void, OnExitTask, (MudkisserHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008775C0, void, __ctor, (MudkisserHitReactionBehaviour * __this));
}
