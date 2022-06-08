using namespace app;

namespace app::methods::TimesliceDebugger {
IL2CPP_REGISTER_METHOD(0x00AF2610, GUIStyle *, get_LabelStyle, (TimesliceDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00AF2980, TimesliceDebugger *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF2A00, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF2AB0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00AF2C50, void, EnsureImgui, (TimesliceDebugger * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00AF2D40, void, Awake, (TimesliceDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00AF2DF0, void, OnDestroy, (TimesliceDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00AF2EA0, void, Update, (TimesliceDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00AF34B0, void, OnGUI, (TimesliceDebugger * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TimesliceDebugger * __this));
}
