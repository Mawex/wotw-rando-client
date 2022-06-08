using namespace app;

namespace app::methods::NickHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x005FDE00, EntityDamageEvent *, get_DamageEvent, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_DamageEvent, (NickHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x005FDE20, void, OnInitializeTask, (NickHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FE140, void, OnEnterTask, (NickHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FE2F0, void, OnHit, (NickHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (NickHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FE660, void, OnExitTask, (NickHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FE670, void, StartTimeline, (NickHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x005FE800, void, ResetTimeline, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FEA60, void, HandleReasonToNotInterrupt, (NickHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x005FEB60, void, ProcessKickback, (NickHitReactionBehaviour * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FEBC0, bool, PlayedAdditiveAnim, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FEC80, void, TimelineFinished, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04735600, NickHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005FECA0, bool, CanInterrupt, (NickHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x005FEF40, void, FlipEventStart, (NickHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B6A8, NickHitReactionBehaviour_FlipEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005FEF90, void, __ctor, (NickHitReactionBehaviour * __this));
}
