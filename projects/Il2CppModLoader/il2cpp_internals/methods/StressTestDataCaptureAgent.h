#include <interception_macros.h>

namespace app::methods::StressTestDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x0065DBB0, bool, get_IsCaptureAgentValid, (StressTestDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (StressTestDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (StressTestDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0065DC80, String__Array *, GetDataHeaderNames, (StressTestDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0065DDC0, String__Array *, GetFrameData, (StressTestDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04712EE0, StressTestDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065DE10, void, GetFrameData, (StressTestDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StressTestDataCaptureAgent * __this));
}
