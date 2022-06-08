#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::SerializedBoolUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x01999FC0, void, __ctor, (SerializedBoolUberStateWrapper * __this, ISerializedUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsActive, (SerializedBoolUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsActive, (SerializedBoolUberStateWrapper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0199B1B0, bool, GetValue, (SerializedBoolUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199B1E0, void, HandleInput, (SerializedBoolUberStateWrapper * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x0199B240, void, OnGui, (SerializedBoolUberStateWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0199B4F0, void, SetValue, (SerializedBoolUberStateWrapper * __this, bool value));
}
