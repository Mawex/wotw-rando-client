#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::TimesliceEOFProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40410, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TimesliceEOFProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E40420, bool, GetState, (app::TimesliceEOFProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E404C0, void, SetState, (app::TimesliceEOFProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TimesliceEOFProfilingSetting * this_ptr));
}
