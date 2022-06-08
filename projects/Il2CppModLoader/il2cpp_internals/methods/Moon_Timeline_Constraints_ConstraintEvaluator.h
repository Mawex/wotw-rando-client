using namespace app;

namespace app::methods::Moon::Timeline::Constraints::ConstraintEvaluator {
IL2CPP_REGISTER_METHOD(0x01BB1790, IDisposable *, OpenCache, (IConstraintEntityCache * cache));
IL2CPP_REGISTER_METHOD(0x01BB1AB0, float, GetDuration, (ITimelineEntityParent * parent, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x01BB1BA0, float, GetDuration, (ITimelineEntityParent * parent, IConstrainedEntity * entity));
IL2CPP_REGISTER_METHOD(0x01BB1CA0, float, Evaluate, (IConstrainedEntity * constrainedEntity, Constraint__Enum constraint, IConstrainedEntityWithChildren * parentEntity));
IL2CPP_REGISTER_METHOD(0x01BB1DA0, float, EvaluateConstraint, (IConstrainedEntity * constrainedEntity, MoonTimeline * parentEntity, int32_t constraintType));
IL2CPP_REGISTER_METHOD(0x01BB1E80, float, EvaluateConstraintWithChildren, (IConstrainedEntityWithChildren * constrainedEntityWithChildren, IConstrainedEntityWithChildren * parentEntity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHODINFO(0x04788CD0, ConstraintEvaluator_EvaluateConstraintWithChildren__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB2A70, IConstrainedEntity *, GetConstrainedEntity, (IConstrainedEntityWithChildren * parent, EntityId id));
IL2CPP_REGISTER_METHOD(0x01BB2C70, float, CalculateEndContraintForEntityWithChildren, (IConstrainedEntityWithChildren * constrainedEntityWithChildren, IConstrainedEntityWithChildren * parentEntity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB3160, float, EvaluateConstraint, (IConstrainedEntity * constrainedEntity, IConstrainedEntityWithChildren * parentEntity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB3CD0, float, EvaluateCustomConstraint, (IConstrainedEntity * constrainedEntity, ICustomConstrainable * customConstrainable, Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BB3FC0, float, GetCustomEventTime, (IConstrainedEntity * eventProviderEntity, int32_t eventId, IConstrainedEntityWithChildren * parentEntity));
IL2CPP_REGISTER_METHOD(0x01BB4100, bool, GetCustomEventTime, (ITimelineEventProvider * provider, int32_t eventId, float min, float max, float * time));
IL2CPP_REGISTER_METHOD(0x01BB4510, float, GetExternalTime, (ITimelineEntityParent * timelineEntityParent, IConstraint * constraintObject, IConstrainedEntityWithChildren * parentEntity));
IL2CPP_REGISTER_METHODINFO(0x04752AA8, ConstraintEvaluator_GetExternalTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB49D0, float, EvaluateMarkerRecord, (IConstrainedEntityWithChildren * markerEntityParent, ITimelineEntityParent * markerRecordEntity, TimelineMarkerRecord * markerRecord, IConstraint * constraintObject, int32_t eventId));
IL2CPP_REGISTER_METHODINFO(0x0473C540, ConstraintEvaluator_EvaluateMarkerRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB5040, float, GetMarkerTime, (ITimelineEntityParent * timelineEntityParent, IConstraint * constraintObject));
IL2CPP_REGISTER_METHODINFO(0x0470F5C0, ConstraintEvaluator_GetMarkerTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB53E0, void, DirtyEverythingConstrainedTo, (IConstrainedEntityWithChildren * parentEntity, IConstrainedEntity * constrainedTo));
IL2CPP_REGISTER_METHOD(0x01BB56E0, void, RecursivelyDirtyConstraints, (IConstrainedEntityWithChildren * parentEntity, IConstrainedEntity * constrainedTo, HashSet_1_Moon_Timeline_Constraints_IConstraint_ * * processed));
IL2CPP_REGISTER_METHOD(0x01BB5AB0, bool, DirtyConstraintIfItReliesOn, (IConstrainedEntity * entity, IConstraint * constraint));
IL2CPP_REGISTER_METHOD(0x01BB5BB0, float, EvaluateLastChildStop, (IConstraint * constraintObject, Constraint__Enum constraint, IConstrainedEntityWithChildren * parentEntity));
IL2CPP_REGISTER_METHOD(0x01BB5F80, IConstraint *, GetConstraintFor, (IConstrainedEntity * constrainedEntity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHODINFO(0x04775F80, ConstraintEvaluator_GetConstraintFor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB60A0, void, __cctor, (MethodInfo * method));
}
