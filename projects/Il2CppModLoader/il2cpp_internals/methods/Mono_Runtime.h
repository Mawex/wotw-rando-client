using namespace app;

namespace app::methods::Mono::Runtime {
IL2CPP_REGISTER_METHOD(0x023CE6E0, void, mono_runtime_install_handlers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023CE6F0, void, InstallSignalHandlers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023CE700, void, mono_runtime_cleanup_handlers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023CE700, void, RemoveSignalHandlers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023CE750, String *, GetDisplayName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0173D7D0, String *, GetNativeStackTrace, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SetGCAllowSynchronousMajor, (bool flag));
}
