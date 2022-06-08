#include <interception_macros.h>

namespace app::methods::SkeetoEntity {
IL2CPP_REGISTER_METHOD(0x00755320, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x007553F0, Vector3, get_CharacterPatrolTarget, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755530, bool, get_IsOnScreen, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755540, bool, get_IsTurning, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755570, float, get_CameraInfluenceMinDist, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755590, float, get_CameraInfluenceMaxDist, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007555B0, SkeetoSpawnType__Enum, get_SpawnType, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007555C0, void, set_SpawnType, (SkeetoEntity * __this, SkeetoSpawnType__Enum value));
IL2CPP_REGISTER_METHOD(0x007555D0, int32_t, get_AttacksInRow, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007555E0, void, set_AttacksInRow, (SkeetoEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007555F0, SkeetoEntity_SkeetoType__Enum, get_Type, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755600, bool, get_IsAttacking, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755610, void, set_IsAttacking, (SkeetoEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00755620, bool, get_IsSpawning, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007556F0, SkeetoEntity_SkeetoState__Enum, get_State, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755700, bool, get_AutoResetSpotOriBool, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755710, void, OnAwake, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007558C0, void, OnRestoreCheckpoint, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F1C0, SkeetoEntity_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007559F0, void, UnserializedInitialization, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755AD0, void, OnEnable, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755C30, void, OnDestroy, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755DE0, void, ResetEntity, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755EE0, void, SetSwellingAmount, (SkeetoEntity * __this, float amount));
IL2CPP_REGISTER_METHOD(0x00755EF0, void, MakeBomb, (SkeetoEntity * __this, bool disableDamageDealers));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SuccessfulEating, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00755F30, void, OnDied, (SkeetoEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00756110, void, Explode, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00756130, bool, IsOriInAttackRange, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00756440, bool, IsPositionInAttackRange, (SkeetoEntity * __this, Vector3 offsetToTarget));
IL2CPP_REGISTER_METHOD(0x007565C0, void, IncrementAttacksInRowCounter, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007565D0, void, ResetAttacksInRowCounter, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x007565E0, void, DrawAttackRangeGizmos, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00756880, void, OnDrawGizmosSelected, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00756890, void, __ctor, (SkeetoEntity * __this));
IL2CPP_REGISTER_METHOD(0x00756980, void, __cctor, ());
}
