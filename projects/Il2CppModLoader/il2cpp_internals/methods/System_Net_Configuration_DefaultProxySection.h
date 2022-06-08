#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::DefaultProxySection {
IL2CPP_REGISTER_METHOD(0x02018CE0, void, __ctor, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x04770548, DefaultProxySection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018D10, BypassElementCollection *, get_BypassList, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D1D8, DefaultProxySection_get_BypassList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018D40, bool, get_Enabled, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B018, DefaultProxySection_get_Enabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018D70, void, set_Enabled, (DefaultProxySection * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04726818, DefaultProxySection_set_Enabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018DA0, ModuleElement *, get_Module, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x04761A60, DefaultProxySection_get_Module__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018DD0, ConfigurationPropertyCollection *, get_Properties, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x0474CE50, DefaultProxySection_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018E00, ProxyElement *, get_Proxy, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x04768D70, DefaultProxySection_get_Proxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018E30, bool, get_UseDefaultCredentials, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x04724180, DefaultProxySection_get_UseDefaultCredentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018E60, void, set_UseDefaultCredentials, (DefaultProxySection * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04755E70, DefaultProxySection_set_UseDefaultCredentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018E90, void, PostDeserialize, (DefaultProxySection * __this));
IL2CPP_REGISTER_METHODINFO(0x04762C80, DefaultProxySection_PostDeserialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018EC0, void, Reset, (DefaultProxySection * __this, ConfigurationElement * parentElement));
IL2CPP_REGISTER_METHODINFO(0x047605F8, DefaultProxySection_Reset__MethodInfo);
}
