using namespace app;

namespace app::methods::HornbugBossHitReactionsBehaviour {
IL2CPP_REGISTER_METHOD(0x00B6F390, void, Awake, (HornbugBossHitReactionsBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B6F4A0, MoonTimeline *, PlayReaction, (HornbugBossHitReactionsBehaviour * __this, bool additive));
IL2CPP_REGISTER_METHOD(0x00B6F870, void, HandleReasonToNotInterrupt, (HornbugBossHitReactionsBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00B6F880, void, OnEnterTask, (HornbugBossHitReactionsBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (HornbugBossHitReactionsBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnHitReactionFinished, (HornbugBossHitReactionsBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047865D0, HornbugBossHitReactionsBehaviour_OnHitReactionFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B6F950, void, OnExitTask, (HornbugBossHitReactionsBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6FA20, void, __ctor, (HornbugBossHitReactionsBehaviour * __this));
}
