#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::MaskErasingFixOffSlicesProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00DA2340, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::MaskErasingFixOffSlicesProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E130, bool, GetState, (app::MaskErasingFixOffSlicesProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E200, void, SetState, (app::MaskErasingFixOffSlicesProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MaskErasingFixOffSlicesProfilingSetting * this_ptr))
}
