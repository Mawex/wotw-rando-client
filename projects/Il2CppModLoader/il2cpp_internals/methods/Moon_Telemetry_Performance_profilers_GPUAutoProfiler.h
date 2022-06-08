#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUAutoProfiler {
IL2CPP_REGISTER_METHOD(0x00E41310, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00E413E0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00E416C0, GPUAutoProfilerReport *, get_LastReport, ());
IL2CPP_REGISTER_METHOD(0x00E41760, void, set_LastReport, (GPUAutoProfilerReport * value));
IL2CPP_REGISTER_METHOD(0x00E41810, int32_t, get_SampleDuration, ());
IL2CPP_REGISTER_METHOD(0x00E41900, int32_t, get_SampleInterval, ());
IL2CPP_REGISTER_METHOD(0x00E419F0, int32_t, get_BaselineMeasurementTime, ());
IL2CPP_REGISTER_METHOD(0x00E41AE0, void, InitializeSamples, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E41E00, void, SetState, (GPUAutoProfiler * __this, GPUAutoProfiler_ProfilerState__Enum state));
IL2CPP_REGISTER_METHOD(0x00E42220, void, OnEnable, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E42690, void, OnDisable, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E42A30, void, StartTest, ());
IL2CPP_REGISTER_METHOD(0x00E42C30, void, StopTest, ());
IL2CPP_REGISTER_METHOD(0x00E42D90, void, Update, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E43130, void, OnGUI, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E43460, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x00E434F0, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x00E43580, void, EnsureImguiRegistered, (GPUAutoProfiler * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00E43680, void, __ctor, (GPUAutoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00E437E0, void, __cctor, ());
}
