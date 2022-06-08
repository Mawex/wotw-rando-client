using namespace app;

namespace app::methods::SpiderBatSpawnTask {
IL2CPP_REGISTER_METHOD(0x00960460, void, OnEnterTask, (SpiderBatSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (SpiderBatSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00960730, void, StartSpawnTimeline, (SpiderBatSpawnTask * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (SpiderBatSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04737900, SpiderBatSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderBatSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (SpiderBatSpawnTask * __this));
}
