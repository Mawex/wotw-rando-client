using namespace app;

namespace app::methods::Mono::Net::CFNetwork {
IL2CPP_REGISTER_METHOD(0x02173E80, void *, CFNetworkCopyProxiesForAutoConfigurationScriptSequential, (void * proxyAutoConfigurationScript, void * targetURL, void * * error));
IL2CPP_REGISTER_METHOD(0x02173F30, void *, CFNetworkExecuteProxyAutoConfigurationURL, (void * proxyAutoConfigURL, void * targetURL, CFNetwork_CFProxyAutoConfigurationResultCallback * cb, CFStreamClientContext * clientContext));
IL2CPP_REGISTER_METHOD(0x02174000, void, CFNetworkCopyProxiesForAutoConfigurationScriptThread, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04707868, CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021743E0, void *, CFNetworkCopyProxiesForAutoConfigurationScript, (void * proxyAutoConfigurationScript, void * targetURL, void * * error));
IL2CPP_REGISTER_METHOD(0x02174C70, CFArray *, CopyProxiesForAutoConfigurationScript, (void * proxyAutoConfigurationScript, CFUrl * targetURL));
IL2CPP_REGISTER_METHOD(0x02174E30, CFProxy__Array *, GetProxiesForAutoConfigurationScript, (void * proxyAutoConfigurationScript, CFUrl * targetURL));
IL2CPP_REGISTER_METHODINFO(0x0476A668, CFNetwork_GetProxiesForAutoConfigurationScript__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175220, CFProxy__Array *, GetProxiesForAutoConfigurationScript, (void * proxyAutoConfigurationScript, Uri * targetUri));
IL2CPP_REGISTER_METHODINFO(0x0476FFF0, CFNetwork_GetProxiesForAutoConfigurationScript_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175390, CFProxy__Array *, ExecuteProxyAutoConfigurationURL, (void * proxyAutoConfigURL, Uri * targetURL));
IL2CPP_REGISTER_METHOD(0x021758C0, void *, CFNetworkCopyProxiesForURL, (void * url, void * proxySettings));
IL2CPP_REGISTER_METHOD(0x02175970, CFArray *, CopyProxiesForURL, (CFUrl * url, CFDictionary * proxySettings));
IL2CPP_REGISTER_METHOD(0x02175BB0, CFProxy__Array *, GetProxiesForURL, (CFUrl * url, CFProxySettings * proxySettings));
IL2CPP_REGISTER_METHODINFO(0x04758F40, CFNetwork_GetProxiesForURL__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02175FB0, CFProxy__Array *, GetProxiesForUri, (Uri * uri, CFProxySettings * proxySettings));
IL2CPP_REGISTER_METHODINFO(0x04764000, CFNetwork_GetProxiesForUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021760F0, void *, CFNetworkCopySystemProxySettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02176180, CFProxySettings *, GetSystemProxySettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02176450, IWebProxy *, GetDefaultProxy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02176590, void, __cctor, (MethodInfo * method));
}
