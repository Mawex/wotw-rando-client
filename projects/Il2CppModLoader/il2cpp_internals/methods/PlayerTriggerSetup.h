#include <interception_macros.h>

namespace app::methods::PlayerTriggerSetup {
IL2CPP_REGISTER_METHOD(0x0142EA80, void, Awake, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142EF40, void, OnDestroy, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F3E0, void, Update, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F430, void, ChangeState, (PlayerTriggerSetup * __this, PlayerTriggerSetup_TriggerSetupState__Enum newState));
IL2CPP_REGISTER_METHOD(0x0142F4D0, void, OnSleepingEnter, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F4E0, void, SleepingUpdate, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F530, void, OnTriggerEnter, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F540, void, OnTimelineEnterStop, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x04752BF8, PlayerTriggerSetup_OnTimelineEnterStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0142F580, void, OnTriggerStay, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F590, void, OnTimelineStayStop, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x0477C458, PlayerTriggerSetup_OnTimelineStayStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0142F5F0, void, OnTriggerExit, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F600, void, OnTimelineExitStop, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E508, PlayerTriggerSetup_OnTimelineExitStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0142F640, void, PlayTimeline, (PlayerTriggerSetup * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0142F720, void, StopAllTimelines, (PlayerTriggerSetup * __this));
IL2CPP_REGISTER_METHOD(0x0142F880, void, StopAllTimelinesExcluding, (PlayerTriggerSetup * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayerTriggerSetup * __this));
}
