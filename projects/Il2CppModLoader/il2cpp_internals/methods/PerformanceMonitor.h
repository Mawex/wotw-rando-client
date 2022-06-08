using namespace app;

namespace app::methods::PerformanceMonitor {
IL2CPP_REGISTER_METHOD(0x00496C40, void, Awake, (PerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00496E90, void, Update, (PerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00497100, void, OnSceneRootLoadEarlyStart, (PerformanceMonitor * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x04768CA8, PerformanceMonitor_OnSceneRootLoadEarlyStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00497200, FPSTestResult *, GetFPSTestResult, (PerformanceMonitor * __this, SceneManagerScene * scene));
IL2CPP_REGISTER_METHOD(0x00497770, void, SetSampleData, (PerformanceMonitor * __this, FPSSampleData * * fpsSampleData));
IL2CPP_REGISTER_METHOD(0x00497AB0, void, DebugLog, (PerformanceMonitor * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00497B40, void, __ctor, (PerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00497CC0, void, __cctor, (MethodInfo * method));
}
