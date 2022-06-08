#include <interception_macros.h>

namespace app::methods::HornBugSpawnTask {
IL2CPP_REGISTER_METHOD(0x00B6DFC0, void, OnEnterTask, (HornBugSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (HornBugSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B6E410, void, StartSpawnTimeline, (HornBugSpawnTask * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (HornBugSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04799260, HornBugSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (HornBugSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (HornBugSpawnTask * __this));
}
