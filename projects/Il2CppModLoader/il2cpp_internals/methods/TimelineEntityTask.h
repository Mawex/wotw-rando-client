using namespace app;

namespace app::methods::TimelineEntityTask {
IL2CPP_REGISTER_METHOD(0x010F6E20, void, OnEnterTask, (TimelineEntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F6E60, BehaviourStatus__Enum, OnExecuteTask, (TimelineEntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E070, void, OnExitTask, (TimelineEntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, ShouldPauseLocomotion, (TimelineEntityTask * __this));
IL2CPP_REGISTER_METHOD(0x010F6E90, void, __ctor, (TimelineEntityTask * __this));
}
