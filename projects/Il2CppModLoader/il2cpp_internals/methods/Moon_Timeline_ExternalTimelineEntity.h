#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ExternalTimelineEntity {
IL2CPP_REGISTER_METHOD(0x01BBDF00, String *, get_FullAddress, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBDFF0, MoonTimeline *, get_ExternalTimeline, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBE100, void, SetTarget, (ExternalTimelineEntity * __this, ITimelineEntity * target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateEntity, (ExternalTimelineEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BBE250, void, OnStartPlayback, (ExternalTimelineEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BBE470, void, OnStopPlayback, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBE540, void, OnPausePlayback, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBE630, void, OnResumePlayback, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBE720, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBEA60, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04747E98, ExternalTimelineEntity_get_ConstraintMetaDatas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BBEAB0, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBEC00, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0475EDB0, ExternalTimelineEntity_get_ExternalRecords__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BBEC50, float, get_CurrentTime, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBED40, void, RecursivelySetupExecutionOrder, (ExternalTimelineEntity * __this, int32_t order));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBEFE0, bool, HasFinished, (ExternalTimelineEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01BBF0D0, List_1_Moon_MoonReference_1__2 *, get_Timelines, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BBF1E0, void, SynchronizeData, (ExternalTimelineEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BBF3F0, bool, ApproximateEvent, (ExternalTimelineEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_TrimTime, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_TrimTime, (ExternalTimelineEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_ShouldTrim, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B11500, void, set_ShouldTrim, (ExternalTimelineEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBC60, ITrimController *, get_TrimController, (ExternalTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_TrimController, (ExternalTimelineEntity * __this, ITrimController * value));
IL2CPP_REGISTER_METHOD(0x01BBF500, void, SetTrim, (ExternalTimelineEntity * __this, float duration));
IL2CPP_REGISTER_METHOD(0x01BBF510, void, __ctor, (ExternalTimelineEntity * __this));
}
