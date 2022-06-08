using namespace app;

namespace app::methods::FrogHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x016493B0, void, HandleReasonToNotInterrupt, (FrogHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x01649420, void, OnEnterTask, (FrogHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x016497F0, BehaviourStatus__Enum, OnExecuteTask, (FrogHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x016498E0, void, Explode, (FrogHitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (FrogHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01649980, void, __ctor, (FrogHitReactionBehaviour * __this));
}
