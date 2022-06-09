#include <interception_macros.h>

namespace app::methods::Moon_Timeline::TimelineExtensions {
IL2CPP_REGISTER_METHOD(0x01E878B0, TimelineEntityRecord *, GetEntityFor_1, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHODINFO(0x0470F7D0, TimelineExtensions_GetEntityFor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E87AD0, TimelineEntityRecord *, GetEntityForSafe, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E87BE0, TimelineEntityRecord *, GetEntityFor_2, (app::ITimelineEntityParent * timeline, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHODINFO(0x0473CBF8, TimelineExtensions_GetEntityFor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E87D90, TimelineMarkerRecord *, GetMarkerFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHODINFO(0x04751A88, TimelineExtensions_GetMarkerFor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E87FA0, TimelineMarkerRecord *, GetMarkerForSafe, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E88140, ExternalTimelineRecord *, GetExternalFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHODINFO(0x04783000, TimelineExtensions_GetExternalFor__MethodInfo);
}
