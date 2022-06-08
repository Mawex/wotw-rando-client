#include <interception_macros.h>

namespace app::methods::ContrastVolumeSlider {
IL2CPP_REGISTER_METHOD(0x011E7F70, float, get_Value, (ContrastVolumeSlider * __this));
IL2CPP_REGISTER_METHOD(0x011E8020, void, set_Value, (ContrastVolumeSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x011E8100, String *, GetValueToDisplay, (ContrastVolumeSlider * __this));
IL2CPP_REGISTER_METHOD(0x00444040, void, __ctor, (ContrastVolumeSlider * __this));
}
