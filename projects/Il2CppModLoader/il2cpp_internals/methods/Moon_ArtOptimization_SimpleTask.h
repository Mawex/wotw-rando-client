using namespace app;

namespace app::methods::Moon::ArtOptimization::SimpleTask {
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetNext, (SimpleTask * __this, IOptimizationTask * nextTask));
IL2CPP_REGISTER_METHOD(0x00CB2CD0, void, Update, (SimpleTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB2CF0, void, EnterNextTaskContext, (SimpleTask * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterContext, (SimpleTask * __this, IOptimizationTask * antecedent, Object * contextData));
IL2CPP_REGISTER_METHOD(0x002FC6D0, TaskState__Enum, get_State, (SimpleTask * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_State, (SimpleTask * __this, TaskState__Enum value));
IL2CPP_REGISTER_METHOD(0x00CB2DA0, bool, get_IsFinished, (SimpleTask * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SimpleTask * __this));
}
