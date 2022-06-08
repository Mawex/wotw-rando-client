#include <interception_macros.h>

namespace app::methods::DRSCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (DRSCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00DBF870, String__Array *, GetDataHeaderNames, (DRSCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (DRSCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (DRSCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00DBF9B0, String__Array *, GetFrameData, (DRSCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CD98, DRSCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DBFA00, void, GetFrameData, (DRSCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DRSCaptureAgent * __this));
}
