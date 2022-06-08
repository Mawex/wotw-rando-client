#include <interception_macros.h>

namespace app::methods::EnemyArenaController {
IL2CPP_REGISTER_METHOD(0x00BFF2B0, bool, get_IsCompleted, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF380, int32_t, get_WavesCount, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF410, int32_t, get_WaveIndex, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF4F0, void, set_WaveIndex, (EnemyArenaController * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00BFF5E0, EnemyArenaController_EnemyWave *, get_CurrentWave, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF6B0, MoonTimeline *, get_OnArenaEndTimelineResolved, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF7B0, bool, get_IsPlaying, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF880, ICondition *, get_StartConditionResolved, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFF950, bool, get_ShouldStartPlaying, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, ShouldCreateCheckpointOnArenaCompleted, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFFA20, void, OnEnable, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFFCE0, void, OnDisable, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnValidate, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00BFFEC0, void, Update, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00340, List_1_Moon_Entity_ *, GetAliveEntities, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00570, EnemyArenaController_EnemyWave *, GetWaveAt, (EnemyArenaController * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00C00620, void, AddWave, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C008B0, void, RemoveWaveAt, (EnemyArenaController * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00C00960, void, OnArenaFinished, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00AA0, void, OnRestoreCheckpoint, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHODINFO(0x04702C98, EnemyArenaController_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C00B90, void, StopAllWaveTimelines, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00D20, void, StartArena, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00D30, void, InstaKillAllEnemies, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C00E20, void, StopArena, (EnemyArenaController * __this, bool instaKillEnemies));
IL2CPP_REGISTER_METHOD(0x00C010C0, void, Apply, (EnemyArenaController * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C010D0, IUberState__Array *, get_AffectingUberStates, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_InvalidateParentTimelineCache, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x009AD920, void, set_InvalidateParentTimelineCache, (EnemyArenaController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AddChildren, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C011C0, void, CreateTimelineParentEntity, (EnemyArenaController * __this, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x00C013A0, IDesiredUberState *, GetRequirementsForTimeline, (EnemyArenaController * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, InvalidateTimelineCache, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C01820, String__Array *, GetAllConditionNames, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C018D0, void, EnsureMapExists, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C01C90, Int32__Array *, GetAllConditionGuids, (EnemyArenaController * __this));
IL2CPP_REGISTER_METHOD(0x00C01D40, String *, GetConditionNameFromGuid, (EnemyArenaController * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x00C01E30, bool, IsConditionGuidValid, (EnemyArenaController * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x00C01E70, bool, Validate, (EnemyArenaController * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x00C01EF0, void, __ctor, (EnemyArenaController * __this));
}
