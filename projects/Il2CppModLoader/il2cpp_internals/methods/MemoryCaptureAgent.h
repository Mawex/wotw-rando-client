using namespace app;

namespace app::methods::MemoryCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (MemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D6AB0, void, OnInitialize, (MemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (MemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D6C00, String__Array *, GetDataHeaderNames, (MemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D6CD0, String__Array *, GetFrameData, (MemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04711CA8, MemoryCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D6D20, void, GetFrameData, (MemoryCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MemoryCaptureAgent * __this));
}
