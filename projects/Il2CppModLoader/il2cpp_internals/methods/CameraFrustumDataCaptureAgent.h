using namespace app;

namespace app::methods::CameraFrustumDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x01689D10, bool, get_IsCaptureAgentValid, (CameraFrustumDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (CameraFrustumDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (CameraFrustumDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01689DC0, String__Array *, GetDataHeaderNames, (CameraFrustumDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x01689EB0, String__Array *, GetFrameData, (CameraFrustumDataCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0470BBD0, CameraFrustumDataCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01689F00, void, GetFrameData, (CameraFrustumDataCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CameraFrustumDataCaptureAgent * __this));
}
