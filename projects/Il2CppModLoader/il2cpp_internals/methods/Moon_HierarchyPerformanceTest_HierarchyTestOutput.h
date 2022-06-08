using namespace app;

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestOutput {
IL2CPP_REGISTER_METHOD(0x014A35B0, void, __ctor, (HierarchyTestOutput * __this, SceneTestData * data));
IL2CPP_REGISTER_METHOD(0x014A3710, void, AppendResults, (HierarchyTestOutput * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * sortedResults, String * tag, StringBuilder * sb, bool checkError));
IL2CPP_REGISTER_METHOD(0x014A38B0, String *, FormatResult, (HierarchyTestOutput * __this, String * tag, HPerfTestResult * result));
IL2CPP_REGISTER_METHOD(0x014A3C40, void, BuildContent, (HierarchyTestOutput * __this, StringBuilder * sb));
}
