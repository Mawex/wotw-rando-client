#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::DistortionProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DistortionProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3BA40, bool, GetState, (app::DistortionProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3BB00, void, SetState, (app::DistortionProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DistortionProfilingSetting * this_ptr));
}
