using namespace app;

namespace app::methods::PoolCaptureAgent {
IL2CPP_REGISTER_METHOD(0x00C5F740, void, MarkUnpooledInstantiation, (String * prefabName, float elapsedMilliseconds));
IL2CPP_REGISTER_METHOD(0x00C5F8A0, void, MarkExhaustedInstantiation, (String * prefabName, int32_t currentObjectCount, int32_t peakObjectCount, float elapsedMilliseconds));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C5FA10, void, OnInitialize, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C5FDC0, String__Array *, GetFrameData, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x047869D8, PoolCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C5FE10, void, GetFrameData, (PoolCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x00C605A0, void, Reset, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C606C0, String__Array *, GetDataHeaderNames, (PoolCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PoolCaptureAgent * __this));
}
