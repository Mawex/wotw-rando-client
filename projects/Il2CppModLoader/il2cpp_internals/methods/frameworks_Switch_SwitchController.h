using namespace app;

namespace app::methods::frameworks::Switch::SwitchController {
IL2CPP_REGISTER_METHOD(0x00417870, bool, Vibrate, (float left, float right, float leftTrigger, float rightTrigger, float duration));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetControllerVibration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadVibrationData, (SwitchController * __this));
IL2CPP_REGISTER_METHOD(0x00F5B020, void, LoadVibrationJson, (SwitchController * __this));
IL2CPP_REGISTER_METHOD(0x00F5B100, void, LoadVibrationBinary, (SwitchController * __this));
IL2CPP_REGISTER_METHOD(0x00F5B490, void, Vibrate, (uint32_t id, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00F5B550, void, Vibrate, (uint32_t id, Vector3 position, bool force));
IL2CPP_REGISTER_METHOD(0x00F5B710, void, Vibrate, (uint32_t id, Vector3 position, float volume, bool force));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeControllers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F5B850, void, Update, (SwitchController * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DoUpdate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowApplet, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetButton, (Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetAxis, (Axis__Enum_1 axis));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SwitchController * __this));
IL2CPP_REGISTER_METHOD(0x00F5B8E0, void, __cctor, (MethodInfo * method));
}
