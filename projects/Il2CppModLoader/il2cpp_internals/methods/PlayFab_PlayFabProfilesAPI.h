using namespace app;

namespace app::methods::PlayFab::PlayFabProfilesAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A34100, void, ForgetAllCredentials, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A34190, void, GetGlobalPolicy, (GetGlobalPolicyRequest * request, Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A342A0, void, GetProfile, (GetEntityProfileRequest * request, Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A343B0, void, GetProfiles, (GetEntityProfilesRequest * request, Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A344C0, void, SetGlobalPolicy, (SetGlobalPolicyRequest * request, Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A345D0, void, SetProfileLanguage, (SetProfileLanguageRequest * request, Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A346E0, void, SetProfilePolicy, (SetEntityProfilePolicyRequest * request, Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
