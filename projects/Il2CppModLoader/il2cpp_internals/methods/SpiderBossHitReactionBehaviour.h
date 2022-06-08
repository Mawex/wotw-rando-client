using namespace app;

namespace app::methods::SpiderBossHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011ADF30, void, StartRandomHitTimeline, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011ADFC0, bool, IsHitTimelineFinished, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AE0A0, void, StopHitTimeline, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AE180, void, OnEnterTask, (SpiderBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AE4C0, bool, CanInterrupt, (SpiderBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x011AE620, void, HandleReasonToNotInterrupt, (SpiderBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x011AE790, void, PlayHitAdditive, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AEBC0, BehaviourStatus__Enum, OnExecuteTask, (SpiderBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011AECE0, void, OnExitTask, (SpiderBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01042E70, void, OnDamageReceived, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047128E0, SpiderBossHitReactionBehaviour_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011AEEB0, void, Awake, (SpiderBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AEFC0, void, __ctor, (SpiderBossHitReactionBehaviour * __this));
}
