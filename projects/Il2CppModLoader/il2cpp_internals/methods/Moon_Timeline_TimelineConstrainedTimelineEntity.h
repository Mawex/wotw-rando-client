#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineConstrainedTimelineEntity {
IL2CPP_REGISTER_METHOD(0x01E83830, int32_t, get_ConstrainedEntitiesCount, (TimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E838D0, float, get_Progress, (TimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E838F0, IConstrainedEntity *, GetConstrainedEntityFrom, (TimelineConstrainedTimelineEntity * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E839C0, IConstrainedEntity *, GetConstrainedEntity, (TimelineConstrainedTimelineEntity * __this, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E839E0, bool, IsTheSame, (TimelineConstrainedTimelineEntity * __this, IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x002FB930, MoonTimeline *, get_GetTimeline, (TimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ITimelineEntityParent *, get_GetITimelineEntityParent, (TimelineConstrainedTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (TimelineConstrainedTimelineEntity * __this, TimelineEntityRecord * timelineEntityRecord, MoonTimeline * moonTimeline));
}
