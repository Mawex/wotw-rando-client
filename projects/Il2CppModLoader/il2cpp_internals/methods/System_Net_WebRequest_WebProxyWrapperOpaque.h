#include <interception_macros.h>

namespace app::methods::System::Net::WebRequest_WebProxyWrapperOpaque {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (WebRequest_WebProxyWrapperOpaque * __this, WebProxy * webProxy));
IL2CPP_REGISTER_METHOD(0x021B80F0, Uri *, GetProxy, (WebRequest_WebProxyWrapperOpaque * __this, Uri * destination));
IL2CPP_REGISTER_METHOD(0x021B8110, bool, IsBypassed, (WebRequest_WebProxyWrapperOpaque * __this, Uri * host));
IL2CPP_REGISTER_METHOD(0x01A88520, ICredentials *, get_Credentials, (WebRequest_WebProxyWrapperOpaque * __this));
IL2CPP_REGISTER_METHOD(0x021B8260, void, set_Credentials, (WebRequest_WebProxyWrapperOpaque * __this, ICredentials * value));
IL2CPP_REGISTER_METHOD(0x021B8280, ProxyChain *, GetProxies, (WebRequest_WebProxyWrapperOpaque * __this, Uri * destination));
}
