#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::TaskNode {
IL2CPP_REGISTER_METHOD(0x002FBC60, ITask *, get_Task, (TaskNode * __this));
IL2CPP_REGISTER_METHOD(0x03011730, void, OnBehaviourTreeInitialize, (TaskNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011800, void, OnEnter, (TaskNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x030118B0, BehaviourStatus__Enum, OnExecute, (TaskNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011960, void, OnExit, (TaskNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011A10, void, OnReset, (TaskNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (TaskNode * __this));
}
