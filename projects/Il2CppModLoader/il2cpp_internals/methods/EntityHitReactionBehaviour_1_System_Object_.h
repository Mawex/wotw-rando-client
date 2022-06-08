using namespace app;

namespace app::methods::EntityHitReactionBehaviour_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_HasLocomotion, (EntityHitReactionBehaviour_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_HasLocomotion, (EntityHitReactionBehaviour_1_System_Object_ * __this, bool value));
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_System_Object_ * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_System_Object_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (EntityHitReactionBehaviour_1_System_Object_ * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (EntityHitReactionBehaviour_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_System_Object_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (EntityHitReactionBehaviour_1_System_Object_ * __this, Vector2 force, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_System_Object_ * __this, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_System_Object_ * __this));
}
