using namespace app;

namespace app::methods::Moon::HierarchyPerformanceTest::BaselineMeasureTask {
IL2CPP_REGISTER_METHOD(0x0149A2C0, void, add_OnFailed, (BaselineMeasureTask * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x0149A3B0, void, remove_OnFailed, (BaselineMeasureTask * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x0149A4A0, void, __ctor, (BaselineMeasureTask * __this, SceneSample * model));
IL2CPP_REGISTER_METHOD(0x0149A6C0, void, Update, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149A710, void, UpdateState, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149A8E0, void, ChangeState, (BaselineMeasureTask * __this, BaselineMeasureTask_BaselineMeasureState__Enum newState));
IL2CPP_REGISTER_METHOD(0x0149ABB0, void, FinishMeasure, (BaselineMeasureTask * __this, double cpuTime, double gpuTime, double srpTime));
IL2CPP_REGISTER_METHOD(0x0149B050, void, CacheStartIndex, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149B0F0, void, CacheEndIndex, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149B190, double, GetCurrentCapturedCPUTime, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149B240, double, GetCurrentCapturedGPUTime, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149B2F0, double, GetCurrentCapturedSRPGameViewTime, (BaselineMeasureTask * __this));
IL2CPP_REGISTER_METHOD(0x0149B3A0, HPerfTestResult *, GetAverageResult, (BaselineMeasureTask * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results));
}
