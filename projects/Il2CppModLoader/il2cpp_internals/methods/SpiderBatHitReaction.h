#include <interception_macros.h>

namespace app::methods::SpiderBatHitReaction {
IL2CPP_REGISTER_METHOD(0x006A63A0, EntityDamageEvent *, get_DamageEvent, (SpiderBatHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_DamageEvent, (SpiderBatHitReaction * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x0095BD00, void, OnEnterTask, (SpiderBatHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0095BE20, void, OnHit, (SpiderBatHitReaction * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (SpiderBatHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F3820, void, OnExitTask, (SpiderBatHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0095C130, void, StartTimeline, (SpiderBatHitReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0095C2C0, void, ResetTimeline, (SpiderBatHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x0095C520, void, HandleReasonToNotInterrupt, (SpiderBatHitReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderBatHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00875720, bool, PlayedAdditiveAnim, (SpiderBatHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x0095C600, void, TimelineFinished, (SpiderBatHitReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C860, SpiderBatHitReaction_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0095C660, void, __ctor, (SpiderBatHitReaction * __this));
}
