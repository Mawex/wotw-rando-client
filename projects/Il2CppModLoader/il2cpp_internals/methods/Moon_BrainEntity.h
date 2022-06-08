#include <interception_macros.h>

namespace app::methods::Moon::BrainEntity {
IL2CPP_REGISTER_METHOD(0x01BA63B0, String *, get_FullAddress, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA64A0, int32_t, get_PreviewBranchIndex, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_PreviewBranchIndex, (BrainEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01BA6580, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_EditorActiveTimeline, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, List_1_Moon_MoonReference_1__2 *, get_Timelines, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA66F0, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_CurrentTime, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_CurrentTime, (BrainEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_ShouldUpdateRecords, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_ShouldUpdateRecords, (BrainEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BA6700, bool, ApproximateEvent, (BrainEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01BA6830, IBrainController *, get_ResolvedBrainController, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA6900, void, RefreshEntries, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA6D10, void, OnStartPlayback, (BrainEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BA6F60, void, OnUpdateEntity, (BrainEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BA7020, void, OnStopPlayback, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA7100, void, OnPausePlayback, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA71F0, void, OnResumePlayback, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA72E0, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA75E0, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (BrainEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04732390, BrainEntity_get_ConstraintMetaDatas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA7630, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA7780, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (BrainEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0478EEE0, BrainEntity_get_ExternalRecords__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA77D0, void, RecursivelySetupExecutionOrder, (BrainEntity * __this, int32_t order));
IL2CPP_REGISTER_METHOD(0x01BA7A40, bool, HasFinished, (BrainEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01BA7BD0, IConstraint *, get_StartConstraint, (BrainEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C8F8, BrainEntity_get_StartConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA7C20, IConstraint *, get_EndConstraint, (BrainEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04799A38, BrainEntity_get_EndConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityId, get_EntityId, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntity *, get_Entity, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA7C70, int32_t, get_ConstrainedEntitiesCount, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_Progress, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BA7D00, IConstrainedEntity *, GetConstrainedEntityFrom, (BrainEntity * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BA7DC0, IConstrainedEntity *, GetConstrainedEntity, (BrainEntity * __this, EntityId entityId));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntityParent *, get_GetITimelineEntityParent, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, ITrimController *, get_TrimController, (BrainEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_TrimController, (BrainEntity * __this, ITrimController * value));
IL2CPP_REGISTER_METHOD(0x01BA7E90, bool, IsTheSame, (BrainEntity * __this, IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x01BA7F50, void, SetPreviewBranch, (BrainEntity * __this, int32_t branch));
IL2CPP_REGISTER_METHOD(0x01BA7FF0, void, __ctor, (BrainEntity * __this));
}
