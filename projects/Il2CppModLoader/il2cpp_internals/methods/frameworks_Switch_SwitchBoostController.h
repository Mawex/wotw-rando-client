#include <interception_macros.h>

namespace app::methods::frameworks::Switch::SwitchBoostController {
IL2CPP_REGISTER_METHOD(0x00F5A010, bool, get_GPUBoostAutoMode, ());
IL2CPP_REGISTER_METHOD(0x00F5A0B0, void, set_GPUBoostAutoMode, (bool value));
IL2CPP_REGISTER_METHOD(0x00F5A160, float, get_GPUAutoBoostDRSThreshold, ());
IL2CPP_REGISTER_METHOD(0x00F5A200, void, set_GPUAutoBoostDRSThreshold, (float value));
IL2CPP_REGISTER_METHOD(0x00F5A2B0, int32_t, get_GPUAutoBoostBadSamplesBeforeEngaging, ());
IL2CPP_REGISTER_METHOD(0x00F5A350, void, set_GPUAutoBoostBadSamplesBeforeEngaging, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00F5A400, int32_t, get_GPUAutoBoostGoodSamplesBeforeDisabling, ());
IL2CPP_REGISTER_METHOD(0x00F5A4A0, void, set_GPUAutoBoostGoodSamplesBeforeDisabling, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00F5A550, int32_t, get_GPUAutoBoostSampleLengthFrames, ());
IL2CPP_REGISTER_METHOD(0x00F5A5F0, void, set_GPUAutoBoostSampleLengthFrames, (int32_t value));
IL2CPP_REGISTER_METHOD(0x00F5A710, bool, get_CPUBoostMode, ());
IL2CPP_REGISTER_METHOD(0x00F5A7B0, void, set_CPUBoostMode, (bool value));
IL2CPP_REGISTER_METHOD(0x00F5A860, SwitchBoostController_HandheldGPUBoostMode__Enum, get_HandheldPerformanceConfiguration, ());
IL2CPP_REGISTER_METHOD(0x00F5A900, void, set_HandheldPerformanceConfiguration, (SwitchBoostController_HandheldGPUBoostMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00F5A9B0, void, SubmitAutoBoostStatSample, (float gpuTime, float drsX, float drsY, bool drsEnabled));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SwitchBoostController * __this));
IL2CPP_REGISTER_METHOD(0x00F5AEA0, void, __cctor, ());
}
