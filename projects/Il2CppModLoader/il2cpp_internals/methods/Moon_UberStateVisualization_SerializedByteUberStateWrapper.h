using namespace app;

namespace app::methods::Moon::UberStateVisualization::SerializedByteUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SerializedByteUberStateWrapper * __this, ISerializedUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (SerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (SerializedByteUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030BE250, uint8_t, GetValue, (SerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (SerializedByteUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030BE280, void, OnGui, (SerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x030BE550, void, SetValue, (SerializedByteUberStateWrapper * __this, uint8_t value));
}
