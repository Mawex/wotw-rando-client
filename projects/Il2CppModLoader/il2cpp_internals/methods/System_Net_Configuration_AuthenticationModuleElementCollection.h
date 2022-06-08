using namespace app;

namespace app::methods::System::Net::Configuration::AuthenticationModuleElementCollection {
IL2CPP_REGISTER_METHOD(0x020181A0, void, __ctor, (AuthenticationModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04710510, AuthenticationModuleElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020181D0, AuthenticationModuleElement *, get_Item, (AuthenticationModuleElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04713C38, AuthenticationModuleElementCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018200, void, set_Item, (AuthenticationModuleElementCollection * __this, int32_t index, AuthenticationModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x04738BC0, AuthenticationModuleElementCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018230, AuthenticationModuleElement *, get_Item, (AuthenticationModuleElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0472F088, AuthenticationModuleElementCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018260, void, set_Item, (AuthenticationModuleElementCollection * __this, String * name, AuthenticationModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x04703348, AuthenticationModuleElementCollection_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018290, void, Add, (AuthenticationModuleElementCollection * __this, AuthenticationModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x047064D8, AuthenticationModuleElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020182C0, void, Clear, (AuthenticationModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B840, AuthenticationModuleElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020182F0, ConfigurationElement *, CreateNewElement, (AuthenticationModuleElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04725E78, AuthenticationModuleElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018320, Object *, GetElementKey, (AuthenticationModuleElementCollection * __this, ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x0476EAD0, AuthenticationModuleElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018350, int32_t, IndexOf, (AuthenticationModuleElementCollection * __this, AuthenticationModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x047685C8, AuthenticationModuleElementCollection_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018380, void, Remove, (AuthenticationModuleElementCollection * __this, AuthenticationModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x0473AB98, AuthenticationModuleElementCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020183B0, void, Remove, (AuthenticationModuleElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04761290, AuthenticationModuleElementCollection_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020183E0, void, RemoveAt, (AuthenticationModuleElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047427C8, AuthenticationModuleElementCollection_RemoveAt__MethodInfo);
}
