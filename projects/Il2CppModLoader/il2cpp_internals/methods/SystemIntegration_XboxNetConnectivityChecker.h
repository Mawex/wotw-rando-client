using namespace app;

namespace app::methods::SystemIntegration::XboxNetConnectivityChecker {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RunningInBackground, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_RunningInBackground, (XboxNetConnectivityChecker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSendNetCommunications, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoConnectionIssue, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsResolvingIssues, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasToken, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasConnection, (XboxNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x00B80D80, void, __ctor, (XboxNetConnectivityChecker * __this));
}
