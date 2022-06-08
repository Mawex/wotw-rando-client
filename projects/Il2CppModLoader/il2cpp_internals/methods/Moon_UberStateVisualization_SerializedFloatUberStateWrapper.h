using namespace app;

namespace app::methods::Moon::UberStateVisualization::SerializedFloatUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SerializedFloatUberStateWrapper * __this, ISerializedUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (SerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (SerializedFloatUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030BE610, float, GetValue, (SerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x030BE640, void, HandleInput, (SerializedFloatUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030BE6C0, void, OnGui, (SerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x030BE900, void, SetValue, (SerializedFloatUberStateWrapper * __this, float value));
}
