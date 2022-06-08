#include <interception_macros.h>

namespace app::methods::TimelineStateCondition {
IL2CPP_REGISTER_METHOD(0x00446590, bool, ShowEventTrigger, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x010F7EC0, MoonTimeline *, get_Target, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x010F7FB0, void, Awake, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x009A3B40, void, HitEventTrigger, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D1D0, TimelineStateCondition_HitEventTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F82B0, void, OnDestroy, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x010F8450, void, OnRestoreCheckpoint, (TimelineStateCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x047040A8, TimelineStateCondition_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F8460, bool, Validate, (TimelineStateCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TimelineStateCondition * __this));
}
