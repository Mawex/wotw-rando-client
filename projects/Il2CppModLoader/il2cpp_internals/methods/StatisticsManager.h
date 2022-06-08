#include <interception_macros.h>

namespace app::methods::StatisticsManager {
IL2CPP_REGISTER_METHOD(0x002FB9D0, List_1_StatSetting_ *, get_StatSettings, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BA920, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x009BA9A0, void, Awake, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BB020, void, OnDestroy, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BB410, void, OnGameLoad, (StatisticsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0472EC88, StatisticsManager_OnGameLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BB690, void, FixedUpdate, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BB8F0, void, ResetStat, (StatisticsManager * __this, StatisticsManager_StatType__Enum type));
IL2CPP_REGISTER_METHOD(0x009BB9E0, void, Increment, (StatisticsManager * __this, StatisticsManager_StatType__Enum type, float amount));
IL2CPP_REGISTER_METHOD(0x009BBAE0, void, UpdateIfGreater, (StatisticsManager * __this, StatisticsManager_StatType__Enum type, float value));
IL2CPP_REGISTER_METHOD(0x009BBBE0, void, IncrementDistance, (StatisticsManager * __this, StatisticsManager_StatType__Enum type));
IL2CPP_REGISTER_METHOD(0x009BBCC0, void, ClearDirtyStates, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BBD50, void, UpdateUberStatesToDirtyValues, (StatisticsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04761C50, StatisticsManager_UpdateUberStatesToDirtyValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BBFC0, void, WriteDirtyStates, (StatisticsManager * __this, UberStateValueStore * valueStore));
IL2CPP_REGISTER_METHOD(0x009BC280, void, UpdateValueStoreOnDeath, (StatisticsManager * __this, UberStateValueStore * valueStore));
IL2CPP_REGISTER_METHOD(0x009BC330, void, ProcessPlayerDeath, (StatisticsManager * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x009BC4D0, void, ProcessPlayerDamage, (StatisticsManager * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x009BC660, void, ProcessEnemyDamage, (StatisticsManager * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x009BC7C0, void, OnRestoreCheckpoint, (StatisticsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04763B50, StatisticsManager_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BC920, void, ValidateStatistics, (StatisticsManager * __this));
IL2CPP_REGISTER_METHOD(0x009BCD50, void, __ctor, (StatisticsManager * __this));
}
