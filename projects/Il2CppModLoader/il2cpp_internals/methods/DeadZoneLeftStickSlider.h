#include <interception_macros.h>

namespace app::methods::DeadZoneLeftStickSlider {
IL2CPP_REGISTER_METHOD(0x00DDC490, float, get_Value, (DeadZoneLeftStickSlider * __this));
IL2CPP_REGISTER_METHOD(0x00DDC540, void, set_Value, (DeadZoneLeftStickSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x00DDC660, String *, GetValueToDisplay, (DeadZoneLeftStickSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (DeadZoneLeftStickSlider * __this));
}
