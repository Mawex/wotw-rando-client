using namespace app;

namespace app::methods::DelayedAction {
IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (DelayedAction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DelayedAction * __this));
IL2CPP_REGISTER_METHOD(0x00B7FB90, void, __ctor, (DelayedAction * __this, DelayedAction_Action * action, float timeSeconds));
IL2CPP_REGISTER_METHOD(0x00B7FBC0, void, __ctor, (DelayedAction * __this, DelayedAction_Action * action, int32_t frameDelay));
IL2CPP_REGISTER_METHOD(0x00B7FBF0, void, __ctor, (DelayedAction * __this, DelayedAction_Action * action, float timeSeconds, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x00B7FC20, void, __ctor, (DelayedAction * __this, DelayedAction_Action * action, int32_t frameDelay, Func_1_Boolean_ * condition, Component_1 * owner));
IL2CPP_REGISTER_METHOD(0x00B7FC40, void, PerformDelayed, (DelayedAction * __this, DelayedAction_Action * action));
IL2CPP_REGISTER_METHOD(0x00B7FE10, void, Release, (DelayedAction * __this, bool forcePendingActionToRun));
IL2CPP_REGISTER_METHOD(0x00B7FE30, void, OnFixedUpdate, (DelayedAction * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C190, DelayedAction_OnFixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B7FFF0, void, CleanUp, (DelayedAction * __this));
IL2CPP_REGISTER_METHOD(0x00B801B0, void, PerformAction, (DelayedAction * __this));
}
