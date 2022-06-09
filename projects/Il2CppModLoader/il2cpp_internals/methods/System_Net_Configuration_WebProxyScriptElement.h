#include <interception_macros.h>

namespace app::methods::System_Net_Configuration::WebProxyScriptElement {
IL2CPP_REGISTER_METHOD(0x01E994D0, void, __ctor, (app::WebProxyScriptElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471B970, WebProxyScriptElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99500, TimeSpan, get_DownloadTimeout, (app::WebProxyScriptElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04776648, WebProxyScriptElement_get_DownloadTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99530, void, set_DownloadTimeout, (app::WebProxyScriptElement * this_ptr, app::TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x04725448, WebProxyScriptElement_set_DownloadTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99560, ConfigurationPropertyCollection *, get_Properties, (app::WebProxyScriptElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474D1E8, WebProxyScriptElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99590, void, PostDeserialize, (app::WebProxyScriptElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04779FD0, WebProxyScriptElement_PostDeserialize__MethodInfo);
}
