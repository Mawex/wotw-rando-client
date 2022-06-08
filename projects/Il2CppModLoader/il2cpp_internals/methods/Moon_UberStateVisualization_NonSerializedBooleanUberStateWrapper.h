#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::NonSerializedBooleanUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x01999FC0, void, __ctor, (NonSerializedBooleanUberStateWrapper * __this, BooleanUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsActive, (NonSerializedBooleanUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsActive, (NonSerializedBooleanUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0199A010, bool, GetValue, (NonSerializedBooleanUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199A030, void, HandleInput, (NonSerializedBooleanUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x0199A090, void, OnGui, (NonSerializedBooleanUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199A340, void, SetValue, (NonSerializedBooleanUberStateWrapper * __this, bool value));
}
