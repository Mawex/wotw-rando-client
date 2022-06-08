#include <interception_macros.h>

namespace app::methods::StressTestPlaylist {
IL2CPP_REGISTER_METHOD(0x0065DFB0, void, Start, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065E4E0, void, Update, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065E580, void, SetupStaticConfigs, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065EA60, bool, UseNextConfig, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065EED0, void, QueueResume, (StressTestPlaylist * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x0065EEE0, void, PauseCapture, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065EF00, void, ResumeCapture, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F060, void, ResumeImmediate, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F080, void, PauseBrief, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F0B0, StressTester *, GetNextTest, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F170, bool, IsLastTest, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, Action *, get_OnTestSetupBegin, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_OnTestSetupBegin, (StressTestPlaylist * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Action *, get_OnTestStarted, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_OnTestStarted, (StressTestPlaylist * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, Action *, get_OnTestFinished, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_OnTestFinished, (StressTestPlaylist * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065F200, String *, GetTestID, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDisable, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F260, void, __ctor, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0065F280, void, _UseNextConfig_b__17_0, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D450, StressTestPlaylist__UseNextConfig_b__17_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065F060, void, _UseNextConfig_b__17_1, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E4E8, StressTestPlaylist__UseNextConfig_b__17_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065F060, void, _ResumeCapture_b__20_0, (StressTestPlaylist * __this));
IL2CPP_REGISTER_METHODINFO(0x04799BA0, StressTestPlaylist__ResumeCapture_b__20_0__MethodInfo);
}
