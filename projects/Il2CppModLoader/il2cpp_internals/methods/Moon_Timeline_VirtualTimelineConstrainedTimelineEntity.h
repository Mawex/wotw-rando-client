#include <interception_macros.h>

namespace app::methods::Moon_Timeline::VirtualTimelineConstrainedTimelineEntity {
IL2CPP_REGISTER_METHOD(0x01E92970, int32_t, get_ConstrainedEntitiesCount, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E92A00, bool, IsTheSame, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr, app::IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x01E92AC0, float, get_Progress, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E92AE0, IConstrainedEntity *, GetConstrainedEntityFrom, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E92BB0, IConstrainedEntity *, GetConstrainedEntity, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x002FB930, VirtualMoonTimeline *, get_GetTimeline, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, ITimelineEntityParent *, get_GetITimelineEntityParent, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::VirtualTimelineConstrainedTimelineEntity * this_ptr, app::TimelineEntityRecord * timeline_entity_record, app::VirtualMoonTimeline * moon_timeline));
}
