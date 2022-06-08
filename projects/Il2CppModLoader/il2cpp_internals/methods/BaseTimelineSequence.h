using namespace app;

namespace app::methods::BaseTimelineSequence {
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateEntries, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_UnlockedDuration, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_UnlockedDuration, (BaseTimelineSequence * __this, float value));
IL2CPP_REGISTER_METHOD(0x00F8B850, float, get_Duration, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00F8B880, void, OnStopPlay, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00F8BA70, void, SampleEntryAtRuntime, (BaseTimelineSequence * __this, float time, IEntry * entry, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00F8BEE0, void, UpdateSubAnimatorDurationAndTimeCaches, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x00F8BFF0, void, GatherSubAnimators, (BaseTimelineSequence * __this, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00F8C330, void, OnSubAnimatorDurationChange, (BaseTimelineSequence * __this, BaseAnimator * subAnimator));
IL2CPP_REGISTER_METHOD(0x00F8C340, void, __ctor, (BaseTimelineSequence * __this));
IL2CPP_REGISTER_METHOD(0x0157E140, Object *, FindAnimatorOfType, (BaseTimelineSequence * __this, List_1_System_Object_ * entries, float time));
IL2CPP_REGISTER_METHOD(0x015E7A60, Object *, FindEntryAtTime, (BaseTimelineSequence * __this, List_1_System_Object_ * Entries, float time));
IL2CPP_REGISTER_METHOD(0x015E7B90, Object *, GetEntryByAnimator, (BaseTimelineSequence * __this, List_1_System_Object_ * Entries, BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x015E7B90, LegacyTimelineSequence_SequenceEntry *, GetEntryByAnimator, (BaseTimelineSequence * __this, List_1_LegacyTimelineSequence_SequenceEntry_ * Entries, BaseAnimator * animator));
IL2CPP_REGISTER_METHODINFO(0x0477FEF0, BaseTimelineSequence_GetEntryByAnimator_1__MethodInfo);
}
