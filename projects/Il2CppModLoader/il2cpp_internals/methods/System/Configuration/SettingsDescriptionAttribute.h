#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SettingsDescriptionAttribute * this_ptr, app::String * description));
    IL2CPP_REGISTER_METHOD(0x02962B90, app::String *, get_Description, (app::SettingsDescriptionAttribute * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04746320, SettingsDescriptionAttribute_get_Description__MethodInfo);
}
