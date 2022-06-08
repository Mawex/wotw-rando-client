using namespace app;

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestBulkOutput {
IL2CPP_REGISTER_METHOD(0x0149F6A0, void, __ctor, (HierarchyTestBulkOutput * __this, HierarchyTestBulkToolData * data, String * fileName, String * fileExtension));
IL2CPP_REGISTER_METHOD(0x0149F810, String *, Save, (HierarchyTestBulkOutput * __this, String * fileName, String * fileExtension));
IL2CPP_REGISTER_METHOD(0x0149FBC0, void, BuildContent, (HierarchyTestBulkOutput * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x014A02A0, void, AppendResults, (HierarchyTestBulkOutput * __this, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * sortedResults, String * tag, String * rootName, StringBuilder * sb, bool checkError));
IL2CPP_REGISTER_METHOD(0x014A0460, String *, FormatResult, (HierarchyTestBulkOutput * __this, String * tag, String * rootName, HPerfTestResult * result));
}
