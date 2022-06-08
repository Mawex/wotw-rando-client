#include <interception_macros.h>

namespace app::methods::Mono::Net::CFNetwork_CFWebProxy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CFNetwork_CFWebProxy * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ICredentials *, get_Credentials, (CFNetwork_CFWebProxy * __this));
IL2CPP_REGISTER_METHOD(0x00BA6CF0, void, set_Credentials, (CFNetwork_CFWebProxy * __this, ICredentials * value));
IL2CPP_REGISTER_METHOD(0x02176D30, Uri *, GetProxyUri, (CFProxy * proxy, NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177340, Uri *, GetProxyUriFromScript, (void * script, Uri * targetUri, NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177540, Uri *, ExecuteProxyAutoConfigurationURL, (void * proxyAutoConfigURL, Uri * targetUri, NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177610, Uri *, SelectProxy, (CFProxy__Array * proxies, Uri * targetUri, NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177700, Uri *, GetProxy, (CFNetwork_CFWebProxy * __this, Uri * targetUri));
IL2CPP_REGISTER_METHODINFO(0x04725F00, CFNetwork_CFWebProxy_GetProxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02177AE0, bool, IsBypassed, (CFNetwork_CFWebProxy * __this, Uri * targetUri));
IL2CPP_REGISTER_METHODINFO(0x0477C3E8, CFNetwork_CFWebProxy_IsBypassed__MethodInfo);
}
