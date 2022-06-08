using namespace app;

namespace app::methods::CleanupCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (CleanupCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (CleanupCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (CleanupCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01324170, String__Array *, GetDataHeaderNames, (CleanupCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01324540, String__Array *, GetFrameData, (CleanupCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04733D70, CleanupCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01324590, void, GetFrameData, (CleanupCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CleanupCaptureAgent * __this));
}
