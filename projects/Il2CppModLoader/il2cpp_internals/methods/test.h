using namespace app;

namespace app::methods::test {
IL2CPP_REGISTER_METHOD(0x00F729A0, void, Update, (test * __this));
IL2CPP_REGISTER_METHOD(0x00F72A70, void, OnGUI, (test * __this));
IL2CPP_REGISTER_METHOD(0x0072D940, void, __ctor, (test * __this));
IL2CPP_REGISTER_METHOD(0x010D95F0, void, __ctor, (Test * __this, String * testFilePath));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TestFinished, (Test * __this, bool passed));
IL2CPP_REGISTER_METHOD(0x010D9690, String *, get_TestName, (Test * __this));
}
