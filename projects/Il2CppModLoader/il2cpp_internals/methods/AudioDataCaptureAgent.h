using namespace app;

namespace app::methods::AudioDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (AudioDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (AudioDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (AudioDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00857900, String__Array *, GetDataHeaderNames, (AudioDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00857E90, String__Array *, GetFrameData, (AudioDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04757578, AudioDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00857EE0, void, GetFrameData, (AudioDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AudioDataCaptureAgent * __this));
}
