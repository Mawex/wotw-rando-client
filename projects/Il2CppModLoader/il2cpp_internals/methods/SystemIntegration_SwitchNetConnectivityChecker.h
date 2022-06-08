#include <interception_macros.h>

namespace app::methods::SystemIntegration::SwitchNetConnectivityChecker {
IL2CPP_REGISTER_METHOD(0x0052B120, void, __ctor, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B450, bool, get_RunningInBackground, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B470, void, set_RunningInBackground, (SwitchNetConnectivityChecker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052B480, bool, get_SimulatePerfectEnvironment, ());
IL2CPP_REGISTER_METHOD(0x0052B540, bool, get_CanSendNetCommunications, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B560, bool, IsResolvingIssues, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_HasToken, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_HasConnection, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B5A0, void, Update, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartConnectionTest, ());
IL2CPP_REGISTER_METHOD(0x0052B5B0, void, ResolveNoConnectionIssue, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoNsaIdIssues, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoNsaIdSilently, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckContextDoneState, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetTokenAsync, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckNsaId, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnsureValidNsaIdInCache, (SwitchNetConnectivityChecker * __this));
IL2CPP_REGISTER_METHOD(0x0052B5E0, void, OnGUI, (SwitchNetConnectivityChecker * __this));
}
