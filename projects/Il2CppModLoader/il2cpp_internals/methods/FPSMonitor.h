#include <interception_macros.h>

namespace app::methods::FPSMonitor {
IL2CPP_REGISTER_METHOD(0x004994E0, float, get_FrameTime, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989390, float, get_FrameTimeMilliseconds, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_RenderedFrames, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x009893A0, void, CreateInstance, ());
IL2CPP_REGISTER_METHOD(0x002FB990, DroppedFrameMonitor *, get_DroppedFrameMonitor, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989540, void, Awake, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989840, void, Start, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989850, void, Update, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989B60, void, Reset, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_HitchCount, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_SlowdownCount, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989C00, int32_t, get_Health, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989C40, FPSMonitor_FrameTimingData *, GetFrameAtIndex, (FPSMonitor * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00989C80, FPSMonitor_FrameTimingData *, GetFrameAtOffset, (FPSMonitor * __this, int32_t offset));
IL2CPP_REGISTER_METHOD(0x00989CF0, FPSMonitor_FrameTimingData *, get_CurrentFrame, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989D60, int32_t, get_HistoryLength, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00989D70, int32_t, GetFrameIndexAtOffset, (FPSMonitor * __this, int32_t offset));
IL2CPP_REGISTER_METHOD(0x00989DA0, void, FPSMonitorUpdate, (FPSMonitor * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0098A0E0, float, CalculateNewAverageTime, (FPSMonitor * __this, int32_t frameCountForAverage, float previousAverage, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0098A170, void, DumpData, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x0098A350, Color, GetColorForGPUHealth, (int32_t health));
IL2CPP_REGISTER_METHOD(0x0098A540, int32_t, GetGPUHealth, (int32_t drsScale, float gpuTime));
IL2CPP_REGISTER_METHOD(0x0098A8C0, void, __ctor, (FPSMonitor * __this));
IL2CPP_REGISTER_METHOD(0x0098A980, void, __cctor, ());
}
