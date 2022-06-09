#include <interception_macros.h>

namespace app::methods::Moon_Telemetry_Performance_Settings::ScarlettPerformanceMode {
    IL2CPP_REGISTER_METHOD(0x00E3F3E0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ScarlettPerformanceMode * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3F3F0, bool, GetState, (app::ScarlettPerformanceMode * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3F490, void, SetState, (app::ScarlettPerformanceMode * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ScarlettPerformanceMode * this_ptr));
}
