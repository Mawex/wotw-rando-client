#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUAutoProfiler_Sample {
IL2CPP_REGISTER_METHOD(0x002FD1D0, GPUAutoProfiler_Sample_SamplingState__Enum, get_State, (GPUAutoProfiler_Sample * __this));
IL2CPP_REGISTER_METHOD(0x00E45420, void, set_State, (GPUAutoProfiler_Sample * __this, GPUAutoProfiler_Sample_SamplingState__Enum value));
IL2CPP_REGISTER_METHOD(0x00E45530, void, __ctor, (GPUAutoProfiler_Sample * __this, GPUAutoProfilerReport * report));
IL2CPP_REGISTER_METHOD(0x00E45A70, void, StartSampling, (GPUAutoProfiler_Sample * __this));
IL2CPP_REGISTER_METHOD(0x00E45C50, void, StartCooldown, (GPUAutoProfiler_Sample * __this));
IL2CPP_REGISTER_METHOD(0x00E45D10, void, EndSampling, (GPUAutoProfiler_Sample * __this));
IL2CPP_REGISTER_METHOD(0x00E45F60, void, Update, (GPUAutoProfiler_Sample * __this));
}
