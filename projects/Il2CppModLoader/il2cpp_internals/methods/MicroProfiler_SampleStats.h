using namespace app;

namespace app::methods::MicroProfiler_SampleStats {
IL2CPP_REGISTER_METHOD(0x002FA280, MicroProfiler_MetricStats__Array *, GetMetricStats, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, MicroProfiler_StatInfo__Array *, GetStats, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, MicroProfiler_MarkerInfo__Array *, GetMarkers, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, GetFrameId, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, SetFrameId, (MicroProfiler_SampleStats * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x01A92420, MicroProfiler_StatInfo, GetStat, (MicroProfiler_SampleStats * __this, Stat__Enum id));
IL2CPP_REGISTER_METHOD(0x03157190, void, SetStat, (MicroProfiler_SampleStats * __this, Stat__Enum id, float value));
IL2CPP_REGISTER_METHOD(0x031571D0, void, SetStat, (MicroProfiler_SampleStats * __this, Stat__Enum id, bool value));
IL2CPP_REGISTER_METHOD(0x03157230, void, SetStat, (MicroProfiler_SampleStats * __this, Stat__Enum id, int32_t value));
IL2CPP_REGISTER_METHOD(0x03157280, void, SetMetric, (MicroProfiler_SampleStats * __this, Metric__Enum id, int64_t nsInvoked, uint32_t invokedCount));
IL2CPP_REGISTER_METHOD(0x031572E0, void, SetMetricValue, (MicroProfiler_SampleStats * __this, Metric__Enum id, int64_t nsInvoked, uint32_t invokedCount));
IL2CPP_REGISTER_METHOD(0x03157340, void, ContinueMarker, (MicroProfiler_SampleStats * __this, Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03157380, void, BeginMarker, (MicroProfiler_SampleStats * __this, Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x031573C0, void, EndMarker, (MicroProfiler_SampleStats * __this, Marker__Enum id));
IL2CPP_REGISTER_METHOD(0x03157400, void, BeginMetric, (MicroProfiler_SampleStats * __this, Metric__Enum id));
IL2CPP_REGISTER_METHOD(0x03157440, void, EndMetric, (MicroProfiler_SampleStats * __this, Metric__Enum id, int64_t ns));
IL2CPP_REGISTER_METHOD(0x031574A0, MicroProfiler_MetricStats, GetMetric, (MicroProfiler_SampleStats * __this, Metric__Enum id));
IL2CPP_REGISTER_METHOD(0x031574F0, void, Clear, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x031575E0, void, CopyFrom, (MicroProfiler_SampleStats * __this, MicroProfiler_SampleStats * source));
IL2CPP_REGISTER_METHOD(0x03157770, void, AppendData, (MicroProfiler_SampleStats * __this, MicroProfiler_SampleStats * source));
IL2CPP_REGISTER_METHOD(0x03157820, void, Validate, (MicroProfiler_SampleStats * __this));
IL2CPP_REGISTER_METHOD(0x031578B0, void, __ctor, (MicroProfiler_SampleStats * __this));
}
