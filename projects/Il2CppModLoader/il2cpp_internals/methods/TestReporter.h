using namespace app;

namespace app::methods::TestReporter {
IL2CPP_REGISTER_METHOD(0x010DA6C0, void, __ctor, (TestReporter * __this, String * reportPath));
IL2CPP_REGISTER_METHOD(0x010DA9C0, void, ReportResult, (TestReporter * __this, String * testPath, bool result, String * logFilePath));
IL2CPP_REGISTER_METHOD(0x010DB0A0, void, FinalizeReport, (TestReporter * __this));
IL2CPP_REGISTER_METHOD(0x010DB390, void, SaveLastTestsReportPath, (TestReporter * __this));
IL2CPP_REGISTER_METHOD(0x010DB690, String *, GetLastTestsReportPath, (MethodInfo * method));
}
