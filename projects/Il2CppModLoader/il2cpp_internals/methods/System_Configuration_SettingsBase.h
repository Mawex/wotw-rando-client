#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsBase {
IL2CPP_REGISTER_METHOD(0x02962950, void, __ctor, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FE60, SettingsBase__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962980, SettingsContext *, get_Context, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x047806F0, SettingsBase_get_Context__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029629B0, bool, get_IsSynchronized, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x047773C0, SettingsBase_get_IsSynchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029629E0, Object *, get_Item, (SettingsBase * __this, String * propertyName));
IL2CPP_REGISTER_METHODINFO(0x04711A70, SettingsBase_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962A10, void, set_Item, (SettingsBase * __this, String * propertyName, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04754318, SettingsBase_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962A40, SettingsPropertyCollection *, get_Properties, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04771900, SettingsBase_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962A70, SettingsPropertyValueCollection *, get_PropertyValues, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04701848, SettingsBase_get_PropertyValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962AA0, SettingsProviderCollection *, get_Providers, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D7F0, SettingsBase_get_Providers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962AD0, void, Initialize, (SettingsBase * __this, SettingsContext * context, SettingsPropertyCollection * properties, SettingsProviderCollection * providers));
IL2CPP_REGISTER_METHODINFO(0x04763630, SettingsBase_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962B00, void, Save, (SettingsBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A078, SettingsBase_Save__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962B30, SettingsBase *, Synchronized, (SettingsBase * settingsBase));
IL2CPP_REGISTER_METHODINFO(0x0474EE20, SettingsBase_Synchronized__MethodInfo);
}
