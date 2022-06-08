#include <interception_macros.h>

namespace app::methods::MemoryManagerCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (MemoryManagerCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D8D50, String__Array *, GetDataHeaderNames, (MemoryManagerCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D9070, void, OnInitialize, (MemoryManagerCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (MemoryManagerCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009D91F0, String__Array *, GetFrameData, (MemoryManagerCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x04795780, MemoryManagerCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009D9240, void, GetFrameData, (MemoryManagerCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MemoryManagerCaptureAgent * __this));
}
