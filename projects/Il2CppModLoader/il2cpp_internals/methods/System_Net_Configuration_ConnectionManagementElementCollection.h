#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::ConnectionManagementElementCollection {
IL2CPP_REGISTER_METHOD(0x020189E0, void, __ctor, (ConnectionManagementElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FBB0, ConnectionManagementElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018A10, ConnectionManagementElement *, get_Item, (ConnectionManagementElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04704620, ConnectionManagementElementCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018A40, void, set_Item, (ConnectionManagementElementCollection * __this, int32_t index, ConnectionManagementElement * value));
IL2CPP_REGISTER_METHODINFO(0x0474EC58, ConnectionManagementElementCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018A70, ConnectionManagementElement *, get_Item, (ConnectionManagementElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047094C8, ConnectionManagementElementCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018AA0, void, set_Item, (ConnectionManagementElementCollection * __this, String * name, ConnectionManagementElement * value));
IL2CPP_REGISTER_METHODINFO(0x04766790, ConnectionManagementElementCollection_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018AD0, void, Add, (ConnectionManagementElementCollection * __this, ConnectionManagementElement * element));
IL2CPP_REGISTER_METHODINFO(0x047394D0, ConnectionManagementElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018B00, void, Clear, (ConnectionManagementElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04783620, ConnectionManagementElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018B30, ConfigurationElement *, CreateNewElement, (ConnectionManagementElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04785D50, ConnectionManagementElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018B60, Object *, GetElementKey, (ConnectionManagementElementCollection * __this, ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x047182F8, ConnectionManagementElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018B90, int32_t, IndexOf, (ConnectionManagementElementCollection * __this, ConnectionManagementElement * element));
IL2CPP_REGISTER_METHODINFO(0x047046A0, ConnectionManagementElementCollection_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018BC0, void, Remove, (ConnectionManagementElementCollection * __this, ConnectionManagementElement * element));
IL2CPP_REGISTER_METHODINFO(0x047201C0, ConnectionManagementElementCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018BF0, void, Remove, (ConnectionManagementElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0471DB98, ConnectionManagementElementCollection_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018C20, void, RemoveAt, (ConnectionManagementElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0470E8E0, ConnectionManagementElementCollection_RemoveAt__MethodInfo);
}
