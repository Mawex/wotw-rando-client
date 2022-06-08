#include <interception_macros.h>

namespace app::methods::System::Net::WebProxyDataBuilder {
IL2CPP_REGISTER_METHOD(0x021B1D30, WebProxyData *, Build, (WebProxyDataBuilder * __this));
IL2CPP_REGISTER_METHOD(0x021B1E90, void, SetProxyAndBypassList, (WebProxyDataBuilder * __this, String * addressString, String * bypassListString));
IL2CPP_REGISTER_METHOD(0x021B2070, void, SetAutoProxyUrl, (WebProxyDataBuilder * __this, String * autoConfigUrl));
IL2CPP_REGISTER_METHOD(0x021B2160, void, SetAutoDetectSettings, (WebProxyDataBuilder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x021B2180, Uri *, ParseProxyUri, (String * proxyString));
IL2CPP_REGISTER_METHODINFO(0x04731800, WebProxyDataBuilder_ParseProxyUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B2360, Hashtable *, ParseProtocolProxies, (String * proxyListString));
IL2CPP_REGISTER_METHODINFO(0x0474D2E8, WebProxyDataBuilder_ParseProtocolProxies__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B2890, FormatException *, CreateInvalidProxyStringException, (String * originalProxyString));
IL2CPP_REGISTER_METHOD(0x021B2A90, String *, BypassStringEscape, (String * rawString));
IL2CPP_REGISTER_METHOD(0x021B2FE0, String *, ConvertRegexReservedChars, (String * rawString));
IL2CPP_REGISTER_METHOD(0x021B3210, ArrayList *, ParseBypassList, (String * bypassListString, bool * bypassOnLocal));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WebProxyDataBuilder * __this));
}
