#include <interception_macros.h>

namespace app::methods::MicroProfiler {
IL2CPP_REGISTER_METHOD(0x03154B90, bool, get_IsPaused, ());
IL2CPP_REGISTER_METHOD(0x03154C30, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, ());
IL2CPP_REGISTER_METHOD(0x03154F50, void, BeginMarker, (Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03155030, void, EndMarker, (Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03155110, void, SetStat, (Stat__Enum id, float value));
IL2CPP_REGISTER_METHOD(0x03155200, void, SetStat, (Stat__Enum id, bool value));
IL2CPP_REGISTER_METHOD(0x03155300, void, SetStat, (Stat__Enum id, int32_t value));
IL2CPP_REGISTER_METHOD(0x03155400, void, BeginMetric, (Metric__Enum id));
IL2CPP_REGISTER_METHOD(0x03155560, void, SetMetric, (Metric__Enum id, int64_t nsInvoked, uint32_t invokeCount));
IL2CPP_REGISTER_METHOD(0x03155670, void, SetMetricValue, (Metric__Enum id, int64_t nsInvoked, uint32_t invokeCount));
IL2CPP_REGISTER_METHOD(0x03155780, void, EndMetric, (Metric__Enum id));
IL2CPP_REGISTER_METHOD(0x031558E0, void, EndMetric, (Metric__Enum id, int64_t * spentNs));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFrame, ());
IL2CPP_REGISTER_METHOD(0x03155A50, float, PresentationFormOfNativeStat, (Stat__Enum stat, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndFrame, ());
IL2CPP_REGISTER_METHOD(0x03155A80, void, ContinueMarkers, (MicroProfiler_SampleStats * lastFrame, MicroProfiler_SampleStats * currentFrame));
IL2CPP_REGISTER_METHOD(0x03155B50, void, BeginSample, ());
IL2CPP_REGISTER_METHOD(0x03155D60, void, EndSample, ());
IL2CPP_REGISTER_METHOD(0x03155E20, MicroProfiler_SampleStats *, GetCurrentFrameStats, ());
IL2CPP_REGISTER_METHOD(0x03155EC0, MicroProfiler_SampleStats *, GetLastCompletedFrameStats, ());
IL2CPP_REGISTER_METHOD(0x03155F60, int32_t, GetCurrentFrameIndex, ());
IL2CPP_REGISTER_METHOD(0x03156000, int32_t, GetCurrentUniqueFrameIndex, ());
IL2CPP_REGISTER_METHOD(0x031560A0, MicroProfiler_SampleStats *, GetFrameStats, (int32_t frameNumber));
IL2CPP_REGISTER_METHOD(0x031561F0, MicroProfiler_SampleStats *, GetSampleStats, ());
IL2CPP_REGISTER_METHOD(0x03156290, MicroProfiler_SampleStats__Array * *, GetFrames, ());
IL2CPP_REGISTER_METHOD(0x03156330, void, ToggleMarker, (Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03156490, MicroProfiler_MarkerInfo, GetMarkerAtFrame, (Marker__Enum id, int32_t frame));
IL2CPP_REGISTER_METHOD(0x03156570, MicroProfiler_MarkerInfo, GetLastCompletedMarker, (Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03156640, MicroProfiler_StatInfo, GetStatAtFrame, (Stat__Enum id, int32_t frame));
IL2CPP_REGISTER_METHOD(0x03156720, MicroProfiler_StatInfo, GetLastCompletedStat, (Stat__Enum id));
IL2CPP_REGISTER_METHOD(0x031567F0, double, GetLastCompletedMetricTimeInMS, (Metric__Enum m));
IL2CPP_REGISTER_METHOD(0x031568E0, double, GetMetricTimeInMS, (Metric__Enum m, int32_t frameIndex));
IL2CPP_REGISTER_METHOD(0x031569E0, uint32_t, GetMetricInvokationCount, (Metric__Enum m, int32_t frameIndex));
IL2CPP_REGISTER_METHOD(0x03156AD0, void, SetPauseHistory, (bool paused));
IL2CPP_REGISTER_METHOD(0x03156B80, double, GetAverageMetricTimeInMSInFrameRange, (Metric__Enum m, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x03156CD0, float, GetMaximumMetricTimeInMSInFrameRange, (Metric__Enum m, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MicroProfiler * __this));
}
