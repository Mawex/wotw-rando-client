using namespace app;

namespace app::methods::XboxOneController {
IL2CPP_REGISTER_METHOD(0x005977E0, Action *, get_OnLastControllerDisconnect, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597860, void, set_OnLastControllerDisconnect, (Action * value));
IL2CPP_REGISTER_METHOD(0x005978F0, Action *, get_OnActiveControllerDisconnect, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597970, void, set_OnActiveControllerDisconnect, (Action * value));
IL2CPP_REGISTER_METHOD(0x00597A00, Action_1_Int32_ *, get_OnWillSwitchController, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597A80, void, set_OnWillSwitchController, (Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetGamepadPressingStart, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597B20, bool, RequireGamepad, (Action * success));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGamepads, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_ActiveGamepad, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_ActiveGamepad, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00420EE0, uint64_t, get_ActiveController, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoSwitchController, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_AutoSwitchController, (bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetCurrentGamepad, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, MakeFirstGamepadCurrent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, Vibrate, (float left, float right, float leftTrigger, float rightTrigger, float duration));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ResetControllerVibration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetAxis, (XboxOneController_Axis__Enum axis));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (XboxOneController * __this));
}
