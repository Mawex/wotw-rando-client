#include <interception_macros.h>

namespace app::methods::Moon::nanoProfiler::NanoProfiler {
IL2CPP_REGISTER_METHOD(0x00F2DAC0, NanoProfiler *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00F2DB60, void, set_Instance, (NanoProfiler * value));
IL2CPP_REGISTER_METHOD(0x006410F0, int32_t, get_CurrentFrameIndex, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_CurrentFrameId, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2DC10, void, Awake, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2DE20, void, Update, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2DE80, void, FixedUpdate, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2DEF0, int32_t, GetMetricIndex, (NanoProfiler * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x00F2DFA0, float, GetMetricValueInMS, (NanoProfiler * __this, Metric__Enum metric, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00F2E000, float, GetLastCompletedMetricValueInMS, (NanoProfiler * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x00F2E060, void, ToggleShowGraph, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2E570, void, BeginSimulation, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2E590, void, EndSimulation, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFrame, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2E680, void, EndFrame, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F2F270, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x00F2F3B0, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x00F2F4F0, double, GetAverageMetricTimeInMSInFrameRange, (NanoProfiler * __this, Metric__Enum m, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x00F2F670, double, GetPeakMetricTimeInMSInFrameRange, (NanoProfiler * __this, Metric__Enum m, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x00F2F830, void, BeginSimulationCallback, ());
IL2CPP_REGISTER_METHODINFO(0x0473A540, NanoProfiler_BeginSimulationCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2F940, void, EndSimulationCallback, ());
IL2CPP_REGISTER_METHODINFO(0x04767650, NanoProfiler_EndSimulationCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2FB10, void, BeginPlayerLoopCallback, ());
IL2CPP_REGISTER_METHODINFO(0x0478A760, NanoProfiler_BeginPlayerLoopCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2FC70, void, EndPlayerLoopCallback, ());
IL2CPP_REGISTER_METHODINFO(0x0472CF60, NanoProfiler_EndPlayerLoopCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2FE00, void, InjectToPlayerLoop, (PlayerLoopSystem * playerLoop));
IL2CPP_REGISTER_METHOD(0x00F30100, void, __ctor, (NanoProfiler * __this));
IL2CPP_REGISTER_METHOD(0x00F304F0, void, __cctor, ());
}
