#include <interception_macros.h>

namespace app::methods::HDRUIBrightnessSlider {
IL2CPP_REGISTER_METHOD(0x0109BEC0, void, Awake, (HDRUIBrightnessSlider * __this));
IL2CPP_REGISTER_METHOD(0x0109BFB0, float, get_Value, (HDRUIBrightnessSlider * __this));
IL2CPP_REGISTER_METHOD(0x0109C060, void, set_Value, (HDRUIBrightnessSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x0109C150, String *, GetValueToDisplay, (HDRUIBrightnessSlider * __this));
IL2CPP_REGISTER_METHOD(0x0109C240, void, OnBackgroundEnabled, (HDRUIBrightnessSlider * __this));
IL2CPP_REGISTER_METHOD(0x0109C2F0, void, OnBackgroundDisabled, (HDRUIBrightnessSlider * __this));
IL2CPP_REGISTER_METHOD(0x00444040, void, __ctor, (HDRUIBrightnessSlider * __this));
}
