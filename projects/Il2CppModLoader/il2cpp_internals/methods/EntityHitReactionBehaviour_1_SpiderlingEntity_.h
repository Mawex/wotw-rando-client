#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_SpiderlingEntity_ {
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0477E2D8, EntityHitReactionBehaviour_1_SpiderlingEntity__OnInitializeTask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this, Vector2 force, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHODINFO(0x04710798, EntityHitReactionBehaviour_1_SpiderlingEntity__ApplyExternalKickbackForce__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04717230, EntityHitReactionBehaviour_1_SpiderlingEntity___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_SpiderlingEntity_ * __this, DamageWeight__Enum weight));
}
