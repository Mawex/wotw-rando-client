using namespace app;

namespace app::methods::SystemIntegration::XboxSignInProvider {
IL2CPP_REGISTER_METHOD(0x00CDFE20, void, __ctor, (XboxSignInProvider * __this, INetworkConnectivityChecker * networkConnectivityChecker));
IL2CPP_REGISTER_METHOD(0x00CE0530, bool, get_IsSignedIn, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CE0540, bool, get_IsSigningIn, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IPlatformUser *, get_User, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_LinkToken, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LinkToken, (XboxSignInProvider * __this, String * value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SignInOnPressAnyButton, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SignInSilently, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CE0560, void, UserChanged, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04744CA8, XboxSignInProvider_UserChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, SignIn, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CE0760, void, UserSignedOut, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x0477ADC0, XboxSignInProvider_UserSignedOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CE0770, void, Update, (XboxSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CE0900, void, TokenUpdate, (XboxSignInProvider * __this));
}
