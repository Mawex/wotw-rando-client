#include <interception_macros.h>

namespace app::methods::MotionBlurSlider {
IL2CPP_REGISTER_METHOD(0x00867500, void, Awake, (MotionBlurSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867580, float, get_Value, (MotionBlurSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867630, void, set_Value, (MotionBlurSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x008677A0, String *, GetValueToDisplay, (MotionBlurSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (MotionBlurSlider * __this));
}
