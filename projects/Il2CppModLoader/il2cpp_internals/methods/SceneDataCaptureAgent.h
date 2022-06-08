using namespace app;

namespace app::methods::SceneDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00937960, void, OnInitialize, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00937A90, String__Array *, GetDataHeaderNames, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00937CE0, ValueTuple_2_String_String_, GetCurrentScene, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00938350, String__Array *, GetFrameData, (SceneDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ED58, SceneDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009383A0, void, GetFrameData, (SceneDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SceneDataCaptureAgent * __this));
}
