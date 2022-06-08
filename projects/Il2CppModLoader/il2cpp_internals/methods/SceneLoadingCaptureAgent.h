#include <interception_macros.h>

namespace app::methods::SceneLoadingCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (SceneLoadingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (SceneLoadingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (SceneLoadingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00BA6D00, String__Array *, GetDataHeaderNames, (SceneLoadingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00BA6E40, String__Array *, GetFrameData, (SceneLoadingCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04700EA0, SceneLoadingCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BA6E90, void, GetFrameData, (SceneLoadingCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x00BA72A0, void, __ctor, (SceneLoadingCaptureAgent * __this));
}
