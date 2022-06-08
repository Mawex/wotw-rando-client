using namespace app;

namespace app::methods::TimelineDeathBehaviour {
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (TimelineDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F6440, void, OnEnterTask, (TimelineDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F6800, void, OnExitTask, (TimelineDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnDeathTimelineStopEvent, (TimelineDeathBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04743C00, TimelineDeathBehaviour_OnDeathTimelineStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TimelineDeathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (TimelineDeathBehaviour * __this));
}
