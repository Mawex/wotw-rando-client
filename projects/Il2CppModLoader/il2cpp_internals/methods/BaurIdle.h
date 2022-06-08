using namespace app;

namespace app::methods::BaurIdle {
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (BaurIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (BaurIdle * __this));
IL2CPP_REGISTER_METHOD(0x00F9A370, void, PlayTimeline, (BaurIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00F9A590, void, OnEnterTask, (BaurIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F9A5A0, void, OnExitTask, (BaurIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (BaurIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x04771C38, BaurIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (BaurIdle * __this));
}
