using namespace app;

namespace app::methods::Moon::Timeline::VirtualTimelineConstrainedTimelineEntity {
IL2CPP_REGISTER_METHOD(0x01E92970, int32_t, get_ConstrainedEntitiesCount, (VirtualTimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E92A00, bool, IsTheSame, (VirtualTimelineConstrainedTimelineEntity * __this, IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x01E92AC0, float, get_Progress, (VirtualTimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E92AE0, IConstrainedEntity *, GetConstrainedEntityFrom, (VirtualTimelineConstrainedTimelineEntity * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E92BB0, IConstrainedEntity *, GetConstrainedEntity, (VirtualTimelineConstrainedTimelineEntity * __this, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x002FB930, VirtualMoonTimeline *, get_GetTimeline, (VirtualTimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ITimelineEntityParent *, get_GetITimelineEntityParent, (VirtualTimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (VirtualTimelineConstrainedTimelineEntity * __this, TimelineEntityRecord * timelineEntityRecord, VirtualMoonTimeline * moonTimeline));
}
