using namespace app;

namespace app::methods::MoonInput {
IL2CPP_REGISTER_METHOD(0x0145B130, bool, get_anyKeyDown, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0145B180, bool, get_anyKey, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0145B1D0, Vector3, get_mousePosition, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0145B250, float, GetAxis, (String * axisName));
IL2CPP_REGISTER_METHOD(0x0145B2A0, bool, GetMouseButton, (int32_t button));
IL2CPP_REGISTER_METHOD(0x0145B2F0, bool, GetButton, (String * buttonName));
IL2CPP_REGISTER_METHOD(0x0145B340, bool, GetButtonDown, (String * buttonName));
IL2CPP_REGISTER_METHOD(0x0145B390, bool, GetKey, (KeyCode__Enum keyCode));
IL2CPP_REGISTER_METHODINFO(0x04760B00, MoonInput_GetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0145B3E0, bool, GetKeyDown, (String * name));
IL2CPP_REGISTER_METHOD(0x0145B430, bool, GetKeyDown, (KeyCode__Enum keyCode));
IL2CPP_REGISTER_METHOD(0x0145B480, bool, GetKeyUp, (String * name));
IL2CPP_REGISTER_METHOD(0x0145B4D0, bool, GetKeyUp, (KeyCode__Enum keyCode));
IL2CPP_REGISTER_METHOD(0x0145B520, bool, GetMouseButtonUp, (int32_t button));
IL2CPP_REGISTER_METHOD(0x0145B570, bool, GetMouseButtonDown, (int32_t button));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonInput * __this));
}
