#include <interception_macros.h>

namespace app::methods::System_Configuration::SettingsLoadedEventArgs {
IL2CPP_REGISTER_METHOD(0x02962C20, void, __ctor, (app::SettingsLoadedEventArgs * this_ptr, app::SettingsProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04715AF8, SettingsLoadedEventArgs__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962C50, SettingsProvider *, get_Provider, (app::SettingsLoadedEventArgs * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04794B38, SettingsLoadedEventArgs_get_Provider__MethodInfo);
}
