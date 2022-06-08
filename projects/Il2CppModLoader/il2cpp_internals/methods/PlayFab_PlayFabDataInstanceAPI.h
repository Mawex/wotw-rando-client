using namespace app;

namespace app::methods::PlayFab::PlayFabDataInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabDataInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabDataInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabDataInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabDataInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabDataInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabDataInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabDataInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x01A26BE0, void, AbortFileUploads, (PlayFabDataInstanceAPI * __this, AbortFileUploadsRequest * request, Action_1_PlayFab_DataModels_AbortFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A26D00, void, DeleteFiles, (PlayFabDataInstanceAPI * __this, DeleteFilesRequest * request, Action_1_PlayFab_DataModels_DeleteFilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A26E20, void, FinalizeFileUploads, (PlayFabDataInstanceAPI * __this, FinalizeFileUploadsRequest * request, Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A26F40, void, GetFiles, (PlayFabDataInstanceAPI * __this, GetFilesRequest * request, Action_1_PlayFab_DataModels_GetFilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A27060, void, GetObjects, (PlayFabDataInstanceAPI * __this, GetObjectsRequest * request, Action_1_PlayFab_DataModels_GetObjectsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A27180, void, InitiateFileUploads, (PlayFabDataInstanceAPI * __this, InitiateFileUploadsRequest * request, Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A272A0, void, SetObjects, (PlayFabDataInstanceAPI * __this, SetObjectsRequest * request, Action_1_PlayFab_DataModels_SetObjectsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
