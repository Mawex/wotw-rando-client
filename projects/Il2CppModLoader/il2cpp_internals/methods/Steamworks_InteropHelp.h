using namespace app;

namespace app::methods::Steamworks::InteropHelp {
IL2CPP_REGISTER_METHOD(0x002FA000, void, TestIfPlatformSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015FFAE0, void, TestIfAvailableClient, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0474CE08, InteropHelp_TestIfAvailableClient__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FFBA0, void, TestIfAvailableGameServer, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x047054D0, InteropHelp_TestIfAvailableGameServer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FFC60, String *, PtrToStringUTF8, (void * nativeUtf8));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InteropHelp * __this));
}
