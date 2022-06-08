#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x017731C0, MoonTimeline *, get_HitReactionTimeline, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0EC0, void, OnInitializeTask, (PetrifiedOwlBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01773310, void, OnEnterTask, (PetrifiedOwlBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01773630, bool, CanInterrupt, (PetrifiedOwlBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x01773790, void, HandleReasonToNotInterrupt, (PetrifiedOwlBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x01773900, void, PlayHitAdditive, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01773D30, BehaviourStatus__Enum, OnExecuteTask, (PetrifiedOwlBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01773DA0, void, OnExitTask, (PetrifiedOwlBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01773DD0, Enum__Array *, GetEntries, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01773E70, Enum, Evaluate, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01773F10, void, Awake, (PetrifiedOwlBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01774020, void, __ctor, (PetrifiedOwlBossHitReactionBehaviour * __this));
}
