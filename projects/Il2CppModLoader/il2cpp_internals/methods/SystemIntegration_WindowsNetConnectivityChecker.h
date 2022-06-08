using namespace app;

namespace app::methods::SystemIntegration::WindowsNetConnectivityChecker {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RunningInBackground, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_RunningInBackground, (WindowsNetConnectivityChecker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CDB1E0, bool, get_CanSendNetCommunications, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoConnectionIssue, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsResolvingIssues, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasToken, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00CDB1E0, bool, get_HasConnection, (WindowsNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00B80D80, void, __ctor, (WindowsNetConnectivityChecker * __this));
}
