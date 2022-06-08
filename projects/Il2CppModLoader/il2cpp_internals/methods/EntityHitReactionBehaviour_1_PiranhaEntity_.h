using namespace app;

namespace app::methods::EntityHitReactionBehaviour_1_PiranhaEntity_ {
IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this, Vector2 force, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHODINFO(0x0476CFD8, EntityHitReactionBehaviour_1_PiranhaEntity__ApplyExternalKickbackForce__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x047678E8, EntityHitReactionBehaviour_1_PiranhaEntity__OnInitializeTask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E000, EntityHitReactionBehaviour_1_PiranhaEntity___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_PiranhaEntity_ * __this, DamageWeight__Enum weight));
}
