#include <interception_macros.h>

namespace app::methods::JUnitReporter_TestSuites {
IL2CPP_REGISTER_METHOD(0x0064B2F0, void, __ctor, (JUnitReporter_TestSuites * __this, String * id, String * name));
IL2CPP_REGISTER_METHOD(0x0064B460, JUnitReporter_TestSuite *, AddTestSuite, (JUnitReporter_TestSuites * __this, JUnitReporter_TestSuite * testSuite));
IL2CPP_REGISTER_METHOD(0x0064B500, void, BeginOutputFile, (JUnitReporter_TestSuites * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x0064BD70, void, WriteToFile, (JUnitReporter_TestSuites * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x0064C0F0, void, FinalizeOutputFile, (JUnitReporter_TestSuites * __this, String * filePath));
}
