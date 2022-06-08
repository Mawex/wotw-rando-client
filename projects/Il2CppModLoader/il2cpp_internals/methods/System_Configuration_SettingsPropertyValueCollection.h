using namespace app;

namespace app::methods::System::Configuration::SettingsPropertyValueCollection {
IL2CPP_REGISTER_METHOD(0x01FFDDB0, void, __ctor, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04797628, SettingsPropertyValueCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDDE0, int32_t, get_Count, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CB28, SettingsPropertyValueCollection_get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDE10, bool, get_IsSynchronized, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04742EF0, SettingsPropertyValueCollection_get_IsSynchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDE40, SettingsPropertyValue *, get_Item, (SettingsPropertyValueCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04715F38, SettingsPropertyValueCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDE70, Object *, get_SyncRoot, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047126C8, SettingsPropertyValueCollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDEA0, void, Add, (SettingsPropertyValueCollection * __this, SettingsPropertyValue * property));
IL2CPP_REGISTER_METHODINFO(0x04772E28, SettingsPropertyValueCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDED0, void, Clear, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047107D8, SettingsPropertyValueCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDF00, Object *, Clone, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04760EB8, SettingsPropertyValueCollection_Clone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDF30, void, CopyTo, (SettingsPropertyValueCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04782CA8, SettingsPropertyValueCollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDF60, IEnumerator *, GetEnumerator, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04793E28, SettingsPropertyValueCollection_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDF90, void, Remove, (SettingsPropertyValueCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04797318, SettingsPropertyValueCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDFC0, void, SetReadOnly, (SettingsPropertyValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04739350, SettingsPropertyValueCollection_SetReadOnly__MethodInfo);
}
