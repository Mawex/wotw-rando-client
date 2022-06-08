using namespace app;

namespace app::methods::UserLicenseInformation {
IL2CPP_REGISTER_METHOD(0x013B1840, bool, get_IsFullVersion, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013B1930, bool, get_IsTrial, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013B1A20, bool, get_IsTrialUsed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013B1B10, void, __ctor, (UserLicenseInformation * __this));
IL2CPP_REGISTER_METHOD(0x013B1B10, void, OnLicenseChanged, (UserLicenseInformation * __this));
IL2CPP_REGISTER_METHOD(0x013B1B20, void, __cctor, (MethodInfo * method));
}
