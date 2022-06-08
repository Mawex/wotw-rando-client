using namespace app;

namespace app::methods::DrawCallCountCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (DrawCallCountCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (DrawCallCountCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (DrawCallCountCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00BDBB50, String__Array *, GetDataHeaderNames, (DrawCallCountCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00BDBC40, String__Array *, GetFrameData, (DrawCallCountCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x047322C0, DrawCallCountCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BDBC90, void, GetFrameData, (DrawCallCountCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DrawCallCountCaptureAgent * __this));
}
