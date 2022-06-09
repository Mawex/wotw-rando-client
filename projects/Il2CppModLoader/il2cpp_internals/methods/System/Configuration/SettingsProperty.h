#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsProperty {
    IL2CPP_REGISTER_METHOD(0x02962D70, void, __ctor_1, (app::SettingsProperty * this_ptr, app::SettingsProperty * property_to_copy));
    IL2CPP_REGISTER_METHODINFO(0x04709470, SettingsProperty__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962DA0, void, __ctor_2, (app::SettingsProperty * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04777620, SettingsProperty__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962DD0, void, __ctor_3, (app::SettingsProperty * this_ptr, app::String * name, app::Type * property_type, app::SettingsProvider * provider, bool is_read_only, app::Object * default_value, app::SettingsSerializeAs__Enum serialize_as, app::SettingsAttributeDictionary * attributes, bool throw_on_error_deserializing, bool throw_on_error_serializing));
    IL2CPP_REGISTER_METHODINFO(0x0472BFB8, SettingsProperty__ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962E00, app::SettingsAttributeDictionary *, get_Attributes, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04766BF8, SettingsProperty_get_Attributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962E30, app::Object *, get_DefaultValue, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04784378, SettingsProperty_get_DefaultValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962E60, void, set_DefaultValue, (app::SettingsProperty * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04706080, SettingsProperty_set_DefaultValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962E90, bool, get_IsReadOnly, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047286A0, SettingsProperty_get_IsReadOnly__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962EC0, void, set_IsReadOnly, (app::SettingsProperty * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04799168, SettingsProperty_set_IsReadOnly__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962EF0, app::String *, get_Name, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047014B8, SettingsProperty_get_Name__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962F20, void, set_Name, (app::SettingsProperty * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04790148, SettingsProperty_set_Name__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962F50, app::Type *, get_PropertyType, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047676E8, SettingsProperty_get_PropertyType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962F80, void, set_PropertyType, (app::SettingsProperty * this_ptr, app::Type * value));
    IL2CPP_REGISTER_METHODINFO(0x04776238, SettingsProperty_set_PropertyType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962FB0, app::SettingsProvider *, get_Provider, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476EDF0, SettingsProperty_get_Provider__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02962FE0, void, set_Provider, (app::SettingsProperty * this_ptr, app::SettingsProvider * value));
    IL2CPP_REGISTER_METHODINFO(0x047537A8, SettingsProperty_set_Provider__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02963010, app::SettingsSerializeAs__Enum, get_SerializeAs, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04735918, SettingsProperty_get_SerializeAs__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02963040, void, set_SerializeAs, (app::SettingsProperty * this_ptr, app::SettingsSerializeAs__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x0473BB28, SettingsProperty_set_SerializeAs__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02963070, bool, get_ThrowOnErrorDeserializing, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04720808, SettingsProperty_get_ThrowOnErrorDeserializing__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x029630A0, void, set_ThrowOnErrorDeserializing, (app::SettingsProperty * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04717B18, SettingsProperty_set_ThrowOnErrorDeserializing__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x029630D0, bool, get_ThrowOnErrorSerializing, (app::SettingsProperty * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04726D48, SettingsProperty_get_ThrowOnErrorSerializing__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02963100, void, set_ThrowOnErrorSerializing, (app::SettingsProperty * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04715170, SettingsProperty_set_ThrowOnErrorSerializing__MethodInfo);
}
