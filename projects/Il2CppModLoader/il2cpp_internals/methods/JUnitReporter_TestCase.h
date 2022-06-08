using namespace app;

namespace app::methods::JUnitReporter_TestCase {
IL2CPP_REGISTER_METHOD(0x00649310, void, __ctor, (JUnitReporter_TestCase * __this, String * id, String * name));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_JUnitReporter_Failure_ *, get_Failures, (JUnitReporter_TestCase * __this));
IL2CPP_REGISTER_METHOD(0x00649480, String *, ToString, (JUnitReporter_TestCase * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, SetTestDuration, (JUnitReporter_TestCase * __this, TimeSpan timeSpan));
IL2CPP_REGISTER_METHOD(0x00649820, void, AddFailure, (JUnitReporter_TestCase * __this, JUnitReporter_Failure * failure));
}
