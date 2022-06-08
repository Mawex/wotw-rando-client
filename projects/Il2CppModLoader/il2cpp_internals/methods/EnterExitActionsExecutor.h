using namespace app;

namespace app::methods::EnterExitActionsExecutor {
IL2CPP_REGISTER_METHOD(0x00C8B8A0, void, add_OnExitActionFinished, (EnterExitActionsExecutor * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00C8B990, void, remove_OnExitActionFinished, (EnterExitActionsExecutor * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00C8BA80, void, FixedUpdate, (EnterExitActionsExecutor * __this));
IL2CPP_REGISTER_METHOD(0x00C8BB70, void, EnterTrigger, (EnterExitActionsExecutor * __this));
IL2CPP_REGISTER_METHOD(0x00C8BCA0, void, ExitTrigger, (EnterExitActionsExecutor * __this));
IL2CPP_REGISTER_METHOD(0x00C8BDD0, void, PerformEnterAction, (EnterExitActionsExecutor * __this));
IL2CPP_REGISTER_METHOD(0x00C8BE00, void, PerformExitAction, (EnterExitActionsExecutor * __this));
IL2CPP_REGISTER_METHOD(0x00C8BE30, void, __ctor, (EnterExitActionsExecutor * __this));
}
