#include <interception_macros.h>

namespace app::methods::KwolokIdle {
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (KwolokIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokIdle * __this));
IL2CPP_REGISTER_METHOD(0x012FB7B0, void, PlayTimeline, (KwolokIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x012FB9D0, void, OnEnterTask, (KwolokIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012FB9E0, void, OnExitTask, (KwolokIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (KwolokIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x04796148, KwolokIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (KwolokIdle * __this));
}
