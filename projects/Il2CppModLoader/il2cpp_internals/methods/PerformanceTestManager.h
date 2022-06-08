#include <interception_macros.h>

namespace app::methods::PerformanceTestManager {
IL2CPP_REGISTER_METHOD(0x00498250, void, ChangeState, (PerformanceTestManager * __this, PerformanceTestManager_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x0476C3B8, PerformanceTestManager_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00498690, void, Awake, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x00498C70, void, Update, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x00498CE0, void, OnApplicationQuit, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x00498D10, bool, ShouldRunReplayAgain, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C388, PerformanceTestManager_ShouldRunReplayAgain__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00498E50, void, FlushAllPerformanceResults, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x00499060, void, WriteSomePerformanceResults, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x00499200, void, OnFinishedReplay, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04743DB8, PerformanceTestManager_OnFinishedReplay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00499380, void, OnGoodPerformance, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04707838, PerformanceTestManager_OnGoodPerformance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00499380, void, OnNotMonitoringPerformance, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0471AE60, PerformanceTestManager_OnNotMonitoringPerformance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00499390, void, DebugLog, (PerformanceTestManager * __this, String * message));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PerformanceTestManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
