#include <interception_macros.h>

namespace app::methods::Moon_Telemetry_Performance_Settings::PostProcessingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3EE40, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::PostProcessingProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3EE50, app::RenderScope__Enum *, GetScope, (app::PostProcessingProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::PostProcessingProfilingSetting * this_ptr));
}
