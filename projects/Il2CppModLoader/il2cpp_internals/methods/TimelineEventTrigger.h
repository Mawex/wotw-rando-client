#include <interception_macros.h>

namespace app::methods::TimelineEventTrigger {
IL2CPP_REGISTER_METHOD(0x004C65D0, String *, get_EventProviderName, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, Action_1_TimelineEventTrigger_ *, get_EventStartWithTriggerInfo, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_EventStartWithTriggerInfo, (TimelineEventTrigger * __this, Action_1_TimelineEventTrigger_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC80, Action *, get_EventStart, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_EventStart, (TimelineEventTrigger * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, Action *, get_EventStay, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_EventStay, (TimelineEventTrigger * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBCC0, Action *, get_EventEnd, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_EventEnd, (TimelineEventTrigger * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x010F6EB0, void, OnStartPlay, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F6F80, void, OnStopPlay, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F6FD0, void, SampleValue, (TimelineEventTrigger * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00DCB6C0, float, get_Duration, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (TimelineEventTrigger * __this));
IL2CPP_REGISTER_METHOD(0x010F7000, void, __ctor, (TimelineEventTrigger * __this));
}
