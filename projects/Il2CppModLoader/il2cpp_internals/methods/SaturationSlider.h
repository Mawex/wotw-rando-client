#include <interception_macros.h>

namespace app::methods::SaturationSlider {
IL2CPP_REGISTER_METHOD(0x00C2ACC0, float, get_Value, (SaturationSlider * __this));
IL2CPP_REGISTER_METHOD(0x00C2AD70, void, set_Value, (SaturationSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C2AE60, String *, GetValueToDisplay, (SaturationSlider * __this));
IL2CPP_REGISTER_METHOD(0x00444040, void, __ctor, (SaturationSlider * __this));
}
