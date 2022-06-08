using namespace app;

namespace app::methods::nintendoSDKPlugin::NetworkInterfaceManager {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsNetworkAvailable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsNetworkRequestOnHold, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SubmitNetworkRequest, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SubmitNetworkRequestAndWait, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleNetworkRequestErrorResult, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NetworkInterfaceManager * __this));
}
