#include <interception_macros.h>

namespace app::methods::Moon::NanoProfilerDataProvider {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsGraph, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsInspector, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2F960, int32_t, get_HistorySize, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2F970, int32_t, get_NumMetrics, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_NumMarkers, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMarkers, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2FA20, int32_t, get_CurrentFrameIndex, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2FB20, int32_t, get_LastCompletedFrameID, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2FC20, bool, get_IsPaused, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2FD70, List_1_Moon_Profile_Metric_ *, get_SupportedMetrics, (NanoProfilerDataProvider * __this));
IL2CPP_REGISTER_METHOD(0x00C2FE10, double, GetMetricValueInMS, (NanoProfilerDataProvider * __this, Metric__Enum metric, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00C2FF80, double, GetLastCompletedMetricValueInMS, (NanoProfilerDataProvider * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x00C30100, void, AddPreEndFrameHandler, (NanoProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00C30240, void, AddPostBeginFrameHandler, (NanoProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00C30380, void, RemovePreEndFrameHandler, (NanoProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00C30490, void, RemovePostBeginFrameHandler, (NanoProfilerDataProvider * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00C305A0, double, GetAverageMetricTimeInMSInFrameRange, (NanoProfilerDataProvider * __this, Metric__Enum metric, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x00C30810, double, GetPeakMetricTimeInMSInFrameRange, (NanoProfilerDataProvider * __this, Metric__Enum metric, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NanoProfilerDataProvider * __this));
}
