#include <interception_macros.h>

namespace app::methods::LizardEntity {
IL2CPP_REGISTER_METHOD(0x00FAC8C0, bool, get_IsInOneTwoThreeAttackRange, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC3F0, bool, get_MeetsRetaliationConditions, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x009FC420, void, set_MeetsRetaliationConditions, (LizardEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FAC8F0, bool, get_IsInQuickAttackAttackRange, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAC920, bool, get_IsInOneTwoThreeCounterattackRange, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAC950, bool, get_IsInQuickBiteCounterattackRange, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAC980, bool, get_GroupBehaviourMode, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACA30, float, get_GroupBehaviourBaseAttackCooldown, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACA40, bool, get_IsInPounceAttackRange, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACA70, bool, get_WasOtherLizardHit, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDAFE0, bool, get_IsRolling, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041F750, void, set_IsRolling, (LizardEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FACAE0, bool, get_IsMinAttackCooldownSatisfied, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACAF0, LizardSpawnType__Enum, get_SpawnType, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACB00, void, set_SpawnType, (LizardEntity * __this, LizardSpawnType__Enum value));
IL2CPP_REGISTER_METHOD(0x00FACB10, void, RandomizeCooldown, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACC30, void, OnPoolSpawned, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACD20, void, ResetEntity, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FACD40, void, OnEnable, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAD050, void, OnDisable, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAD230, void, OnDestroy, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAD5A0, void, OnAwake, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAD720, void, UnserializedInitialization, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FADAE0, void, OnFixedUpdate, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FADBC0, void, ResolveDamage, (LizardEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00FADCE0, void, OnAnyLizardHit, (LizardEntity * __this, LizardEntity * lizard));
IL2CPP_REGISTER_METHODINFO(0x04721FB0, LizardEntity_OnAnyLizardHit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FADDF0, void, TriggerDodgeEvent, (LizardEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04744D90, LizardEntity_TriggerDodgeEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FADF50, void, OnCeilingOrWallCollision, (LizardEntity * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04796260, LizardEntity_OnCeilingOrWallCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FAE0C0, Vector3, ModifyKickbackForce, (LizardEntity * __this, Vector3 force, Damage * damage, bool applyDeathModification));
IL2CPP_REGISTER_METHOD(0x00FAE250, void, OnAttackEnd, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAE260, void, __ctor, (LizardEntity * __this));
IL2CPP_REGISTER_METHOD(0x00FAE4B0, void, __cctor, ());
}
