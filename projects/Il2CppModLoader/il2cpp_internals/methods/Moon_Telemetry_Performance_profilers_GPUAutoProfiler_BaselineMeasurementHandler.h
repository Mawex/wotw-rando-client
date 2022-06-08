using namespace app;

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_BaselineMeasurementHandler {
IL2CPP_REGISTER_METHOD(0x00E43A40, void, EnterState, (GPUAutoProfiler_BaselineMeasurementHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E43DC0, void, ExitState, (GPUAutoProfiler_BaselineMeasurementHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E44210, void, UpdateState, (GPUAutoProfiler_BaselineMeasurementHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E44480, void, SetupState, (GPUAutoProfiler_BaselineMeasurementHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E44590, void, AddToReport, (GPUAutoProfiler_BaselineMeasurementHandler * __this, GPUAutoProfilerReport * report, Dictionary_2_Moon_Profile_Metric_System_Single__1 * data));
IL2CPP_REGISTER_METHOD(0x00E446F0, bool, get_CanExit, (GPUAutoProfiler_BaselineMeasurementHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E44790, String *, get_DebugString, (GPUAutoProfiler_BaselineMeasurementHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E44870, void, __ctor, (GPUAutoProfiler_BaselineMeasurementHandler * __this));
}
