using namespace app;

namespace app::methods::ScenesToSkip {
IL2CPP_REGISTER_METHOD(0x010683F0, void, __ctor, (ScenesToSkip * __this));
IL2CPP_REGISTER_METHOD(0x01068590, void, __ctor, (ScenesToSkip * __this, String * inputFilePath));
IL2CPP_REGISTER_METHOD(0x01068720, bool, ShouldSkipScene, (ScenesToSkip * __this, String * scene));
IL2CPP_REGISTER_METHOD(0x010688A0, void, ParseInuptFile, (ScenesToSkip * __this, String * inputFilePath));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
