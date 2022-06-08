#include <interception_macros.h>

namespace app::methods::Core::Devices::XboxControllerManager {
IL2CPP_REGISTER_METHOD(0x011F8410, XboxControllerManager *, get_CurrentController, ());
IL2CPP_REGISTER_METHOD(0x011F8490, void, Vibrate, (XboxControllerManager * __this, Vector2 magnitude, float duration));
IL2CPP_REGISTER_METHOD(0x011F84C0, void, Awake, (XboxControllerManager * __this));
IL2CPP_REGISTER_METHOD(0x011F85F0, void, OnDestroy, (XboxControllerManager * __this));
IL2CPP_REGISTER_METHOD(0x011F8740, void, FixedUpdate, (XboxControllerManager * __this));
IL2CPP_REGISTER_METHOD(0x011F8910, void, OnApplicationQuit, (XboxControllerManager * __this));
IL2CPP_REGISTER_METHOD(0x011F8910, void, OnApplicationFocus, (XboxControllerManager * __this, bool focusStatus));
IL2CPP_REGISTER_METHOD(0x011F8920, void, ResetControllerVibration, ());
IL2CPP_REGISTER_METHOD(0x011F89C0, void, SetCurrentMotorVibration, (uint32_t controllerIndex, Vector2 magnitude));
IL2CPP_REGISTER_METHOD(0x011F8B20, void, __ctor, (XboxControllerManager * __this));
}
