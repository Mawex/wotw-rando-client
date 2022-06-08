using namespace app;

namespace app::methods::MainThreadLoadingDebugger {
IL2CPP_REGISTER_METHOD(0x009F4FF0, GUIStyle *, get_LabelStyle, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F5360, MainThreadLoadingDebugger *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009F53E0, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009F5490, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x009F5630, void, EnsureImgui, (MainThreadLoadingDebugger * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x009F5720, void, Awake, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F5720, void, OnDestroy, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F5730, void, OnEnable, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F5790, void, OnDisable, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F5830, void, Update, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHODINFO(0x04739330, MainThreadLoadingDebugger_Update__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F5D30, void, OnGUI, (MainThreadLoadingDebugger * __this));
IL2CPP_REGISTER_METHOD(0x009F6010, void, __ctor, (MainThreadLoadingDebugger * __this));
}
