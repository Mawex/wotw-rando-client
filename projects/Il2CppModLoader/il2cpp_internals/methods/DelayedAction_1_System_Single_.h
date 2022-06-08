using namespace app;

namespace app::methods::DelayedAction_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x019E00E0, void, __ctor, (DelayedAction_1_System_Single_ * __this, Action_1_Single_ * action, float timeSeconds, float param));
IL2CPP_REGISTER_METHODINFO(0x047450F0, DelayedAction_1_System_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (DelayedAction_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (DelayedAction_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x019E0130, void, __ctor, (DelayedAction_1_System_Single_ * __this, Action_1_Single_ * action, int32_t frameDelay, float param));
IL2CPP_REGISTER_METHOD(0x019E0180, void, __ctor, (DelayedAction_1_System_Single_ * __this, Action_1_Single_ * action, float timeSeconds, float param, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x019E01E0, void, __ctor, (DelayedAction_1_System_Single_ * __this, Action_1_Single_ * action, int32_t frameDelay, float param, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x019E0230, void, PerformDelayed, (DelayedAction_1_System_Single_ * __this, Action_1_Single_ * action, float param));
IL2CPP_REGISTER_METHOD(0x019E0430, void, OnFixedUpdate, (DelayedAction_1_System_Single_ * __this));
}
