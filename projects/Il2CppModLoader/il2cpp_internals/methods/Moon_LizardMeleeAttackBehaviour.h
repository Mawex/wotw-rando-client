#include <interception_macros.h>

namespace app::methods::Moon::LizardMeleeAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x01107F30, void, OnEntityInitialized, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011080A0, EffectSpawn, ProvideDamageEffect, (LizardMeleeAttackBehaviour * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x01108210, void, OnEnter, (LizardMeleeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01108680, void, OnExit, (LizardMeleeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011087A0, BehaviourStatus__Enum, OnExecute, (LizardMeleeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011088A0, void, StartAttackTimeline, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01108AA0, void, OnAttackBaseTimelineStopEvent, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04717F80, LizardMeleeAttackBehaviour_OnAttackBaseTimelineStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01109060, void, OnTimelineSequenceStopEvent, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011090C0, bool, IsTargetBehind, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01109190, void, OnTurningMirrorEvent, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04770FC0, LizardMeleeAttackBehaviour_OnTurningMirrorEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D20500, void, ProcessIfTargetIsStillInZone, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F700, LizardMeleeAttackBehaviour_ProcessIfTargetIsStillInZone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01109210, void, SetSpeed, (LizardMeleeAttackBehaviour * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x01109240, void, Jump, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047621D8, LizardMeleeAttackBehaviour_Jump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01109510, bool, IsToNearToLedge, (LizardMeleeAttackBehaviour * __this, float direction));
IL2CPP_REGISTER_METHOD(0x011096A0, void, SpawnAttackVFX, (LizardMeleeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01109B20, void, __ctor, (LizardMeleeAttackBehaviour * __this));
}
