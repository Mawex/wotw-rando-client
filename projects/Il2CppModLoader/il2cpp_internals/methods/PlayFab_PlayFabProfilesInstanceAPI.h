using namespace app;

namespace app::methods::PlayFab::PlayFabProfilesInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabProfilesInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabProfilesInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabProfilesInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabProfilesInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabProfilesInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabProfilesInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabProfilesInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x01A347F0, void, GetGlobalPolicy, (PlayFabProfilesInstanceAPI * __this, GetGlobalPolicyRequest * request, Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A34910, void, GetProfile, (PlayFabProfilesInstanceAPI * __this, GetEntityProfileRequest * request, Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A34A30, void, GetProfiles, (PlayFabProfilesInstanceAPI * __this, GetEntityProfilesRequest * request, Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A34B50, void, SetGlobalPolicy, (PlayFabProfilesInstanceAPI * __this, SetGlobalPolicyRequest * request, Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A34C70, void, SetProfileLanguage, (PlayFabProfilesInstanceAPI * __this, SetProfileLanguageRequest * request, Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A34D90, void, SetProfilePolicy, (PlayFabProfilesInstanceAPI * __this, SetEntityProfilePolicyRequest * request, Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
