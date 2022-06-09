#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::LowResolutionProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x006FD6F0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::LowResolutionProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3DB40, void, CacheDefault, (app::LowResolutionProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3DC30, bool, GetState, (app::LowResolutionProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3DD00, void, SetState, (app::LowResolutionProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LowResolutionProfilingSetting * this_ptr));
}
