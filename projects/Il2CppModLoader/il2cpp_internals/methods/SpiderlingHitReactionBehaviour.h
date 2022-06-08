#include <interception_macros.h>

namespace app::methods::SpiderlingHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00A64220, EntityDamageEvent *, get_DamageEvent, (SpiderlingHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00510100, void, set_DamageEvent, (SpiderlingHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x011C47A0, void, OnCacheSerializedComponents, (SpiderlingHitReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x011C4860, void, OnInitializeTask, (SpiderlingHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C4980, void, OnEnterTask, (SpiderlingHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C4AA0, BehaviourStatus__Enum, OnExecuteTask, (SpiderlingHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C4B90, void, OnExitTask, (SpiderlingHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C4BA0, void, OnHit, (SpiderlingHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x011C5180, void, StartTimeline, (SpiderlingHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011C5310, void, ResetTimeline, (SpiderlingHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C5570, void, HandleReasonToNotInterrupt, (SpiderlingHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x011C56F0, void, ProcessKickback, (SpiderlingHitReactionBehaviour * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderlingHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, PlayedAdditiveAnim, (SpiderlingHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C5730, void, TimelineFinished, (SpiderlingHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04779720, SpiderlingHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C5750, void, __ctor, (SpiderlingHitReactionBehaviour * __this));
}
