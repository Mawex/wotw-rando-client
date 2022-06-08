#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::NetSectionGroup {
IL2CPP_REGISTER_METHOD(0x02019D70, void, __ctor, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04789168, NetSectionGroup__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019DA0, AuthenticationModulesSection *, get_AuthenticationModules, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D998, NetSectionGroup_get_AuthenticationModules__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019DD0, ConnectionManagementSection *, get_ConnectionManagement, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04744448, NetSectionGroup_get_ConnectionManagement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019E00, DefaultProxySection *, get_DefaultProxy, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04762A68, NetSectionGroup_get_DefaultProxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019E30, MailSettingsSectionGroup *, get_MailSettings, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04748A38, NetSectionGroup_get_MailSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019E60, RequestCachingSection *, get_RequestCaching, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04706A08, NetSectionGroup_get_RequestCaching__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019E90, SettingsSection *, get_Settings, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04756F78, NetSectionGroup_get_Settings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019EC0, WebRequestModulesSection *, get_WebRequestModules, (NetSectionGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DBF0, NetSectionGroup_get_WebRequestModules__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019EF0, NetSectionGroup *, GetSectionGroup, (Configuration * config));
IL2CPP_REGISTER_METHODINFO(0x04751250, NetSectionGroup_GetSectionGroup__MethodInfo);
}
