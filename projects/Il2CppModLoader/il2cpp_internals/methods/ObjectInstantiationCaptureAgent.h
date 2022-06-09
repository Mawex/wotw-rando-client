#include <interception_macros.h>

namespace app::methods::ObjectInstantiationCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::ObjectInstantiationCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060EFD0, void, OnInitialize, (app::ObjectInstantiationCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060F070, String__Array *, GetFrameData, (app::ObjectInstantiationCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::ObjectInstantiationCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060F270, String__Array *, GetDataHeaderNames, (app::ObjectInstantiationCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ObjectInstantiationCaptureAgent * this_ptr));
}
