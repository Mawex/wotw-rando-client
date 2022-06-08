using namespace app;

namespace app::methods::Moon::Timeline::ITimelineEntityParentExtensions {
IL2CPP_REGISTER_METHOD(0x01BC0C90, bool, IsExternalRecord, (ITimelineEntityParent * registry, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01BC0E30, bool, HasRecordForId, (ITimelineEntityParent * parent, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01BC0FD0, bool, HasRecordFor, (ITimelineEntityParent * parent, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01BC11C0, TimelineConstraint *, GetConstraintForEntity, (ITimelineEntityParent * parent, EntityId entity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BC12B0, bool, IsEndConstraintDependentOnAnything, (ITimelineEntityParent * parent, EntityId owningEntityId));
IL2CPP_REGISTER_METHOD(0x01BC12E0, bool, IsEndConstraintDependentOnAnything, (IConstraint * constraint, EntityId owningEntityId));
IL2CPP_REGISTER_METHOD(0x01BC1410, bool, IsContentEnd, (TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BC1460, TimelineEntityRecord *, GetRecordFor, (ITimelineEntityParent * timeline, ITimelineEntity * timelineEntity));
}
