#include <interception_macros.h>

namespace app::methods::Mono_Net::CFNetwork_CFWebProxy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CFNetwork_CFWebProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, ICredentials *, get_Credentials, (app::CFNetwork_CFWebProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00BA6CF0, void, set_Credentials, (app::CFNetwork_CFWebProxy * this_ptr, app::ICredentials * value));
IL2CPP_REGISTER_METHOD(0x02176D30, Uri *, GetProxyUri, (app::CFProxy * proxy, app::NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177340, Uri *, GetProxyUriFromScript, (app::void * script, app::Uri * target_uri, app::NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177540, Uri *, ExecuteProxyAutoConfigurationURL, (app::void * proxy_auto_config_u_r_l, app::Uri * target_uri, app::NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177610, Uri *, SelectProxy, (app::CFProxy__Array * proxies, app::Uri * target_uri, app::NetworkCredential * * credentials));
IL2CPP_REGISTER_METHOD(0x02177700, Uri *, GetProxy, (app::CFNetwork_CFWebProxy * this_ptr, app::Uri * target_uri));
IL2CPP_REGISTER_METHODINFO(0x04725F00, CFNetwork_CFWebProxy_GetProxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02177AE0, bool, IsBypassed, (app::CFNetwork_CFWebProxy * this_ptr, app::Uri * target_uri));
IL2CPP_REGISTER_METHODINFO(0x0477C3E8, CFNetwork_CFWebProxy_IsBypassed__MethodInfo);
}
