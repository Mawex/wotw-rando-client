#include <interception_macros.h>

namespace app::methods::Moon_Telemetry_Performance_Settings::TakeScreenshotsDuringDynamicTestProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00C754B0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TakeScreenshotsDuringDynamicTestProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E40000, bool, GetState, (app::TakeScreenshotsDuringDynamicTestProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E400A0, void, SetState, (app::TakeScreenshotsDuringDynamicTestProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TakeScreenshotsDuringDynamicTestProfilingSetting * this_ptr));
}
