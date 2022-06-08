using namespace app;

namespace app::methods::Core::Input_InputButtonProcessor {
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ForcePressedFrames, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ForcePressedFrames, (Input_InputButtonProcessor * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x011FE830, void, Update, (Input_InputButtonProcessor * __this, bool isPressed));
IL2CPP_REGISTER_METHOD(0x011FE860, bool, get_OnPressed, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011FE880, bool, get_OnPressedNotUsed, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011FE8A0, bool, get_OnReleased, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_Pressed, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011FE8B0, bool, get_PressedNotUsed, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011FE8D0, bool, get_Released, (Input_InputButtonProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Input_InputButtonProcessor * __this));
}
