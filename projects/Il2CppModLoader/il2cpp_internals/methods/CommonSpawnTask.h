#include <interception_macros.h>

namespace app::methods::CommonSpawnTask {
IL2CPP_REGISTER_METHOD(0x011DEAB0, void, OnEnterTask, (CommonSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (CommonSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011DEBA0, void, StartSpawnTimeline, (CommonSpawnTask * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (CommonSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04707FE8, CommonSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (CommonSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (CommonSpawnTask * __this));
}
