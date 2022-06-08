#include <interception_macros.h>

namespace app::methods::SpiderIdle {
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (SpiderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderIdle * __this));
IL2CPP_REGISTER_METHOD(0x011BD380, void, PlayTimeline, (SpiderIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011BD5A0, void, OnEnterTask, (SpiderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BD5B0, void, OnExitTask, (SpiderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (SpiderIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AC68, SpiderIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (SpiderIdle * __this));
}
