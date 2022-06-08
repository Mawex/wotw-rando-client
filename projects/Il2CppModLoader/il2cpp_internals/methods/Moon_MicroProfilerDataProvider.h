#include <interception_macros.h>

namespace app::methods::Moon::MicroProfilerDataProvider {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsGraph, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsInspector, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x031585D0, int32_t, get_HistorySize, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x031585E0, int32_t, get_NumMetrics, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_NumMarkers, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMarkers, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x031585F0, int32_t, get_CurrentFrameIndex, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x03158680, int32_t, get_LastCompletedFrameID, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x03158720, List_1_Moon_Profile_Metric_ *, get_SupportedMetrics, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x03158990, bool, get_IsPaused, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x03158AB0, double, GetMetricValueInMS, (MicroProfilerDataProvider * __this, Metric__Enum metric, int32_t frame));
IL2CPP_REGISTER_METHOD(0x03158B60, double, GetLastCompletedMetricValueInMS, (MicroProfilerDataProvider * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x03158CE0, void, AddPreEndFrameHandler, (MicroProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x03158DD0, void, AddPostBeginFrameHandler, (MicroProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x03158EC0, void, RemovePreEndFrameHandler, (MicroProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x03158F60, void, RemovePostBeginFrameHandler, (MicroProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x03159000, double, GetAverageMetricTimeInMSInFrameRange, (MicroProfilerDataProvider * __this, Metric__Enum metric, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x031590C0, double, GetPeakMetricTimeInMSInFrameRange, (MicroProfilerDataProvider * __this, Metric__Enum metric, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MicroProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
