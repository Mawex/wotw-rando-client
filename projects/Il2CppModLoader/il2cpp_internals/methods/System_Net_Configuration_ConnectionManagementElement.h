#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::ConnectionManagementElement {
IL2CPP_REGISTER_METHOD(0x02018890, void, __ctor, (ConnectionManagementElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04798160, ConnectionManagementElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020188C0, void, __ctor, (ConnectionManagementElement * __this, String * address, int32_t maxConnection));
IL2CPP_REGISTER_METHODINFO(0x0475F528, ConnectionManagementElement__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020188F0, String *, get_Address, (ConnectionManagementElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047426D0, ConnectionManagementElement_get_Address__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018920, void, set_Address, (ConnectionManagementElement * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04792EB0, ConnectionManagementElement_set_Address__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018950, int32_t, get_MaxConnection, (ConnectionManagementElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04727C10, ConnectionManagementElement_get_MaxConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018980, void, set_MaxConnection, (ConnectionManagementElement * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04750128, ConnectionManagementElement_set_MaxConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020189B0, ConfigurationPropertyCollection *, get_Properties, (ConnectionManagementElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04748938, ConnectionManagementElement_get_Properties__MethodInfo);
}
