using namespace app;

namespace app::methods::Moon::Timeline::TimelineConstrainedEntity {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (TimelineConstrainedEntity * __this, TimelineEntityRecord * timelineEntityRecord));
IL2CPP_REGISTER_METHOD(0x01052DF0, IConstraint *, get_StartConstraint, (TimelineConstrainedEntity * __this));
IL2CPP_REGISTER_METHOD(0x004173F0, IConstraint *, get_EndConstraint, (TimelineConstrainedEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E83750, EntityId, get_EntityId, (TimelineConstrainedEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E83770, bool, HasFinished, (TimelineConstrainedEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E83790, ITimelineEntity *, get_Entity, (TimelineConstrainedEntity * __this));
}
