using namespace app;

namespace app::methods::LegacyTimelineSequence {
IL2CPP_REGISTER_METHOD(0x0074B530, float, get_UnlockedDuration, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CA60, bool, get_IsLooping, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CA70, void, OnStartPlay, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CC30, void, CacheOriginals, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CDA0, void, UpdateDurationAndTimeCache, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CF90, void, ForceToPlay, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3CFE0, void, Stop, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3D010, void, SampleValue, (LegacyTimelineSequence * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A3D2B0, void, RestoreToOriginalState, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3D410, void, SortByTime, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3D7A0, void, SortByName, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3DB30, LegacyTimelineSequence_SequenceEntry *, AddEntry, (LegacyTimelineSequence * __this, BaseAnimator * animator, float startTime));
IL2CPP_REGISTER_METHOD(0x00A3DD10, void, RemoveNullEntries, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3DF00, void, UpdateEntries, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3E640, LegacyTimelineSequence_SequenceEntry *, DuplicateEntry, (LegacyTimelineSequence * __this, LegacyTimelineSequence_SequenceEntry * entry));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3EAE0, void, OnAfterDeserialize, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A3EBD0, bool, IsGoingToFinish, (LegacyTimelineSequence * __this, float timeToEnd));
IL2CPP_REGISTER_METHOD(0x00A3EC70, void, __ctor, (LegacyTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x018EC8B0, LegacyTimelineSequence_SequenceEntry *, FindEntry, (LegacyTimelineSequence * __this));
}
