#include <interception_macros.h>

namespace app::methods::ObjectInstantiationCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (ObjectInstantiationCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060EFD0, void, OnInitialize, (ObjectInstantiationCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F070, String__Array *, GetFrameData, (ObjectInstantiationCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (ObjectInstantiationCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x0060F270, String__Array *, GetDataHeaderNames, (ObjectInstantiationCaptureAgent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ObjectInstantiationCaptureAgent * __this));
}
