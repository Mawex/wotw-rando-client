#include <interception_macros.h>

namespace app::methods::SystemIntegration::PlayFabSignInProvider {
IL2CPP_REGISTER_METHOD(0x0051DAB0, bool, get_IsSignedIn, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSigningIn, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSigningIn, (PlayFabSignInProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0051DB60, bool, get_IsOnline, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, IPlatformUser *, get_User, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowSignInUi, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051DBF0, String *, get_LinkToken, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_EntityId, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_EntityId, (PlayFabSignInProvider * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_EntityType, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EntityType, (PlayFabSignInProvider * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051DC70, String *, get_CustomID, ());
IL2CPP_REGISTER_METHOD(0x0051DD10, void, __ctor, (PlayFabSignInProvider * __this, INetworkConnectivityChecker * netConnectivityChecker, ISignInProvider * liveSignInProvider, ISignInProvider * nonLiveSignInProvider));
IL2CPP_REGISTER_METHOD(0x0051E390, void, SignInSilently, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051E3A0, void, SignIn, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0051E9F0, void, SignInAs, (PlayFabSignInProvider * __this, IPlatformUser * user));
IL2CPP_REGISTER_METHOD(0x0051EBA0, void, LoginSucceed, (PlayFabSignInProvider * __this, LoginResult * result));
IL2CPP_REGISTER_METHODINFO(0x0476F5D0, PlayFabSignInProvider_LoginSucceed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0051EE00, void, EnsureProfilePolicy, (PlayFabSignInProvider * __this, String * entityId, String * entityKey));
IL2CPP_REGISTER_METHOD(0x0051F7F0, void, LoginError, (PlayFabSignInProvider * __this, PlayFabError * error));
IL2CPP_REGISTER_METHODINFO(0x0476C4E0, PlayFabSignInProvider_LoginError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0051F8D0, void, EnsureProperDisplayName, (PlayFabSignInProvider * __this, String * desiredDisplayName));
IL2CPP_REGISTER_METHOD(0x0051FE00, void, Update, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00520090, void, DisplayNameUpdate, (PlayFabSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00520170, void, PlayFabPlatformLinkUpdate, (PlayFabSignInProvider * __this, ISignInProvider * provider, String * service));
IL2CPP_REGISTER_METHOD(0x00520E20, void, OnLinkSuccess, (PlayFabSignInProvider * __this, String * result, String * service));
IL2CPP_REGISTER_METHOD(0x00520EE0, void, OnLinkFailed, (PlayFabSignInProvider * __this, PlayFabError * error, String * service));
IL2CPP_REGISTER_METHOD(0x00521030, void, SignOut, ());
IL2CPP_REGISTER_METHOD(0x005210C0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x005210D0, void, _EnsureProperDisplayName_b__51_0, (PlayFabSignInProvider * __this, UpdateUserTitleDisplayNameResult * success));
IL2CPP_REGISTER_METHODINFO(0x04763EC8, PlayFabSignInProvider__EnsureProperDisplayName_b__51_0__MethodInfo);
}
