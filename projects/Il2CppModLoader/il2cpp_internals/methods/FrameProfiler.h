using namespace app;

namespace app::methods::FrameProfiler {
IL2CPP_REGISTER_METHOD(0x03150900, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031509B0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x03150BD0, int64_t, GetFrameTimeInNanoSeconds, (FrameProfiler * __this));
IL2CPP_REGISTER_METHOD(0x03150CA0, void, __ctor, (FrameProfiler * __this));
IL2CPP_REGISTER_METHOD(0x03151410, void, DoBeginFrame, (FrameProfiler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DoEndFrame, (FrameProfiler * __this));
IL2CPP_REGISTER_METHOD(0x03151640, void, DoBeginMetric, (FrameProfiler * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x03151770, void, DoEndMetric, (FrameProfiler * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x031518B0, void, BeginMetric, (Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x03151A70, void, EndMetric, (Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x03151C40, void, BeginFrame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03151CF0, void, EndFrame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03151D80, FrameProfiler_FrameData *, GetLastCompletedFrame, (FrameProfiler * __this));
IL2CPP_REGISTER_METHOD(0x03151DC0, void, __cctor, (MethodInfo * method));
}
