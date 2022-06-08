using namespace app;

namespace app::methods::System::Diagnostics::Tracing::ActivityFilter {
IL2CPP_REGISTER_METHOD(0x01742A20, void, DisableFilter, (ActivityFilter * * filterList, EventSource * source));
IL2CPP_REGISTER_METHOD(0x01742E50, void, UpdateFilter, (ActivityFilter * * filterList, EventSource * source, int32_t perEventSourceSessionId, String * startEvents));
IL2CPP_REGISTER_METHOD(0x01743340, bool, PassesActivityFilter, (ActivityFilter * filterList, Guid * childActivityID, bool triggeringEvent, EventSource * source, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01743820, void, FlowActivityIfNeeded, (ActivityFilter * filterList, Guid * currentActivityId, Guid * childActivityID));
IL2CPP_REGISTER_METHOD(0x01743A30, void, UpdateKwdTriggers, (ActivityFilter * activityFilter, Guid sourceGuid, EventSource * source, EventKeywords__Enum sessKeywords));
IL2CPP_REGISTER_METHOD(0x01743C10, IEnumerable_1_System_Tuple_2__1 *, GetFilterAsTuple, (ActivityFilter * __this, Guid sourceGuid));
IL2CPP_REGISTER_METHOD(0x01743DB0, void, Dispose, (ActivityFilter * __this));
IL2CPP_REGISTER_METHOD(0x01743EB0, void, __ctor, (ActivityFilter * __this, EventSource * source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq, ActivityFilter * existingFilter));
IL2CPP_REGISTER_METHOD(0x01744360, void, EnsureActivityCleanupDelegate, (ActivityFilter * filterList));
IL2CPP_REGISTER_METHOD(0x017444A0, Action_1_Guid_ *, GetActivityDyingDelegate, (ActivityFilter * filterList));
IL2CPP_REGISTER_METHOD(0x017446C0, bool, EnableFilter, (ActivityFilter * * filterList, EventSource * source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq));
IL2CPP_REGISTER_METHOD(0x017448B0, void, TrimActiveActivityStore, (ConcurrentDictionary_2_System_Guid_System_Int32_ * activities));
IL2CPP_REGISTER_METHOD(0x01744C90, ConcurrentDictionary_2_System_Guid_System_Int32_ *, GetActiveActivities, (ActivityFilter * filterList));
}
