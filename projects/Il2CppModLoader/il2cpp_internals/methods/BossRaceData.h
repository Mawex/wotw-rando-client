using namespace app;

namespace app::methods::BossRaceData {
IL2CPP_REGISTER_METHOD(0x00D3D530, String *, get_RaceName, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, List_1_SceneMetaData_ *, get_RequiredScenes, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00D3D6A0, Vector3, get_StartLinePosition, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00653A60, Vector3, get_EndPosition, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MoonTimeline *, get_FlythroughTimeline, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, RaceSettings *, get_RaceSettings, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00D3D730, float, get_TimeLimit, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Condition_1 *, get_GetReadyCondition, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Condition_1 *, get_PostFinishCondition, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBeaten, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPlayEndingAnimation, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, DesiredUberStateComposite *, get_StateOverride, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_EquipmentType_ *, get_DisabledAbilities, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, List_1_Moon_MoonReference_1__13 *, get_RaceSyncables, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Condition_1 *, get_BeatenCondition, (BossRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00D3D740, void, __ctor, (BossRaceData * __this));
}
