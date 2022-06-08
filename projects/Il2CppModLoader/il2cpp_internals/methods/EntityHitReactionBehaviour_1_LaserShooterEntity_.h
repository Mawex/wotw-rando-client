using namespace app;

namespace app::methods::EntityHitReactionBehaviour_1_LaserShooterEntity_ {
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04756260, EntityHitReactionBehaviour_1_LaserShooterEntity___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this));
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_LaserShooterEntity_ * __this, DamageWeight__Enum weight));
}
