using namespace app;

namespace app::methods::SystemIntegration::SystemIntegrationMainThreadRunner {
IL2CPP_REGISTER_METHOD(0x00CDA850, void, Update, (SystemIntegrationMainThreadRunner * __this));
IL2CPP_REGISTER_METHOD(0x00CDAAA0, void, Enqueue, (Action * action));
IL2CPP_REGISTER_METHOD(0x00CDABC0, void, DoEnqueue, (SystemIntegrationMainThreadRunner * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00CDAC60, void, EnsureInitialized, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CDAE70, void, Add, (IUpdateable * updateable));
IL2CPP_REGISTER_METHOD(0x00CDAF20, void, __ctor, (SystemIntegrationMainThreadRunner * __this));
}
