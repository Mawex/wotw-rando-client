using namespace app;

namespace app::methods::DelayedAction_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (DelayedAction_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (DelayedAction_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x019DF900, void, __ctor, (DelayedAction_1_System_Object_ * __this, Action_1_Object_ * action, float timeSeconds, Object * param));
IL2CPP_REGISTER_METHOD(0x019DF950, void, __ctor, (DelayedAction_1_System_Object_ * __this, Action_1_Object_ * action, int32_t frameDelay, Object * param));
IL2CPP_REGISTER_METHOD(0x019DF9A0, void, __ctor, (DelayedAction_1_System_Object_ * __this, Action_1_Object_ * action, float timeSeconds, Object * param, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x019DFA00, void, __ctor, (DelayedAction_1_System_Object_ * __this, Action_1_Object_ * action, int32_t frameDelay, Object * param, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x019DFA50, void, PerformDelayed, (DelayedAction_1_System_Object_ * __this, Action_1_Object_ * action, Object * param));
IL2CPP_REGISTER_METHOD(0x019DFC50, void, OnFixedUpdate, (DelayedAction_1_System_Object_ * __this));
}
