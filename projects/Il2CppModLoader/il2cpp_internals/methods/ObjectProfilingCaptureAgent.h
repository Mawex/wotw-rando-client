using namespace app;

namespace app::methods::ObjectProfilingCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F3A0, void, OnInitialize, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartProfiling, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StopProfiling, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F440, String *, GetPathForID, (ObjectProfilingCaptureAgent * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateData, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F4C0, String__Array *, GetFrameData, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnTestEnd, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F660, String__Array *, GetDataHeaderNames, (ObjectProfilingCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F6E0, void, __ctor, (ObjectProfilingCaptureAgent * __this));
}
