using namespace app;

namespace app::methods::AkBasePathGetter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetCustomPlatformName, (String * * platformName));
IL2CPP_REGISTER_METHOD(0x026CE960, String *, GetPlatformName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CEA20, String *, GetPlatformBasePath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CEC70, String *, GetFullSoundBankPath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CEDF0, void, FixSlashes, (String * * path, uint16_t separatorChar, uint16_t badChar, bool addTrailingSlash));
IL2CPP_REGISTER_METHOD(0x026CEFA0, void, FixSlashes, (String * * path));
IL2CPP_REGISTER_METHOD(0x026CF0B0, String *, GetSoundbankBasePath, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026CF210, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AkBasePathGetter * __this));
IL2CPP_REGISTER_METHOD(0x026CF2C0, void, __cctor, (MethodInfo * method));
}
