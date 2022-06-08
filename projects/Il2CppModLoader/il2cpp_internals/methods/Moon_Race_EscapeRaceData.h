using namespace app;

namespace app::methods::Moon::Race::EscapeRaceData {
IL2CPP_REGISTER_METHOD(0x00C41510, float, get_TimeLimit, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Condition_1 *, get_GetReadyCondition, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Condition_1 *, get_PostFinishCondition, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBeaten, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00C41520, String *, get_RaceName, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPlayEndingAnimation, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, DesiredUberStateComposite *, get_StateOverride, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_EquipmentType_ *, get_DisabledAbilities, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, List_1_Moon_MoonReference_1__13 *, get_RaceSyncables, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MoonTimeline *, get_FlythroughTimeline, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, RaceSettings *, get_RaceSettings, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00C41600, Vector3, get_StartLinePosition, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x006260E0, Vector3, get_EndPosition, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, TriggerColliderCallback *, get_EndTriggerCollider, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_SceneMetaData_ *, get_RequiredScenes, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, PlayerInsideZoneChecker__Array *, get_RaceAreaCheckers, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00C41690, void, Awake, (EscapeRaceData * __this));
IL2CPP_REGISTER_METHOD(0x00C41780, void, __ctor, (EscapeRaceData * __this));
}
