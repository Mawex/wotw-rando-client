#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_LizardEntity_ {
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_LizardEntity_ * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0470AC30, EntityHitReactionBehaviour_1_LizardEntity__OnInitializeTask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (EntityHitReactionBehaviour_1_LizardEntity_ * __this, Vector2 force, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHODINFO(0x04720A68, EntityHitReactionBehaviour_1_LizardEntity__ApplyExternalKickbackForce__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_LizardEntity_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHODINFO(0x04766428, EntityHitReactionBehaviour_1_LizardEntity__CanInterrupt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_LizardEntity_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04769430, EntityHitReactionBehaviour_1_LizardEntity___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_LizardEntity_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_LizardEntity_ * __this, DamageWeight__Enum weight));
}
