using namespace app;

namespace app::methods::PlayFab::PlayFabAuthenticationAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x017B4070, bool, IsEntityLoggedIn, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x017B4140, void, ForgetAllCredentials, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x017B41D0, void, GetEntityToken, (GetEntityTokenRequest * request, Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
