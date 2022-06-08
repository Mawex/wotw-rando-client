#include <interception_macros.h>

namespace app::methods::System::Net::AutoWebProxyScriptEngine {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AutoWebProxyScriptEngine * __this, WebProxy * proxy, bool useRegistry));
IL2CPP_REGISTER_METHOD(0x002FA280, Uri *, get_AutomaticConfigurationScript, (AutoWebProxyScriptEngine * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_AutomaticConfigurationScript, (AutoWebProxyScriptEngine * __this, Uri * value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_AutomaticallyDetectSettings, (AutoWebProxyScriptEngine * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_AutomaticallyDetectSettings, (AutoWebProxyScriptEngine * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02010EF0, bool, GetProxies, (AutoWebProxyScriptEngine * __this, Uri * destination, IList_1_System_String_ * * proxyList));
IL2CPP_REGISTER_METHOD(0x02010EF0, bool, GetProxies, (AutoWebProxyScriptEngine * __this, Uri * destination, IList_1_System_String_ * * proxyList, int32_t * syncStatus));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, (AutoWebProxyScriptEngine * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Abort, (AutoWebProxyScriptEngine * __this, int32_t * syncStatus));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckForChanges, (AutoWebProxyScriptEngine * __this));
}
