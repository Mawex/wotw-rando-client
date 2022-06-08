using namespace app;

namespace app::methods::Moon::Timeline::FixedDurationSceneEntity {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076A4A0, String *, get_FullAddress, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076A590, bool, get_IsWorldMapScene, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076A6A0, bool, get_AllowTimesliceEnable, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076A6C0, void, OnStartPlayback, (FixedDurationSceneEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076AC20, bool, IsSceneEnabled, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076AD90, void, LoadScene, (FixedDurationSceneEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076AFF0, void, OnUpdateEntity, (FixedDurationSceneEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0076B500, void, OnLoadedScene, (FixedDurationSceneEntity * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x04776540, FixedDurationSceneEntity_OnLoadedScene__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076B520, void, OnLoadedScene, (FixedDurationSceneEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076BA80, void, OnStopPlayback, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076BCB0, void, OnPausePlayback, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076BDA0, void, OnResumePlayback, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076BE90, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076C1D0, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C888, FixedDurationSceneEntity_get_ConstraintMetaDatas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076C220, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076C370, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04740358, FixedDurationSceneEntity_get_ExternalRecords__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_CurrentTime, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076C3C0, void, RecursivelySetupExecutionOrder, (FixedDurationSceneEntity * __this, int32_t order));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076C6A0, List_1_Moon_MoonReference_1__2 *, get_Timelines, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076C7B0, bool, ApproximateEvent, (FixedDurationSceneEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x0076C7C0, List_1_Moon_Timeline_IEventDescriptor_ *, get_Events, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBD60, ITrimController *, get_TrimController, (FixedDurationSceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_TrimController, (FixedDurationSceneEntity * __this, ITrimController * value));
IL2CPP_REGISTER_METHOD(0x0076CAF0, void, CollectEvents, (FixedDurationSceneEntity * __this, List_1_Moon_Timeline_IEventDescriptor_ * events));
IL2CPP_REGISTER_METHOD(0x0076CC50, void, __ctor, (FixedDurationSceneEntity * __this));
}
