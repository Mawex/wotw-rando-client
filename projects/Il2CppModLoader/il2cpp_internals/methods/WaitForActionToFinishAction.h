using namespace app;

namespace app::methods::WaitForActionToFinishAction {
IL2CPP_REGISTER_METHOD(0x008C5A90, bool, get_IsPerforming, (WaitForActionToFinishAction * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, (WaitForActionToFinishAction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (WaitForActionToFinishAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (WaitForActionToFinishAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (WaitForActionToFinishAction * __this));
}
