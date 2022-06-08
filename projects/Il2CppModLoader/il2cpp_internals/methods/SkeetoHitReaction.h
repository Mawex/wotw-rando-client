using namespace app;

namespace app::methods::SkeetoHitReaction {
IL2CPP_REGISTER_METHOD(0x0049F2B0, EntityDamageEvent *, get_DamageEvent, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x006A6390, void, set_DamageEvent, (SkeetoHitReaction * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x0061EBC0, bool, get_UseDamageTypePreventingInterruption, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00756FF0, void, set_UseDamageTypePreventingInterruption, (SkeetoHitReaction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_LockDamageKickback, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00757000, void, set_LockDamageKickback, (SkeetoHitReaction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00757010, void, OnInitializeTask, (SkeetoHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007570E0, void, OnEnterTask, (SkeetoHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00757220, void, OnHit, (SkeetoHitReaction * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x007574B0, BehaviourStatus__Enum, OnExecuteTask, (SkeetoHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00757680, void, OnExitTask, (SkeetoHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00757690, void, StartTimeline, (SkeetoHitReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00757820, void, ResetTimeline, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00757A80, void, HandleReasonToNotInterrupt, (SkeetoHitReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00757B60, void, ProcessKickback, (SkeetoHitReaction * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00757DC0, bool, PlayedAdditiveAnim, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00757DD0, void, TimelineFinished, (SkeetoHitReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FE58, SkeetoHitReaction_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00757DF0, bool, IsInterruptingDamageWeight, (SkeetoHitReaction * __this, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x00757E10, bool, IsDamageTypePreventingInterruption, (SkeetoHitReaction * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x00757F30, bool, IsKickbackAllowed, (SkeetoHitReaction * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00757F50, void, __ctor, (SkeetoHitReaction * __this));
}
