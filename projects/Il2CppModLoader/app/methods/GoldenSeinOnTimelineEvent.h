#pragma once
#include <interception_macros.h>

namespace app::methods::GoldenSeinOnTimelineEvent {
    IL2CPP_REGISTER_METHOD(0x01078A70, void, Awake, (app::GoldenSeinOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01078C20, void, OnDestroy, (app::GoldenSeinOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01078DD0, void, OnTrigger, (app::GoldenSeinOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754410, GoldenSeinOnTimelineEvent_OnTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GoldenSeinOnTimelineEvent * this_ptr))
}
