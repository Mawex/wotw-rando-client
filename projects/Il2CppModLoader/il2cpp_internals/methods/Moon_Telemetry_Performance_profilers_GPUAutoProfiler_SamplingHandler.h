#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_SamplingHandler {
IL2CPP_REGISTER_METHOD(0x00E464D0, void, __ctor, (GPUAutoProfiler_SamplingHandler * __this, List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * samples));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterState, (GPUAutoProfiler_SamplingHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E464E0, void, ExitState, (GPUAutoProfiler_SamplingHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E46750, void, UpdateState, (GPUAutoProfiler_SamplingHandler * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E46830, bool, get_CanExit, (GPUAutoProfiler_SamplingHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E46A10, String *, get_DebugString, (GPUAutoProfiler_SamplingHandler * __this));
}
