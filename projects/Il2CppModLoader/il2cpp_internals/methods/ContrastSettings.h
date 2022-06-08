#include <interception_macros.h>

namespace app::methods::ContrastSettings {
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DebugOverrideContrast, (ContrastSettings * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DebugOverrideContrast, (ContrastSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x011E7CC0, float, get_EffectiveContrast, (ContrastSettings * __this));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_DebugOverrideBrightness, (ContrastSettings * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_DebugOverrideBrightness, (ContrastSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x011E7D70, float, get_EffectiveBrightness, (ContrastSettings * __this));
IL2CPP_REGISTER_METHOD(0x011E7E20, ContrastSettings *, Clone, (ContrastSettings * __this));
IL2CPP_REGISTER_METHOD(0x011DA5B0, void, CopyFrom, (ContrastSettings * __this, ContrastSettings * settingsContrast));
IL2CPP_REGISTER_METHOD(0x00858E20, void, __ctor, (ContrastSettings * __this));
}
