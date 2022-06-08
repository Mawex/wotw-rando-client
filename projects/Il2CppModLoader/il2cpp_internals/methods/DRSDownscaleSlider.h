#include <interception_macros.h>

namespace app::methods::DRSDownscaleSlider {
IL2CPP_REGISTER_METHOD(0x00DBFC40, void, Awake, (DRSDownscaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00DBFCA0, float, get_Value, (DRSDownscaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00DBFDB0, void, set_Value, (DRSDownscaleSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x00DBFED0, String *, GetValueToDisplay, (DRSDownscaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (DRSDownscaleSlider * __this));
}
