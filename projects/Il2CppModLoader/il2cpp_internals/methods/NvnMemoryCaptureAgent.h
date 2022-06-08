using namespace app;

namespace app::methods::NvnMemoryCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (NvnMemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060D0F0, String__Array *, GetDataHeaderNames, (NvnMemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060D170, void, OnInitialize, (NvnMemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (NvnMemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060D2D0, String__Array *, GetFrameData, (NvnMemoryCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04774390, NvnMemoryCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0060D320, void, GetFrameData, (NvnMemoryCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NvnMemoryCaptureAgent * __this));
}
