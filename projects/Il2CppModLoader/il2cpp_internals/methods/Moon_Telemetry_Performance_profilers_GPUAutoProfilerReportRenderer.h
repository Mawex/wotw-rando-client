using namespace app;

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUAutoProfilerReportRenderer {
IL2CPP_REGISTER_METHOD(0x00E46F40, void, CreateLineMaterial, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E470E0, bool, get_IsVisible, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E471B0, void, Show, (GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E47440, void, Hide, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E47570, float, GetAverage, (GPUAutoProfilerReportRenderer * __this, Single__Array * samples));
IL2CPP_REGISTER_METHOD(0x00E475D0, void, Initialize, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E47820, void, OnEnable, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E47B40, void, OnDisable, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E47E50, void, Update, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E47F30, void, Draw, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHODINFO(0x047551C0, GPUAutoProfilerReportRenderer_Draw__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E481E0, void, DrawLineBackdrop, (GPUAutoProfilerReportRenderer * __this, int32_t y));
IL2CPP_REGISTER_METHOD(0x00E48380, void, DrawInternal, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E490F0, void, DrawBaselineReport, (GPUAutoProfilerReportRenderer * __this, GPUAutoProfilerReport_ReportBaselineData * data, int32_t startX, int32_t startY, int32_t metricStartX, String * name));
IL2CPP_REGISTER_METHOD(0x00E49390, int32_t, DrawString, (GPUAutoProfilerReportRenderer * __this, Color color, Color backgroundColor, String * stringValue, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00E3EE80, int32_t, FloatWidth, (GPUAutoProfilerReportRenderer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E494D0, int32_t, DrawFloat, (GPUAutoProfilerReportRenderer * __this, Color color, Color backgroundColor, float floatValue, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00E495F0, void, SuspendGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E49680, void, ResumeGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E49710, void, __ctor, (GPUAutoProfilerReportRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00E49800, void, __cctor, (MethodInfo * method));
}
