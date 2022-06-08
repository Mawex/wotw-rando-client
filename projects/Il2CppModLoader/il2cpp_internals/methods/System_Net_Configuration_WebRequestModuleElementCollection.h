#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::WebRequestModuleElementCollection {
IL2CPP_REGISTER_METHOD(0x01E99740, void, __ctor, (WebRequestModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04793C08, WebRequestModuleElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99770, WebRequestModuleElement *, get_Item, (WebRequestModuleElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04778E10, WebRequestModuleElementCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E997A0, void, set_Item, (WebRequestModuleElementCollection * __this, int32_t index, WebRequestModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x04769C78, WebRequestModuleElementCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E997D0, WebRequestModuleElement *, get_Item, (WebRequestModuleElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047049E8, WebRequestModuleElementCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99800, void, set_Item, (WebRequestModuleElementCollection * __this, String * name, WebRequestModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x0473C6C8, WebRequestModuleElementCollection_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99830, void, Add, (WebRequestModuleElementCollection * __this, WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x04733FF0, WebRequestModuleElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99860, void, Clear, (WebRequestModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D5E8, WebRequestModuleElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99890, ConfigurationElement *, CreateNewElement, (WebRequestModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0478DA18, WebRequestModuleElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E998C0, Object *, GetElementKey, (WebRequestModuleElementCollection * __this, ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x04779DB0, WebRequestModuleElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E998F0, int32_t, IndexOf, (WebRequestModuleElementCollection * __this, WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x0472D4E8, WebRequestModuleElementCollection_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99920, void, Remove, (WebRequestModuleElementCollection * __this, WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x047357B8, WebRequestModuleElementCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99950, void, Remove, (WebRequestModuleElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0478F550, WebRequestModuleElementCollection_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99980, void, RemoveAt, (WebRequestModuleElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04784A80, WebRequestModuleElementCollection_RemoveAt__MethodInfo);
}
