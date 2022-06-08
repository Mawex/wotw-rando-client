using namespace app;

namespace app::methods::FPSTestOutput {
IL2CPP_REGISTER_METHOD(0x0098DE70, void, __ctor, (FPSTestOutput * __this, String * outputFileName));
IL2CPP_REGISTER_METHOD(0x0098E800, void, Write, (FPSTestOutput * __this, String__Array * lines));
IL2CPP_REGISTER_METHOD(0x0098E8B0, void, Write, (FPSTestOutput * __this, FPSTestResult * fpsTestResult));
IL2CPP_REGISTER_METHOD(0x0098EC00, void, FinalizePointSamples, (FPSTestOutput * __this));
IL2CPP_REGISTER_METHOD(0x0098ED20, void, Close, (FPSTestOutput * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, GetOutputPath, (FPSTestOutput * __this));
IL2CPP_REGISTER_METHOD(0x0098EDC0, void, __cctor, (MethodInfo * method));
}
