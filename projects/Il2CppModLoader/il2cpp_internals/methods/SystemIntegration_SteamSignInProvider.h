#include <interception_macros.h>

namespace app::methods::SystemIntegration::SteamSignInProvider {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SteamSignInProvider * __this, INetworkConnectivityChecker * netConnectivityChecker));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSignedIn, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSigningIn, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, IPlatformUser *, get_User, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_User, (SteamSignInProvider * __this, IPlatformUser * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasSignInError, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_HasSignInError, (SteamSignInProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowSignInUi, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_LinkToken, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LinkToken, (SteamSignInProvider * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052A290, void, SignInSilently, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052A2A0, void, SignIn, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052A5A0, void, InjectSteamAuthTicket, (SteamSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052AA80, Texture2D *, GetSteamImageAsTexture2D, (int32_t iImage));
IL2CPP_REGISTER_METHODINFO(0x0470C858, SteamSignInProvider_GetSteamImageAsTexture2D__MethodInfo);
}
