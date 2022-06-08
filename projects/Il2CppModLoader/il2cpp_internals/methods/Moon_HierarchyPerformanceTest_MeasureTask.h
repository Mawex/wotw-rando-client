using namespace app;

namespace app::methods::Moon::HierarchyPerformanceTest::MeasureTask {
IL2CPP_REGISTER_METHOD(0x014A89A0, void, __ctor, (MeasureTask * __this, HierarchyDebugMenu_GameObjectItem * item, SceneSample * model, IProfilingDataProvider * dataProvider, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x014A89C0, void, Update, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A8ED0, void, StartMeasure, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A9090, void, FinishMeasure, (MeasureTask * __this, double cpuTime, double gpuTime, double srpGameViewTime, bool setMoonHiddenToHierarchy));
IL2CPP_REGISTER_METHOD(0x014A93C0, void, CacheStartIndex, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A9460, void, CacheEndIndex, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A9500, double, GetCurrentCapturedCPUTime, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A95A0, double, GetCurrentCapturedGPUTime, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A9640, double, GetCurrentCapturedSRPGameViewTime, (MeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x014A96E0, String *, GetFullPath, (MeasureTask * __this, GameObject * gameObject));
}
