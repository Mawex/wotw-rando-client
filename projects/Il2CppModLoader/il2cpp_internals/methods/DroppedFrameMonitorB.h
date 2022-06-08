#include <interception_macros.h>

namespace app::methods::DroppedFrameMonitorB {
IL2CPP_REGISTER_METHOD(0x00BE75F0, void, __ctor, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x00BE7940, void, UpdateHealth, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x00BE7970, void, AddFrame, (DroppedFrameMonitorB * __this, float frameTime, float cpuTime, float gpuTime, float noDropsTime));
IL2CPP_REGISTER_METHOD(0x00BE7DA0, void, Update, (DroppedFrameMonitorB * __this, float frameTime, float cpuTime, float gpuTime));
IL2CPP_REGISTER_METHOD(0x00BE7FA0, void, DumpTempData, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x00BE83A0, void, SwapAndReset, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x00BE83F0, void, Swap, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x00BE8430, void, Reset, (DroppedFrameMonitorB * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
