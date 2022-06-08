using namespace app;

namespace app::methods::GhostTimelineEventsPlugin {
IL2CPP_REGISTER_METHOD(0x002FBB80, GlobalRecordingTable *, get_GlobalRecordingTable, (GhostTimelineEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_GlobalRecordingTable, (GhostTimelineEventsPlugin * __this, GlobalRecordingTable * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostTimelineEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EA290, void, PlayCycle, (GhostTimelineEventsPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007EA330, void, RecordCycle, (GhostTimelineEventsPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x007EA500, void, OnStartRecording, (GhostTimelineEventsPlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x007EA840, void, OnStopRecording, (GhostTimelineEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EAAE0, bool, ShouldRecord, (GhostTimelineEventsPlugin * __this, ITimelineEntity * timeline, IContext * context));
IL2CPP_REGISTER_METHOD(0x007EAD20, void, OnTimelineEvent, (GhostTimelineEventsPlugin * __this, ITimelineEntity * entity, IContext * context, MoonTimelineNotifier_Action__Enum action));
IL2CPP_REGISTER_METHODINFO(0x0478E308, GhostTimelineEventsPlugin_OnTimelineEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007EAEC0, void, RecordTimelineEvent, (GhostTimelineEventsPlugin * __this, ITimelineEntity * entity, IContext * context, MoonTimelineNotifier_Action__Enum action));
IL2CPP_REGISTER_METHOD(0x007EB080, void, RecordTimelinePlay, (GhostTimelineEventsPlugin * __this, MoonTimeline * timeline, IContext * context, MoonTimelineNotifier_Action__Enum action));
IL2CPP_REGISTER_METHOD(0x007EB540, void, RecordIndeterminateLength, (GhostTimelineEventsPlugin * __this, ITimelineEntity * entity, IContext * context, MoonTimelineNotifier_Action__Enum action));
IL2CPP_REGISTER_METHOD(0x007EB790, void, WriteIndeterminateLengthDuration, (GhostTimelineEventsPlugin * __this, int64_t id));
IL2CPP_REGISTER_METHOD(0x007EBB30, void, RecordScalableAnimation, (GhostTimelineEventsPlugin * __this, ScalableAnimationPlayer * scalableAnimationPlayer, AnimationContext context));
IL2CPP_REGISTER_METHOD(0x007EBDD0, void, __ctor, (GhostTimelineEventsPlugin * __this));
}
