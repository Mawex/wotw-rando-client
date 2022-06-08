using namespace app;

namespace app::methods::Moon::BehaviourSystem::TaskRunner {
IL2CPP_REGISTER_METHOD(0x03011AC0, BehaviourStatus__Enum, ExecuteTask, (ITask * task, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011CC0, void, InterruptTask, (ITask * task, IContext * context, BehaviourStatus__Enum status, bool autoExecute));
}
