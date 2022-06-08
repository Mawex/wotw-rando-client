#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsPropertyValue {
IL2CPP_REGISTER_METHOD(0x01FFDB70, void, __ctor, (SettingsPropertyValue * __this, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x0474B6E8, SettingsPropertyValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDBA0, bool, get_Deserialized, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x047793E8, SettingsPropertyValue_get_Deserialized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDBD0, void, set_Deserialized, (SettingsPropertyValue * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0476D2D0, SettingsPropertyValue_set_Deserialized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDC00, bool, get_IsDirty, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x04750800, SettingsPropertyValue_get_IsDirty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDC30, void, set_IsDirty, (SettingsPropertyValue * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x047724A8, SettingsPropertyValue_set_IsDirty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDC60, String *, get_Name, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x047533D0, SettingsPropertyValue_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDC90, SettingsProperty *, get_Property, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x04740738, SettingsPropertyValue_get_Property__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDCC0, Object *, get_PropertyValue, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x047093E0, SettingsPropertyValue_get_PropertyValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDCF0, void, set_PropertyValue, (SettingsPropertyValue * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04746528, SettingsPropertyValue_set_PropertyValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDD20, Object *, get_SerializedValue, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x04722258, SettingsPropertyValue_get_SerializedValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDD50, void, set_SerializedValue, (SettingsPropertyValue * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473F2B8, SettingsPropertyValue_set_SerializedValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFDD80, bool, get_UsingDefaultValue, (SettingsPropertyValue * __this));
IL2CPP_REGISTER_METHODINFO(0x04791540, SettingsPropertyValue_get_UsingDefaultValue__MethodInfo);
}
