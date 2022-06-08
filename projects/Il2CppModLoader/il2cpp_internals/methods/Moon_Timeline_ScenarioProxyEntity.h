#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ScenarioProxyEntity {
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_FilePath, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00782670, String *, get_FullAddress, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00782760, MoonTimeline *, get_ExternalTimeline, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00782840, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00782C80, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04795F98, ScenarioProxyEntity_get_ConstraintMetaDatas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00782CD0, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00782E20, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04781DD0, ScenarioProxyEntity_get_ExternalRecords__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBC60, List_1_Moon_MoonReference_1__2 *, get_Timelines, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Timelines, (ScenarioProxyEntity * __this, List_1_Moon_MoonReference_1__2 * value));
IL2CPP_REGISTER_METHOD(0x002FBC80, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ActiveTimeline, (ScenarioProxyEntity * __this, MoonReference_1_Moon_Timeline_ITimelineEntity_ * value));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_CurrentTime, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, ITrimController *, get_TrimController, (ScenarioProxyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_TrimController, (ScenarioProxyEntity * __this, ITrimController * value));
IL2CPP_REGISTER_METHOD(0x00782E70, void, SetScenario, (ScenarioProxyEntity * __this, ScenarioRoot * root));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasFinished, (ScenarioProxyEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecursivelySetupExecutionOrder, (ScenarioProxyEntity * __this, int32_t order));
IL2CPP_REGISTER_METHOD(0x007830D0, bool, ApproximateEvent, (ScenarioProxyEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00783200, void, __ctor, (ScenarioProxyEntity * __this));
}
