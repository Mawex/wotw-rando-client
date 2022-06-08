#include <interception_macros.h>

namespace app::methods::MoonTimelineOnConditionController {
IL2CPP_REGISTER_METHOD(0x014732D0, MoonTimeline *, get_OnConditionEnterResolved, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x014733D0, MoonTimeline *, get_OnConditionStayResolved, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x014734D0, MoonTimeline *, get_OnConditionExitResolved, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_InvalidateParentTimelineCache, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_InvalidateParentTimelineCache, (MoonTimelineOnConditionController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014735D0, void, FixedUpdate, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x01473860, void, StopAllTimelinesBut, (MoonTimelineOnConditionController * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01473B20, void, PlayTimeline, (MoonTimelineOnConditionController * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHOD(0x01473C10, void, _FixedUpdate_b__18_0, (MoonTimelineOnConditionController * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D810, MoonTimelineOnConditionController__FixedUpdate_b__18_0__MethodInfo);
}
