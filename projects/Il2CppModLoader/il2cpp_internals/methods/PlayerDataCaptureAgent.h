#include <interception_macros.h>

namespace app::methods::PlayerDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x0140DC40, bool, get_IsCaptureAgentValid, (PlayerDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (PlayerDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (PlayerDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0140DCE0, String__Array *, GetDataHeaderNames, (PlayerDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0140DDD0, String__Array *, GetFrameData, (PlayerDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04746618, PlayerDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0140DE20, void, GetFrameData, (PlayerDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayerDataCaptureAgent * __this));
}
