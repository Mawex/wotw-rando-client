using namespace app;

namespace app::methods::Moon::Timeline::Constraints::TimelineSolver {
IL2CPP_REGISTER_METHOD(0x01BB66B0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01BB6AE0, IDisposable *, OpenScope, (bool allowEvaluate, bool detectInfiniteLoops, bool allowCache));
IL2CPP_REGISTER_METHOD(0x01BB6C90, void, ClearScope, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0471DBD0, TimelineSolver_ClearScope__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB6D50, float, ApproximateParentContentEnd, (ITimelineEntityParent * scope, float minTime));
IL2CPP_REGISTER_METHOD(0x01BB7080, bool, EvaluateEvent, (ITimelineEntityParent * scope, EntityId id, int32_t eventId, float * time));
IL2CPP_REGISTER_METHOD(0x01BB71A0, float, ApproximateEvent, (ITimelineEntityParent * scope, EntityId id, int32_t eventId));
IL2CPP_REGISTER_METHODINFO(0x04703458, TimelineSolver_ApproximateEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB7A40, float, ApproximateEntityStart, (ITimelineEntityParent * scope, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BB7B30, float, ApproximateEntityStop, (ITimelineEntityParent * scope, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BB7DA0, float, ApproximateContentEnd, (ITimelineEntityParent * scope, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BB7FE0, float, ApproximateCustomEvent, (ITimelineEntityParent * scope, TimelineEntityRecord * record, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01BB8220, bool, ApproximateCustomEvent, (ITimelineEventProvider * provider, int32_t eventId, float min, float max, float * time));
}
