#include <interception_macros.h>

namespace app::methods::LightCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (LightCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (LightCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (LightCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0114A570, String__Array *, GetDataHeaderNames, (LightCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0114A660, String__Array *, GetFrameData, (LightCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04706258, LightCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0114A6B0, void, GetFrameData, (LightCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LightCaptureAgent * __this));
}
