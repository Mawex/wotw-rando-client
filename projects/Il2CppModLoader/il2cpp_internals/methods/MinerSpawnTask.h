using namespace app;

namespace app::methods::MinerSpawnTask {
IL2CPP_REGISTER_METHOD(0x01450410, void, OnInitializeTask, (MinerSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01450520, void, OnEnterTask, (MinerSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (MinerSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01450A70, void, StartSpawnTimeline, (MinerSpawnTask * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (MinerSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04739A28, MinerSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MinerSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (MinerSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x01450C60, void, _OnEnterTask_b__8_1, (MinerSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ECD0, MinerSpawnTask__OnEnterTask_b__8_1__MethodInfo);
}
