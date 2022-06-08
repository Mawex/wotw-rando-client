using namespace app;

namespace app::methods::KwolokBossHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0EC0, void, OnInitializeTask, (KwolokBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E0ED0, void, OnEnterTask, (KwolokBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (KwolokBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E10A0, bool, CanInterrupt, (KwolokBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x012E13D0, void, HandleReasonToNotInterrupt, (KwolokBossHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x012E1540, void, PlayHitAdditive, (KwolokBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E1970, BehaviourStatus__Enum, OnExecuteTask, (KwolokBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E19E0, void, OnExitTask, (KwolokBossHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E1A30, bool, IsExecutingCannonAttack, (KwolokBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E1BA0, void, Awake, (KwolokBossHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E1CB0, void, __ctor, (KwolokBossHitReactionBehaviour * __this));
}
