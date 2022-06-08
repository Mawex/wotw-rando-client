#include <interception_macros.h>

namespace app::methods::SystemIntegration::GrdkSignInProvider {
IL2CPP_REGISTER_METHOD(0x00514C90, GrdkSignInProvider *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00514D30, void, set_Instance, (GrdkSignInProvider * value));
IL2CPP_REGISTER_METHOD(0x00514DE0, void, __ctor, (GrdkSignInProvider * __this, INetworkConnectivityChecker * netConnectivityChecker));
IL2CPP_REGISTER_METHOD(0x005150A0, bool, get_IsSignedIn, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x005150C0, bool, get_IsSigningIn, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IPlatformUser *, get_User, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_User, (GrdkSignInProvider * __this, IPlatformUser * value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_HasSignInError, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_HasSignInError, (GrdkSignInProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x005150E0, String *, get_LinkToken, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SignInOnPressAnyButton, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SignInSilently, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515180, void, SignIn, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x005154C0, void, GrdkInternalSignInComplete, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04742080, GrdkSignInProvider_GrdkInternalSignInComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00515570, void, GrdkInternalSignInFailed, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x047638B8, GrdkSignInProvider_GrdkInternalSignInFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00515590, void, PopulateUser, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515720, void, OnSignInResolved, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515810, void, Update, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515820, void, UpdateToken, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515BE0, void, OnSignedOut, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04793B88, GrdkSignInProvider_OnSignedOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00515E80, void, SignedInAgainWithNewOrInvalidUser, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515EA0, void, PauseTheGame, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00515F60, void, SendUserToMainMenu, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00516170, void, ClearCachedData, (GrdkSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00516240, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x005162D0, void, _PopulateUser_b__37_0, (GrdkSignInProvider * __this, Byte__Array * bytes));
IL2CPP_REGISTER_METHODINFO(0x04759A90, GrdkSignInProvider__PopulateUser_b__37_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00516900, void, _UpdateToken_b__40_0, (GrdkSignInProvider * __this, String * token, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0472D370, GrdkSignInProvider__UpdateToken_b__40_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00516A30, void, _UpdateToken_b__40_1, (GrdkSignInProvider * __this, int32_t hresults));
IL2CPP_REGISTER_METHODINFO(0x0471B5B0, GrdkSignInProvider__UpdateToken_b__40_1__MethodInfo);
}
