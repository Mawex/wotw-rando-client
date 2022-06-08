using namespace app;

namespace app::methods::MoonDataPlatform::XboxQualityModeManager {
IL2CPP_REGISTER_METHOD(0x00F49900, bool, get_DisableVsyncForPerformanceMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F499A0, void, set_DisableVsyncForPerformanceMode, (bool value));
IL2CPP_REGISTER_METHOD(0x00F49B30, XboxQualityModeManager_QualityMode__Enum, get_CurrentMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F49BD0, void, set_CurrentMode, (XboxQualityModeManager_QualityMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00F49C80, void, ApplyMode, (XboxQualityModeManager_QualityMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxQualityModeManager * __this));
IL2CPP_REGISTER_METHOD(0x00F49FA0, void, __cctor, (MethodInfo * method));
}
