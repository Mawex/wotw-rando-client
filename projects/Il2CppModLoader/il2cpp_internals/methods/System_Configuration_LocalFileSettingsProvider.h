using namespace app;

namespace app::methods::System::Configuration::LocalFileSettingsProvider {
IL2CPP_REGISTER_METHOD(0x02961D20, void, __ctor, (LocalFileSettingsProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04722668, LocalFileSettingsProvider__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961D50, String *, get_ApplicationName, (LocalFileSettingsProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x047519E8, LocalFileSettingsProvider_get_ApplicationName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961D80, void, set_ApplicationName, (LocalFileSettingsProvider * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0471D318, LocalFileSettingsProvider_set_ApplicationName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961DB0, SettingsPropertyValue *, GetPreviousVersion, (LocalFileSettingsProvider * __this, SettingsContext * context, SettingsProperty * property));
IL2CPP_REGISTER_METHODINFO(0x0473A210, LocalFileSettingsProvider_GetPreviousVersion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961DE0, SettingsPropertyValueCollection *, GetPropertyValues, (LocalFileSettingsProvider * __this, SettingsContext * context, SettingsPropertyCollection * properties));
IL2CPP_REGISTER_METHODINFO(0x0470E570, LocalFileSettingsProvider_GetPropertyValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961E10, void, Initialize, (LocalFileSettingsProvider * __this, String * name, NameValueCollection * values));
IL2CPP_REGISTER_METHODINFO(0x0477EDC8, LocalFileSettingsProvider_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961E40, void, Reset, (LocalFileSettingsProvider * __this, SettingsContext * context));
IL2CPP_REGISTER_METHODINFO(0x0470D138, LocalFileSettingsProvider_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961E70, void, SetPropertyValues, (LocalFileSettingsProvider * __this, SettingsContext * context, SettingsPropertyValueCollection * values));
IL2CPP_REGISTER_METHODINFO(0x047462D0, LocalFileSettingsProvider_SetPropertyValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961EA0, void, Upgrade, (LocalFileSettingsProvider * __this, SettingsContext * context, SettingsPropertyCollection * properties));
IL2CPP_REGISTER_METHODINFO(0x04744A18, LocalFileSettingsProvider_Upgrade__MethodInfo);
}
