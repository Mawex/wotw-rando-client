#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwitchGpuFreqCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::SwitchGpuFreqCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01834240, void, OnInitialize, (app::SwitchGpuFreqCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::SwitchGpuFreqCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01834250, app::String__Array *, GetDataHeaderNames, (app::SwitchGpuFreqCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01834340, app::String__Array *, GetFrameData_1, (app::SwitchGpuFreqCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F988, SwitchGpuFreqCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01834390, void, GetFrameData_2, (app::SwitchGpuFreqCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SwitchGpuFreqCaptureAgent * this_ptr))
}
