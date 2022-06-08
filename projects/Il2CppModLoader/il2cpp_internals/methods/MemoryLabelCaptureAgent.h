using namespace app;

namespace app::methods::MemoryLabelCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (MemoryLabelCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D7EE0, String__Array *, GetDataHeaderNames, (MemoryLabelCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D8480, void, OnInitialize, (MemoryLabelCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (MemoryLabelCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D8600, String__Array *, GetFrameData, (MemoryLabelCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B7C0, MemoryLabelCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D8650, void, GetFrameData, (MemoryLabelCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x009D89D0, void, __ctor, (MemoryLabelCaptureAgent * __this));
}
