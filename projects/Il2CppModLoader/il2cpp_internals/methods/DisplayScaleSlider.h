using namespace app;

namespace app::methods::DisplayScaleSlider {
IL2CPP_REGISTER_METHOD(0x00B99220, void, Awake, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99350, float, get_Value, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B994E0, void, set_Value, (DisplayScaleSlider * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B99730, void, UpdateValue, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99740, String *, GetValueToDisplay, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99850, void, ApplyScaleSettings, (DisplayScaleSlider * __this, float scaleValue));
IL2CPP_REGISTER_METHOD(0x00B99980, void, FixedUpdate, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99B50, void, OnDisable, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x00B99C30, void, __ctor, (DisplayScaleSlider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
