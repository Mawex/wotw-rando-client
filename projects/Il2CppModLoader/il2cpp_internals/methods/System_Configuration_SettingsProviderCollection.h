#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsProviderCollection {
IL2CPP_REGISTER_METHOD(0x01FFE110, void, __ctor, (SettingsProviderCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E830, SettingsProviderCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE140, SettingsProvider *, get_Item, (SettingsProviderCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04746BD8, SettingsProviderCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE170, void, Add, (SettingsProviderCollection * __this, ProviderBase * provider));
IL2CPP_REGISTER_METHODINFO(0x0472FE40, SettingsProviderCollection_Add__MethodInfo);
}
