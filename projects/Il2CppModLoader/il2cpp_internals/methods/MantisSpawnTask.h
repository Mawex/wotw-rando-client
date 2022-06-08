using namespace app;

namespace app::methods::MantisSpawnTask {
IL2CPP_REGISTER_METHOD(0x00A09410, void, OnEnterTask, (MantisSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (MantisSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A095A0, void, StartSpawnTimeline, (MantisSpawnTask * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (MantisSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x047057B0, MantisSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MantisSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (MantisSpawnTask * __this));
}
