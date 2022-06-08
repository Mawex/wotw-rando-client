using namespace app;

namespace app::methods::Moon::UberStateVisualization::NonSerializedIntUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (NonSerializedIntUberStateWrapper * __this, IntUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (NonSerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (NonSerializedIntUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0199AB70, int32_t, GetValue, (NonSerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199AB90, void, HandleInput, (NonSerializedIntUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x0199AC00, void, OnGui, (NonSerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199AE30, void, SetValue, (NonSerializedIntUberStateWrapper * __this, int32_t value));
}
