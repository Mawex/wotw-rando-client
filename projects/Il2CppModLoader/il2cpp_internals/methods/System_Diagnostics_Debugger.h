using namespace app;

namespace app::methods::System::Diagnostics::Debugger {
IL2CPP_REGISTER_METHOD(0x01740F20, bool, get_IsAttached, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01740FC0, bool, IsAttached_internal, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Break, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (int32_t level, String * category, String * message));
IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyOfCrossThreadDependency, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01740FE0, void, __cctor, (MethodInfo * method));
}
