using namespace app;

namespace app::methods::FramePerformanceMonitor {
IL2CPP_REGISTER_METHOD(0x016409B0, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01640A60, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x01640CF0, void, BeginSample, (String * label));
IL2CPP_REGISTER_METHOD(0x01640FB0, void, EndSample, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01641110, void, Awake, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x016411C0, void, OnEnable, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x016413A0, void, OnDestroy, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x016414F0, void, Update, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x01641930, void, Flush, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x01641D80, void, CloseWriter, (FramePerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x01641E20, void, __ctor, (FramePerformanceMonitor * __this));
}
