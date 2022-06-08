using namespace app;

namespace app::methods::MasterTimelineSequence {
IL2CPP_REGISTER_METHOD(0x00A11940, float, get_UnlockedDuration, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A11950, void, OnSkipCutscene, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A11BB0, void, GenerateStartTimes, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A11DB0, MasterTimelineSequence_SceneEntry *, FindSceneToPreloadAtTime, (MasterTimelineSequence * __this, float time));
IL2CPP_REGISTER_METHOD(0x00A11F10, int32_t, FindEntryIndex, (MasterTimelineSequence * __this, MasterTimelineSequence_SceneEntry * entry));
IL2CPP_REGISTER_METHOD(0x00A11FD0, void, OnStartPlay, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A121E0, void, UpdateSubAnimatorList, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A122B0, void, UpdateDurationAndTimeCache, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A12460, void, CacheOriginals, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A124F0, void, OnLoadedScene, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHODINFO(0x04793A98, MasterTimelineSequence_OnLoadedScene__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A12510, void, Awake, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A125C0, void, OnDestroy, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A12670, void, Start, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A127D0, void, Update, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A12870, void, SampleValue, (MasterTimelineSequence * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A13150, void, SampleSceneAtRuntime, (MasterTimelineSequence * __this, float time, MasterTimelineSequence_SceneEntry * entry, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A137E0, void, OnStopPlay, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A138B0, void, __ctor, (MasterTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A13BE0, void, __cctor, (MethodInfo * method));
}
