using namespace app;

namespace app::methods::LaserShooterHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00F13C60, void, HandleReasonToNotInterrupt, (LaserShooterHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00F13E60, void, OnEnterTask, (LaserShooterHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417920, BehaviourStatus__Enum, OnExecuteTask, (LaserShooterHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F13F80, void, __ctor, (LaserShooterHitReactionBehaviour * __this));
}
