#include <interception_macros.h>

namespace app::methods::SkeetoSpawnTask {
IL2CPP_REGISTER_METHOD(0x006B35D0, void, OnEnterTask, (SkeetoSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (SkeetoSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B3730, void, StartSpawnTimeline, (SkeetoSpawnTask * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (SkeetoSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04731530, SkeetoSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SkeetoSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (SkeetoSpawnTask * __this));
}
