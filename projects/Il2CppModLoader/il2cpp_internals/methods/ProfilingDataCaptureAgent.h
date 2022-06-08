using namespace app;

namespace app::methods::ProfilingDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (ProfilingDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (ProfilingDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (ProfilingDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C73A70, String__Array *, GetDataHeaderNames, (ProfilingDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C743B0, String__Array *, GetFrameData, (ProfilingDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C828, ProfilingDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C74400, void, GetFrameData, (ProfilingDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ProfilingDataCaptureAgent * __this));
}
