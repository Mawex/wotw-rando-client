using namespace app;

namespace app::methods::PlayFab::PlayFabAuthenticationInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabAuthenticationInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabAuthenticationInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabAuthenticationInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabAuthenticationInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabAuthenticationInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabAuthenticationInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4500, bool, IsEntityLoggedIn, (PlayFabAuthenticationInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabAuthenticationInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4540, void, GetEntityToken, (PlayFabAuthenticationInstanceAPI * __this, GetEntityTokenRequest * request, Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
