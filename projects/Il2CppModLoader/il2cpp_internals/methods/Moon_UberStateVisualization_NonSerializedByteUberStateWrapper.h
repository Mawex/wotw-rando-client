using namespace app;

namespace app::methods::Moon::UberStateVisualization::NonSerializedByteUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (NonSerializedByteUberStateWrapper * __this, ByteUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (NonSerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (NonSerializedByteUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0199A400, uint8_t, GetValue, (NonSerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (NonSerializedByteUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x0199A420, void, OnGui, (NonSerializedByteUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199A700, void, SetValue, (NonSerializedByteUberStateWrapper * __this, uint8_t value));
}
