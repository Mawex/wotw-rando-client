using namespace app;

namespace app::methods::usedStandaloneScripts::RenderThreadWaker {
IL2CPP_REGISTER_METHOD(0x03126C00, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03126CA0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x03126D50, void, WakeupRT, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04758C50, RenderThreadWaker_WakeupRT__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03126F10, void, InjectToPlayerLoop, (PlayerLoopSystem * playerLoop));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RenderThreadWaker * __this));
IL2CPP_REGISTER_METHOD(0x03127190, void, __cctor, (MethodInfo * method));
}
