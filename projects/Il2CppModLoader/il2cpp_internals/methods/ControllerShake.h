#include <interception_macros.h>

namespace app::methods::ControllerShake {
IL2CPP_REGISTER_METHOD(0x00B1C480, void, OnPoolSpawned, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F1870, float, get_CurrentShake, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F1960, bool, get_IsLooping, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x00A791C0, bool, get_ControllerShakeActive, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C9C0, void, SampleValue, (ControllerShake * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x011F19E0, float, get_Duration, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x00A3CF90, void, PerformTheShake, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F1AE0, void, Start, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F1B40, float, get_ModifiedStrength, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F2090, void, OnEnable, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x011F2170, void, OnDisable, (ControllerShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1D310, void, __ctor, (ControllerShake * __this));
}
