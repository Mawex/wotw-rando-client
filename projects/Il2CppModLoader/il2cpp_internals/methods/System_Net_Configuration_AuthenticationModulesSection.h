#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::AuthenticationModulesSection {
IL2CPP_REGISTER_METHOD(0x02018410, void, __ctor, (AuthenticationModulesSection * __this));
IL2CPP_REGISTER_METHODINFO(0x047895E8, AuthenticationModulesSection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018440, AuthenticationModuleElementCollection *, get_AuthenticationModules, (AuthenticationModulesSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04792198, AuthenticationModulesSection_get_AuthenticationModules__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018470, ConfigurationPropertyCollection *, get_Properties, (AuthenticationModulesSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FD00, AuthenticationModulesSection_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020184A0, void, InitializeDefault, (AuthenticationModulesSection * __this));
IL2CPP_REGISTER_METHODINFO(0x047539B0, AuthenticationModulesSection_InitializeDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020184D0, void, PostDeserialize, (AuthenticationModulesSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04758840, AuthenticationModulesSection_PostDeserialize__MethodInfo);
}
