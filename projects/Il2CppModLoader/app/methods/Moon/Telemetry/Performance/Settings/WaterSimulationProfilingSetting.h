#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::WaterSimulationProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40D50, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::WaterSimulationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40D60, bool, GetState, (app::WaterSimulationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40E30, void, SetState, (app::WaterSimulationProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WaterSimulationProfilingSetting * this_ptr))
}
