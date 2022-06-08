using namespace app;

namespace app::methods::System::Configuration::SettingElementCollection {
IL2CPP_REGISTER_METHOD(0x02962560, void, __ctor, (SettingElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04785788, SettingElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962590, ConfigurationElementCollectionType__Enum, get_CollectionType, (SettingElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04755B40, SettingElementCollection_get_CollectionType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029625C0, String *, get_ElementName, (SettingElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047140E8, SettingElementCollection_get_ElementName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029625F0, void, Add, (SettingElementCollection * __this, SettingElement * element));
IL2CPP_REGISTER_METHODINFO(0x047149E8, SettingElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962620, void, Clear, (SettingElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04721DD8, SettingElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962650, ConfigurationElement *, CreateNewElement, (SettingElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E278, SettingElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962680, SettingElement *, Get, (SettingElementCollection * __this, String * elementKey));
IL2CPP_REGISTER_METHODINFO(0x04749728, SettingElementCollection_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029626B0, Object *, GetElementKey, (SettingElementCollection * __this, ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x047549A0, SettingElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029626E0, void, Remove, (SettingElementCollection * __this, SettingElement * element));
IL2CPP_REGISTER_METHODINFO(0x04791550, SettingElementCollection_Remove__MethodInfo);
}
