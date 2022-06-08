using namespace app;

namespace app::methods::Moon::Timeline::TimelineHelper {
IL2CPP_REGISTER_METHOD(0x01E88350, EntityId, GetEntityId, (ITimelineEntityParent * timeline, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E88530, void, SetConstraintsDirty, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E885F0, void, SetConstraintDirty, (ITimelineEntityParent * timeline, EntityId entityId, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01E886B0, TimelineEntityRecord *, FindRecordForEntityObject, (ITimelineEntityParent * timeline, ITimelineEntity * timelineEntity));
IL2CPP_REGISTER_METHOD(0x01E88900, TimelineConstraint *, GetConstraintForEntity, (ITimelineEntityParent * timeline, EntityId entity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01E88A10, bool, HasRecordForId, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E88C70, bool, EntityIdIsValidForConstraint, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E88D60, bool, HasMarkerRecordForId, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E88FC0, bool, ConstraintReliesOn, (ITimelineEntityParent * timeline, IConstraint * constraint, TimelineConstraint * other));
IL2CPP_REGISTER_METHOD(0x01E89400, bool, CanCreate, (ITimelineEntityParent * timeline, EntityId fromEntity, Constraint__Enum fromConstraint, EntityId toEntity, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E89750, TimelineEntityRecord *, GetRecordFor, (ITimelineEntityParent * timeline, ITimelineEntity * timelineEntity));
IL2CPP_REGISTER_METHOD(0x01E89940, bool, IsEntityRecord, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89AE0, bool, IsMarkerRecord, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89C80, bool, IsExternalRecord, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89E20, TimelineEntityRecord *, GetEntityFor, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89E30, TimelineMarkerRecord *, GetMarkerFor, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89E40, ExternalTimelineRecord *, GetExternalFor, (ITimelineEntityParent * timeline, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01E89E50, int32_t, GetMaxEntityId, (ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A2A0, EntityId, GetNextEntityId, (ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A340, EntityId, GetNextMarkerId, (ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A7C0, Constraint__Enum, GetSampleConstraintFrom, (int32_t constraintType));
IL2CPP_REGISTER_METHODINFO(0x0477D410, TimelineHelper_GetSampleConstraintFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E8A880, void, BreakEverythingConstrainedTo, (MoonTimeline * timeline, ITimelineEntity * timelineEntity));
IL2CPP_REGISTER_METHOD(0x01E8A950, void, BreakEverythingConstrainedTo, (MoonTimeline * timeline, EntityId entityId));
IL2CPP_REGISTER_METHODINFO(0x047889B0, TimelineHelper_BreakEverythingConstrainedTo_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E8AC50, IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_ *, AllConstraintsConstrainedTo, (ITimelineEntityParent * owningTimeline, EntityId recordEntityId));
IL2CPP_REGISTER_METHOD(0x01E8B030, IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ *, EverythingConstrainedTo, (ITimelineEntityParent * owningTimeline, EntityId recordEntityId));
IL2CPP_REGISTER_METHOD(0x01E8B1D0, float, TransformTime, (MoonTimeline * from, MoonTimeline * to, float time));
IL2CPP_REGISTER_METHOD(0x01E8B680, bool, GetToAndFromCommonParent, (MoonTimeline * from, MoonTimeline * to, List_1_Moon_Timeline_MoonTimeline_ * * fromPath, List_1_Moon_Timeline_MoonTimeline_ * * toPath));
IL2CPP_REGISTER_METHOD(0x01E8BA80, float, GetGlobalTimeOffset, (ITimelineEntity * entity, IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * map));
IL2CPP_REGISTER_METHOD(0x01E8BC10, Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ *, BuildChildParentMap, (ITimelineEntityParent * timelineRoot));
IL2CPP_REGISTER_METHOD(0x01E8BF00, void, BuildChildParentMapRecursive, (ITimelineEntity * entity, ITimelineEntityParent * parent, Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * * map));
IL2CPP_REGISTER_METHOD(0x01E8C110, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01552BC0, void, BreakEverythingConstrainedTo, (MoonTimeline * timeline, Object * timelineEntity, int32_t eventId));
IL2CPP_REGISTER_METHODINFO(0x04785FB8, TimelineHelper_BreakEverythingConstrainedTo_2__MethodInfo);
}
