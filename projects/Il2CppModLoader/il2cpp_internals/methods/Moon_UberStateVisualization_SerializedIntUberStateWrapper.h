#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::SerializedIntUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SerializedIntUberStateWrapper * __this, ISerializedUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (SerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (SerializedIntUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030BE9C0, int32_t, GetValue, (SerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x030BE9F0, void, HandleInput, (SerializedIntUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030BEA70, void, OnGui, (SerializedIntUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x030BECB0, void, SetValue, (SerializedIntUberStateWrapper * __this, int32_t value));
}
