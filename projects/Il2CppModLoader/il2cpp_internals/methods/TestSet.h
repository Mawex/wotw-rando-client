using namespace app;

namespace app::methods::TestSet {
IL2CPP_REGISTER_METHOD(0x010DB9C0, void, Init, (TestSet * __this, String * testSetFolderPath, String * testOutputFolderPath, List_1_System_String_ * requestedTests));
IL2CPP_REGISTER_METHOD(0x010DBB60, void, Run, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DBB70, void, TestFinished, (TestSet * __this, bool passed, TestReporter * testReporter));
IL2CPP_REGISTER_METHOD(0x010DBE30, Test *, get_CurrentTest, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DBED0, String *, get_FirstTestSetSceneAssetPath, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DBFE0, void, RunNextTest, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DBFF0, void, RunTest, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DC1F0, bool, HaveMoreTests, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DC280, void, InitializeTests, (TestSet * __this));
IL2CPP_REGISTER_METHOD(0x010DC740, void, FilterRequestedTests, (TestSet * __this, List_1_System_String_ * requestedTests));
IL2CPP_REGISTER_METHOD(0x010DCB60, void, __ctor, (TestSet * __this));
}
