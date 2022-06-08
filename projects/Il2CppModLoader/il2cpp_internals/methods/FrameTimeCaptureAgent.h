#include <interception_macros.h>

namespace app::methods::FrameTimeCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (FrameTimeCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (FrameTimeCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (FrameTimeCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01643440, String__Array *, GetDataHeaderNames, (FrameTimeCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x016438C0, String__Array *, GetFrameData, (FrameTimeCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04778C70, FrameTimeCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01643910, void, GetFrameData, (FrameTimeCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FrameTimeCaptureAgent * __this));
}
