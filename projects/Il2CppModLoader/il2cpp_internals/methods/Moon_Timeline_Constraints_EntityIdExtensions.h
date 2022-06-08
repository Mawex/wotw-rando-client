using namespace app;

namespace app::methods::Moon::Timeline::Constraints::EntityIdExtensions {
IL2CPP_REGISTER_METHOD(0x01BB62A0, bool, IsParentOrNothing, (EntityId id));
IL2CPP_REGISTER_METHOD(0x01BB62B0, IConstraint *, GetConstraint, (IConstrainedEntity * cEntity, Constraint__Enum constraint));
IL2CPP_REGISTER_METHODINFO(0x04723C70, EntityIdExtensions_GetConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB63D0, bool, PointsToCustomEvent, (IConstraint * constraint));
IL2CPP_REGISTER_METHOD(0x01BB6470, Constraint__Enum, GetTargetAction, (IConstraint * constraint));
IL2CPP_REGISTER_METHODINFO(0x0474E708, EntityIdExtensions_GetTargetAction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BB6550, bool, EffectsParentLength, (IConstraint * constraint));
IL2CPP_REGISTER_METHOD(0x01BB6640, bool, IsIndeterminedLength, (TimelineEntityRecord * record));
}
