using namespace app;

namespace app::methods::SwitchGpuFreqCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (SwitchGpuFreqCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01834240, void, OnInitialize, (SwitchGpuFreqCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (SwitchGpuFreqCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01834250, String__Array *, GetDataHeaderNames, (SwitchGpuFreqCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01834340, String__Array *, GetFrameData, (SwitchGpuFreqCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F988, SwitchGpuFreqCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01834390, void, GetFrameData, (SwitchGpuFreqCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SwitchGpuFreqCaptureAgent * __this));
}
