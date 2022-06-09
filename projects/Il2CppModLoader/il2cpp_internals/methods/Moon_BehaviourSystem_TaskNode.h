#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::TaskNode {
IL2CPP_REGISTER_METHOD(0x002FBC60, ITask *, get_Task, (app::TaskNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x03011730, void, OnBehaviourTreeInitialize, (app::TaskNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x03011800, void, OnEnter, (app::TaskNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x030118B0, BehaviourStatus__Enum, OnExecute, (app::TaskNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x03011960, void, OnExit, (app::TaskNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x03011A10, void, OnReset, (app::TaskNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (app::TaskNode * this_ptr));
}
