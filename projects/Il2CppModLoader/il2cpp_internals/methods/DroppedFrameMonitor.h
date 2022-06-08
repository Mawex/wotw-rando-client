using namespace app;

namespace app::methods::DroppedFrameMonitor {
IL2CPP_REGISTER_METHOD(0x00BE6930, void, __ctor, (DroppedFrameMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BE6C80, void, Update, (DroppedFrameMonitor * __this, float frameTime));
IL2CPP_REGISTER_METHOD(0x00BE7190, void, DumpTempData, (DroppedFrameMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BE7590, void, SwapAndReset, (DroppedFrameMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BE75C0, void, Swap, (DroppedFrameMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BE75E0, void, Reset, (DroppedFrameMonitor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
