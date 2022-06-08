#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingChangingEventArgs {
IL2CPP_REGISTER_METHOD(0x02962200, void, __ctor, (SettingChangingEventArgs * __this, String * settingName, String * settingClass, String * settingKey, Object * newValue, bool cancel));
IL2CPP_REGISTER_METHODINFO(0x04718510, SettingChangingEventArgs__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962230, Object *, get_NewValue, (SettingChangingEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D230, SettingChangingEventArgs_get_NewValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962260, String *, get_SettingClass, (SettingChangingEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04727F70, SettingChangingEventArgs_get_SettingClass__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962290, String *, get_SettingKey, (SettingChangingEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04761170, SettingChangingEventArgs_get_SettingKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029622C0, String *, get_SettingName, (SettingChangingEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04778410, SettingChangingEventArgs_get_SettingName__MethodInfo);
}
