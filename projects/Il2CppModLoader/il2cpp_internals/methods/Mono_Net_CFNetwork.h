#include <interception_macros.h>

namespace app::methods::Mono_Net::CFNetwork {
IL2CPP_REGISTER_METHOD(0x02173E80, void *, CFNetworkCopyProxiesForAutoConfigurationScriptSequential, (app::void * proxy_auto_configuration_script, app::void * target_u_r_l, app::void * * error));
IL2CPP_REGISTER_METHOD(0x02173F30, void *, CFNetworkExecuteProxyAutoConfigurationURL, (app::void * proxy_auto_config_u_r_l, app::void * target_u_r_l, app::CFNetwork_CFProxyAutoConfigurationResultCallback * cb, app::CFStreamClientContext * client_context));
IL2CPP_REGISTER_METHOD(0x02174000, void, CFNetworkCopyProxiesForAutoConfigurationScriptThread, ());
IL2CPP_REGISTER_METHODINFO(0x04707868, CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021743E0, void *, CFNetworkCopyProxiesForAutoConfigurationScript, (app::void * proxy_auto_configuration_script, app::void * target_u_r_l, app::void * * error));
IL2CPP_REGISTER_METHOD(0x02174C70, CFArray *, CopyProxiesForAutoConfigurationScript, (app::void * proxy_auto_configuration_script, app::CFUrl * target_u_r_l));
IL2CPP_REGISTER_METHOD(0x02174E30, CFProxy__Array *, GetProxiesForAutoConfigurationScript_1, (app::void * proxy_auto_configuration_script, app::CFUrl * target_u_r_l));
IL2CPP_REGISTER_METHODINFO(0x0476A668, CFNetwork_GetProxiesForAutoConfigurationScript__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175220, CFProxy__Array *, GetProxiesForAutoConfigurationScript_2, (app::void * proxy_auto_configuration_script, app::Uri * target_uri));
IL2CPP_REGISTER_METHODINFO(0x0476FFF0, CFNetwork_GetProxiesForAutoConfigurationScript_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175390, CFProxy__Array *, ExecuteProxyAutoConfigurationURL, (app::void * proxy_auto_config_u_r_l, app::Uri * target_u_r_l));
IL2CPP_REGISTER_METHOD(0x021758C0, void *, CFNetworkCopyProxiesForURL, (app::void * url, app::void * proxy_settings));
IL2CPP_REGISTER_METHOD(0x02175970, CFArray *, CopyProxiesForURL, (app::CFUrl * url, app::CFDictionary * proxy_settings));
IL2CPP_REGISTER_METHOD(0x02175BB0, CFProxy__Array *, GetProxiesForURL, (app::CFUrl * url, app::CFProxySettings * proxy_settings));
IL2CPP_REGISTER_METHODINFO(0x04758F40, CFNetwork_GetProxiesForURL__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175FB0, CFProxy__Array *, GetProxiesForUri, (app::Uri * uri, app::CFProxySettings * proxy_settings));
IL2CPP_REGISTER_METHODINFO(0x04764000, CFNetwork_GetProxiesForUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021760F0, void *, CFNetworkCopySystemProxySettings, ());
IL2CPP_REGISTER_METHOD(0x02176180, CFProxySettings *, GetSystemProxySettings, ());
IL2CPP_REGISTER_METHOD(0x02176450, IWebProxy *, GetDefaultProxy, ());
IL2CPP_REGISTER_METHOD(0x02176590, void, __cctor, ());
}
