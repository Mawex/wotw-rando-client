using namespace app;

namespace app::methods::ExceptionCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00982F60, void, OnInitialize, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x009830C0, void, OnTestEnd, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00983220, String__Array *, GetDataHeaderNames, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00983310, void, LogReceived, (ExceptionCaptureAgent * __this, String * condition, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0471F5C8, ExceptionCaptureAgent_LogReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00983470, String__Array *, GetFrameData, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B1D8, ExceptionCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009834C0, void, GetFrameData, (ExceptionCaptureAgent * __this, FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x00983630, void, __ctor, (ExceptionCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
