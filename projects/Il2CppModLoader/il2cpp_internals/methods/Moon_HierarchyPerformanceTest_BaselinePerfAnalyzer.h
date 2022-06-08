using namespace app;

namespace app::methods::Moon::HierarchyPerformanceTest::BaselinePerfAnalyzer {
IL2CPP_REGISTER_METHOD(0x0149B670, bool, Analyze, (BaselinePerfAnalyzer * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results));
IL2CPP_REGISTER_METHOD(0x0149B800, double, GetAverageGPUTime, (BaselinePerfAnalyzer * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results));
IL2CPP_REGISTER_METHOD(0x0149B8E0, double, GetAverageSRPGameViewTime, (BaselinePerfAnalyzer * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results));
IL2CPP_REGISTER_METHOD(0x0149B9C0, bool, ValidateResultsGPUDispersion, (BaselinePerfAnalyzer * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results, double avgGpu));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BaselinePerfAnalyzer * __this));
}
