#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ConstraintOperation {
IL2CPP_REGISTER_METHOD(0x01BB0A00, bool, IsEntityPadding, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01BB0A60, void, RemoveAssociatedMeta, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01BB0BA0, IConstraint *, ModifyConstraint, (MoonTimeline * owningTimeline, EntityId fromEntity, Constraint__Enum fromConstraint, EntityId toEntity, int32_t toEvent, float timeOffset));
IL2CPP_REGISTER_METHOD(0x01BB0C30, void, ModifyMarkerConstraint, (MoonTimeline * owningTimeline, EntityId markerId, EntityId toEntity, int32_t toEvent));
IL2CPP_REGISTER_METHOD(0x01BB0DC0, void, ReplaceConstraintUnsafe, (ITimelineEntityParent * owningTimeline, EntityId fromEntity, Constraint__Enum fromConstraint, TimelineConstraint * constraint));
IL2CPP_REGISTER_METHODINFO(0x04736688, ConstraintOperation_ReplaceConstraintUnsafe__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB0EE0, ConstraintsMetaData *, GetMeta, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB0FD0, void, SetMetaRaw, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum type, ConstraintsMetaData * meta));
IL2CPP_REGISTER_METHOD(0x01BB1250, void, SetConstraintFlag, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum end, ConstraintFlag__Enum pad));
IL2CPP_REGISTER_METHOD(0x01BB1280, bool, CheckConstraintFlags, (ITimelineEntityParent * timline, EntityId entityId, Constraint__Enum type, ConstraintFlag__Enum flags));
IL2CPP_REGISTER_METHOD(0x01BB1380, ConstraintsMetaData *, GetOrCreateMeta, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB1560, int32_t, GetMetaIndex, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB1670, void, RemoveMeta, (MoonTimeline * owningTimeline, EntityId entityId, Constraint__Enum constraint));
}
