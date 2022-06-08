#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::NonSerializedFloatUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (NonSerializedFloatUberStateWrapper * __this, FloatUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (NonSerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (NonSerializedFloatUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0199A7C0, float, GetValue, (NonSerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199A7E0, void, HandleInput, (NonSerializedFloatUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x0199A870, void, OnGui, (NonSerializedFloatUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199AAB0, void, SetValue, (NonSerializedFloatUberStateWrapper * __this, float value));
}
