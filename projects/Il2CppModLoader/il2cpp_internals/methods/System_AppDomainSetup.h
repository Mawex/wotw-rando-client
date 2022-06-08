using namespace app;

namespace app::methods::System::AppDomainSetup {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AppDomainSetup * __this));
IL2CPP_REGISTER_METHOD(0x0228F7F0, void, __ctor, (AppDomainSetup * __this, AppDomainSetup * setup));
IL2CPP_REGISTER_METHOD(0x0228F8D0, String *, GetAppBase, (String * appBase));
IL2CPP_REGISTER_METHODINFO(0x047819F8, AppDomainSetup_GetAppBase__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228FDD0, String *, get_ApplicationBase, (AppDomainSetup * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_LicenseFile, (AppDomainSetup * __this));
}
