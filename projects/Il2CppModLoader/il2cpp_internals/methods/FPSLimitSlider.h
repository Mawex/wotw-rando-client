using namespace app;

namespace app::methods::FPSLimitSlider {
IL2CPP_REGISTER_METHOD(0x00988D00, void, Awake, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00988E50, void, OnEnable, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00988F80, void, OnDisable, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00988FA0, float, get_Value, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00989020, void, set_Value, (FPSLimitSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x00989100, String *, GetValueToDisplay, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00989210, bool, IsFPSLimitOff, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009892A0, void, ApplyValueOnSliderReleased, (FPSLimitSlider * __this));
IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (FPSLimitSlider * __this));
}
