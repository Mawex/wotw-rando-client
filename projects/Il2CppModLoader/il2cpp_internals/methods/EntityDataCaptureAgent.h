#include <interception_macros.h>

namespace app::methods::EntityDataCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (EntityDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C906C0, String__Array *, GetDataHeaderNames, (EntityDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C90740, void, OnInitialize, (EntityDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x00C907E0, String__Array *, GetFrameData, (EntityDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (EntityDataCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EntityDataCaptureAgent * __this));
}
