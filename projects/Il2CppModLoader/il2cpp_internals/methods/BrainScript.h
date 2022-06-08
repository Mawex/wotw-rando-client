using namespace app;

namespace app::methods::BrainScript {
IL2CPP_REGISTER_METHOD(0x00D486C0, float, get_Duration, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D48810, void, Awake, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (BrainScript * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D488D0, void, UpdateEntriesIndexes, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D48B70, void, ExecuteEntry, (BrainScript * __this, LegacyTimelineSequence_SequenceEntry * sequenceEntry));
IL2CPP_REGISTER_METHOD(0x00D48BA0, void, ExecuteEntry, (BrainScript * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00D48D80, LegacyTimelineSequence_SequenceEntry *, AddEntry, (BrainScript * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x002FBD20, List_1_LegacyTimelineSequence_SequenceEntry_ *, get_EditorEntries, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D48F30, bool, get_SamplingEditorEntries, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D48FC0, void, ResetEditorEntries, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D49070, void, RemoveNullEntries, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D49260, void, RemoveEntriesWithNullAnimators, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D49450, void, UpdateEntries, (BrainScript * __this));
IL2CPP_REGISTER_METHOD(0x00D49A90, void, __ctor, (BrainScript * __this));
}
