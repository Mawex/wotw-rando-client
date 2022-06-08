using namespace app;

namespace app::methods::JUnitReporter_TestSuite {
IL2CPP_REGISTER_METHOD(0x006498D0, void, __ctor, (JUnitReporter_TestSuite * __this, String * id, String * name));
IL2CPP_REGISTER_METHOD(0x00649A40, int32_t, get_Tests, (JUnitReporter_TestSuite * __this));
IL2CPP_REGISTER_METHOD(0x00649AD0, int32_t, get_Failures, (JUnitReporter_TestSuite * __this));
IL2CPP_REGISTER_METHOD(0x00649CC0, JUnitReporter_TestCase *, AddTestCase, (JUnitReporter_TestSuite * __this, String * name, String * className));
IL2CPP_REGISTER_METHOD(0x00649FF0, JUnitReporter_TestCase *, AddTestCase, (JUnitReporter_TestSuite * __this, JUnitReporter_TestCase * testCase));
IL2CPP_REGISTER_METHOD(0x0064A0C0, String *, ToString, (JUnitReporter_TestSuite * __this));
IL2CPP_REGISTER_METHOD(0x0064A530, void, BeginOutputFile, (JUnitReporter_TestSuite * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x0064AAB0, void, WriteToFile, (JUnitReporter_TestSuite * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x0064AE30, void, FinalizeOutputFile, (String * filePath));
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetTestDuration, (JUnitReporter_TestSuite * __this, TimeSpan timeSpan));
}
